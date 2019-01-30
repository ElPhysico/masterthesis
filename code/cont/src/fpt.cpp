#include "fpt.hpp"


/* Functions */
/* Returns fpt+error averaged over N using parameter p for the walker. */
pair<double, double> mfpt(double p)
{
	cout << "\n ==> p = " << p << "...";
	double totalSteps = 0.0;
	double totalSqSteps = 0.0;
	for (int run = 0; run < svar.N; run++) {
		double nSteps = 0.0;
		walker.setup(p);
		initTarget();
		walker.init();
		while (!walker.targetFound()) {
			nSteps += 1.0;
			walker.step();
		}
		totalSteps += nSteps;
		totalSqSteps += nSteps * nSteps;
	}
	double fpt = totalSteps / (1.0 * svar.N);
	double fpt2 = totalSqSteps / (1.0 * svar.N);

	double stDev = sqrt(fpt2 - fpt * fpt);
	cout << "\n-> finished!";
	return make_pair(fpt, stDev / sqrt(svar.N));
}

/* Writes header of fpt file. */
void headerMFPT(string &file)
{
	if (!fileExists(file)) {
		FILE *outf;
		outf = fopen(file.c_str(), "a");
		fprintf(outf, "#System variables:");
		fprintf(outf, "\n#Boundary type: %i", svar.bc);
		fprintf(outf, "\n#System Length: %f", svar.L);
		fprintf(outf, "\n#Detection Radius: %f", svar.D);
		fprintf(outf, "\n#Ensembles: %i", svar.N);
		fprintf(outf, "\n\n#p\t<fpt>\tdelta\t<fpt>/<fpt>_0\tdelta\n");
		fclose(outf);

	}
}

/* Prints the fpt data to the file in file. */
void printMFPT(string &file, double p, pair<double, double> data)
{
	FILE *outf;
	outf = fopen(file.c_str(), "a");
	fprintf(outf, "%.3f", p);
	fprintf(outf, "\t%f\t%f", data.first, data.second);
	fprintf(outf, "\t0.0\t0.0");
	fprintf(outf, "\n");
	fclose(outf);
}

/* Starts mfpt simulation for persistency p. */
void MFPT(string &file, double p)
{
        headerMFPT(file);
        cout << "\n\n:: Starting MFPT simulation...";
        pair<double, double> tmp = mfpt(p);
        printMFPT(file, p, tmp);
}
