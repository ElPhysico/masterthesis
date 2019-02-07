set terminal png size 1000, 800

set title "Testing"
set xlabel "l_p / L"
set ylabel "<#steps> / <#steps>_0"

set yrange [0:1.5]

set output "./testing2.png"
plot "./mfpt-L=10-N=10000.dat" using 1:5:6 ti "L=10" with yerr, \
	"./mfpt-L=100-N=10000.dat" using 1:5:6 ti "L=100" with yerr
