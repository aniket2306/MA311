set term postscript enhanced color 
set output '| ps2pdf - function.pdf  '

set ylabel 'Relative Error'
set xlabel 'Sampling Points'
#set yran[0.1:1.1]
set key right  top
set grid
p 'q3.dat' u 1:2 t '' w lp lw 2 lc rgb '#000000'

