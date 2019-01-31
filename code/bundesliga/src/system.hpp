#ifndef SYSTEM
#define SYSTEM

#include <iostream>     /* cout */
#include <string.h>     /* Strings */
#include <random>       /* Random number generation */
#include <chrono>       /* time functions */
#include <math.h>       /* Math */
#include <vector>       /* Vectors */

using namespace std;


/* Classes and Structures */
struct team {
        /* Team identifier */
        int id;
        /* Team name */
        string name;
        /* Team values */
        double ang, mit, def, ges;
        /* League stats */
        int pos, pts, gf, ga;
};

struct game {
        /* Matchday */
        int day;
        /* Teams identifiers */
        int home, guest;
        /* Score: homegoals guestgoals */
        int hG, gG;
};


/* Functions */
double realRand();
int geometric(double p);


/* Variables */
extern team teams[18];
extern game schedule[17][9];


#endif
