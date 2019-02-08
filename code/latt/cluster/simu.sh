#!/bin/bash
#for nRuns in 100000 #1000000 10000000
#	do
#		for p in 0.1 0.2 0.3 0.4
#			do
#				qsub -N FPT-nRuns=$nRuns -v nRuns=$nRuns,p=$p fpt.qsub
#		done
#done

for N in 1000000
do
	for L in 10 100 200 500 1000
	do
		for D in 1
		do
			for alpha in 0.5
			do
				for rlp in $(seq 0.01 0.01 1) #$(seq 0 0.05 0.95)
				do
					qsub -N FPT++rlp=$rlp++L=$L -v N=$N,L=$L,D=$D,alpha=$alpha,rlp=$rlp fpt.qsub
				done
				# job for pure diffusive walker below
				rlp=$(bc -l <<< "1.0/0.75/$L")
				qsub -N FPT++rlp=$rlp++L=$L -v N=$N,L=$L,D=$D,alpha=$alpha,rlp=$rlp fpt.qsub
			done
		done	
	done
done
		
