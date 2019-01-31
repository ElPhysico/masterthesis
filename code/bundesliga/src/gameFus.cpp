#include "gameFus.hpp"

/* Functions */

/* Print Functions */
/* Prints one team with corresponding variables to cout */
void printTeam(team team)
{
        cout << team.name << " (ID: " << team.id << ")\n";
        cout << "ANG = " << team.ang << "\n";
        cout << "MIT = " << team.mit << "\n";
        cout << "DEF = " << team.def << "\n";
        cout << "GES = " << team.ges << "\n";
}

/* Prints all teams with corresponding variables to cout */
void printTeams(team teams[])
{
        for (int i = 0; i < 18; i++) {
                printTeam(teams[i]);
                cout << "\n";
        }
}

/* Prints league standing for given team */
void teamStanding(team team)
{
        cout << team.pos+1 << ". ";
        cout << team.name << " (" << team.id << ")\t\t";
        cout << team.gf << " " << team.ga << "\t" << team.pts;
        cout << "\n";
}

/* Prints current standings of league */
void printStandings(team teams[])
{
        cout << "Team\t\t\tGF GA\tPTS\n\n";
        for (int place = 0; place < 18; place++) {
                for (int id = 0; id < 18; id++) {
                        if (teams[id].pos == place) teamStanding(teams[id]);
                }
        }
}

/* Prints gameday schedule to cout */
void printGameday(game gameday[])
{
        cout << gameday[0].day + 1 << ". Spieltag:\n";
        for (int i = 0; i < 9; i++) {
                cout << teams[gameday[i].home].name << "\t";
                cout << gameday[i].hG << " : " << gameday[i].gG << "\t";
                cout << teams[gameday[i].guest].name << "\n";
        }
}


/* Calculation functions */
/* Simulates the given game */
void simGame(game &game)
{
        int homeID, guestID;        // IDs of teams
        team home, guest;
        double pH, pG;          // Probability of scoring a goal for h and g

        homeID = game.home;
        guestID = game.guest;

        home = teams[homeID];
        guest = teams[guestID];

        pH = (3*home.ang + 2*home.mit + 1*home.def) / 3e4;
        pG = (3*guest.ang + 2*guest.mit + 1*guest.def) / 3e4;

        /* Algorithm to simulate game result -> */
        for (int min = 0; min < 90; min++) {
                if (realRand() < pH) {
                        game.hG++;
                }
                if (realRand() < pG) {
                        game.gG++;
                }
        }
        if (game.hG > game.gG) {
                teams[homeID].pts += 3;
        } else if (game.hG < game.gG) {
                teams[guestID].pts += 3;
        } else if (game.hG == game.gG) {
                teams[homeID].pts++;
                teams[guestID].pts++;
        }
        /* <- Algorithm to simulate game result */

        teams[homeID].gf += game.hG;
        teams[homeID].ga += game.gG;
        teams[guestID].gf += game.gG;
        teams[guestID].ga += game.hG;
}

/* Simulates the given gameday */
void simGameday(game gameday[])
{
        for (int i = 0; i < 9; i++) {
                simGame(gameday[i]);
        }
}

/* Updates the standings according to pts (todo: +gf, -ga, ID) */
void updateStandings(team teams[])
{
        vector<int> help;
        int maxpts = -1;
        int maxid;
        int remove;

        for (int i = 0; i < 18; i++) {
                help.push_back(teams[i].id);
        }

        for (int pos = 0; pos < 18; pos++) {
                /* find ID of team with most points */
                for (int i = 0; i < help.size(); i++) {
                        if (teams[help[i]].pts > maxpts) {
                                maxid = help[i];
                                maxpts = teams[maxid].pts;
                                remove = i;
                        }
                }
                /* Update teams position and remove team from help vector */
                teams[maxid].pos = pos;
                help.erase(help.begin()+remove);
                maxpts = -1;
        }
}
