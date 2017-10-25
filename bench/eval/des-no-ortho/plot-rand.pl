set terminal pdf
set output 'speed_no_ortho-rand.pdf'
set boxwidth 0.6
set border 3
set tics nomirror

set xtics out
set ytics out
#set xtics rotate by -45

set yrange [0:*]

set key left
set key samplen 2

set ylabel "Throughput (MiB/s)"
set xlabel "Implementation"


set style fill solid noborder
set linetype 1 lc rgb '#4169E1'
set linetype 2 lc rgb '#008000'
set linetype 3 lc rgb '#008000'
set linetype 4 lc rgb '#008000'

#plot 'data_no.dat' using 2:xtic(1) with boxes lt rgb "black", '' using 0:($2+35):2 with labels


plot 'data-rand.dat' using 0:2:($0+1):xtic(1) with boxes linecolor variable title '' , '' using 0:($2+40):2 with labels title ''  ,-1 lc rgb '#008000' lw 3 title "Usuba" ,-1 lc rgb '#4169E1' lw 3 title 'Manual'
