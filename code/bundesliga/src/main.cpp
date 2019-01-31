#include "system.hpp"
#include "init.hpp"
#include "gameFus.hpp"
#include "funcs.hpp"

using namespace std;

/* Variables */

int main(int argc, char const *argv[])
{
        initTeams();
        initSchedule();

        for (int i = 0; i < 18; i++) {
                double p;
                p = (3*teams[i].ang + 2*teams[i].mit + 1*teams[i].def) / 3e4;
                cout << teams[i].name << ": p = " << p << "\n";
        }

        // printTeams(teams);
        // printGameday(schedule[0]);
        for (int i = 0; i < 10; i++) {
                simGameday(schedule[i]);
        }
        // simGameday(schedule[0]);
        // simGameday(schedule[1]);
        // simGameday(schedule[2]);
        // printGameday(schedule[0]);
        // printStandings(teams);
        updateStandings(teams);
        printStandings(teams);

        return 0;
}
