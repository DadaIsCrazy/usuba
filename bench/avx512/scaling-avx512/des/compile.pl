#!/usr/bin/perl

=usage
    
    ./compile.pl [-c] [-r]

To compile and run, `./compile.pl` (or `./compile.pl -c -r`).
To generate the C files from Usuba, `./compile.pl -g`. (not by default)
To compile only, `./compile.pl -c`.
To run only, `./compile.pl -r`

=cut

use strict;
use warnings;
no warnings qw( numeric );
use v5.14;

use FindBin;
use File::Path qw(make_path);

my $NB_LOOP = 20;
my $CC      = 'icc';
my $CFLAGS  = '-O3 -std=gnu11';
my $HEADERS = '-I ../arch';
$| = 1;

my $compile = !@ARGV || "@ARGV" =~ /-c/;
my $run     = !@ARGV || "@ARGV" =~ /-r/;

my @binaries;

my $cipher = 'des';
my @archs = qw( std sse avx avx2 avx512 );



print "Compiling the C sources..." if $compile;
make_path "bin" unless -d "bin";
for my $arch (@archs) {
    my $bin = "bin/$arch";

    my $arch_flag = '-D std';
    if    ($arch eq 'sse')    { $arch_flag = '-xSSE4.2 -D sse'         }
    elsif ($arch eq 'avx')    { $arch_flag = '-xAVX -D sse'            }
    elsif ($arch eq 'avx2')   { $arch_flag = '-xAVX2 -D avx'           }
    elsif ($arch eq 'avx512') { $arch_flag = '-march=native -D avx512' }
    
    my $cmd = "$CC $CFLAGS $arch_flag $HEADERS -I . main.c -o $bin";
    system $cmd if $compile;
    push @binaries, $bin;
}

say " done." if $compile;

exit unless $run;
print "Running benchs... ";

my %res;
for ( 1 .. $NB_LOOP ) {
    print "\rRunning Benchs... $_/$NB_LOOP";
    for my $bin (@binaries) {
        my $cycles = sprintf "%03.02f", `./$bin`; 
        push @{ $res{$bin}->{details} }, $cycles;
        $res{$bin}->{total} += $cycles;
    }
}
say "\rRunning benchs... done.     ";

open my $FP_OUT, '>', 'results.txt';
say "Results:";
for my $bin (sort { $res{$a}->{total} <=> $res{$b}->{total} } @binaries) {
    printf "%8s : %03.02f  [ %s ]\n", $bin, $res{$bin}->{total} / $NB_LOOP,
        (join ", ", @{$res{$bin}->{details}});
    printf $FP_OUT "%8s %03.02f\n", $bin, $res{$bin}->{total} / $NB_LOOP;
}
