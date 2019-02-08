set terminal png size 1000, 800

set title "Testing"
set xlabel "l_p / L"
set ylabel "<#steps> / <#steps>_0"

set yrange [0:]

set output "./testing2.png"
plot "./L=10.dat" using 1:5:6 ti "L=10" with yerr, \
	"./L=100.dat" using 1:5:6 ti "L=100" with yerr, \
	"./L=200.dat" using 1:5:6 ti "L=200" with yerr, \
