#include "funcs.hpp"


/* Functions */
bool fileExists(string &file)
{
        if (FILE *f = fopen(file.c_str(), "r"))
                return true;
        else
                return false;
}
/* creates bin data for geometric distribution */
void checkGeometric(string &file, double p)
{
        int samples = 1e4;
        double bin[100];
        int i;
        for (i = 0; i < 100; i++) {
                bin[i] = 0;
        }
        for (i = 0; i < samples; i++) {
                bin[geometric(p)]++;
        }
        for (i = 0; i < 100; i++) {
                bin[i] /= samples;
        }

        FILE *outf;
        if (!fileExists(file)) {
                outf = fopen(file.c_str(), "a");
                fprintf(outf, "#Goals\tRel-weight");
                fclose(outf);
        }
        outf = fopen(file.c_str(), "a");
        for (i = 0; i < 100; i++) {
                fprintf(outf, "\n%i\t%3f", i, bin[i]);
        }
        fclose(outf);
}
