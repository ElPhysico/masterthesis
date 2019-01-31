#set terminal postscript eps size 16,15 enhanced color font "Helvetica,16" linewidth 8

set terminal png size 1000, 800 #enhanced font "Helvetica,12"

set output "histogram.png"

set style fill solid 0.7 #noborder

set xrange[0:10]

plot "../data/checkGeometric.dat" using 1:2 smooth freq w boxes
