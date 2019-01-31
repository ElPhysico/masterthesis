#ifndef GAMEFUS
#define GAMEFUS

#include "system.hpp"

/* Functions */
/* Print functions */
void printTeam(team team);
void printTeams(team teams[]);
void teamStanding(team team);
void printStandings(team teams[]);
void printGameday(game gameday[]);

/* Calculation functions */
void simGame(game &game);
void simGameday(game gameday[]);
void updateStandings(team teams[]);
#endif
