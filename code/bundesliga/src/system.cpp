#include "system.hpp"

/* Variables */
mt19937::result_type seed = chrono::high_resolution_clock::now().time_since_epoch().count();
mt19937 gen(seed);
uniform_real_distribution<double> dist(0,1);

/* Functions */
/* Returns random x in [0,1] */
double realRand()
{
        return dist(gen);
}

int geometric(double p)
{
        return floor(log(1 - realRand()) / log(1-p));
}
