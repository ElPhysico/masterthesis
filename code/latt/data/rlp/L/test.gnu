set terminal png size 1000, 800

set title "Testing"
set xlabel "l_p / L"
set ylabel "<#steps> / <#steps>_0"

#set yrange [0:]
set xrange [0.05:0.25]

set style line 1 \
    linecolor rgb '#0060ad' \
    linetype 1 linewidth 1 \
    pointtype 7 pointsize 1
set style line 2 \
    linecolor rgb '#dd181f' \
    linetype 1 linewidth 1 \
    pointtype 7 pointsize 1
set style line 3 \
    linecolor rgb '#00ff00' \
    linetype 1 linewidth 1 \
    pointtype 7 pointsize 1
set style line 4 \
    linecolor rgb '#00ffff' \
    linetype 1 linewidth 1 \
    pointtype 7 pointsize 1

set output "./testing3.png"
plot "./L=100.dat" using 1:5:6 ti "L=100" with yerr linestyle 1, \
	"./L=100.dat" using 1:5:6 noti with lines linestyle 1, \
	"./L=200.dat" using 1:5:6 ti "L=200" with yerr linestyle 2, \
	"./L=200.dat" using 1:5:6 noti with lines linestyle 2, \
	"./L=500.dat" using 1:5:6 ti "L=500" with yerr linestyle 3, \
	"./L=500.dat" using 1:5:6 noti with lines linestyle 3, \
	"./L=1000.dat" using 1:5:6 ti "L=1000" with yerr linestyle 4, \
	"./L=1000.dat" using 1:5:6 noti with lines linestyle 4, \
