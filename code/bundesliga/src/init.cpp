#include "init.hpp"


/* Variables */
team teams[18];
game schedule[17][9];


/* Functions */
/* Manual setting up of team */
void initTeams()
{
        int i;

        /*FC Bayern*/
        i = 0;
        teams[i].id = 0;
        teams[i].name = "FC Bayern";
        teams[i].ang = 88.0;
        teams[i].mit = 84.0;
        teams[i].def = 85.0;
        teams[i].ges = 85.0;

        /*Leverkusen*/
        i = 1;
        teams[i].id = 1;
        teams[i].name = "Leverkusen";
        teams[i].ang = 80.0;
        teams[i].mit = 80.0;
        teams[i].def = 79.0;
        teams[i].ges = 80.0;

        /*Dortmund*/
        i = 2;
        teams[i].id = 2;
        teams[i].name = "Dortmund";
        teams[i].ang = 79.0;
        teams[i].mit = 81.0;
        teams[i].def = 79.0;
        teams[i].ges = 80.0;

        /*Schalke*/
        i = 3;
        teams[i].id = 3;
        teams[i].name = "Schalke";
        teams[i].ang = 79.0;
        teams[i].mit = 78.0;
        teams[i].def = 80.0;
        teams[i].ges = 79.0;

        /*M'gladbach*/
        i = 4;
        teams[i].id = 4;
        teams[i].name = "M'gladbach";
        teams[i].ang = 80.0;
        teams[i].mit = 78.0;
        teams[i].def = 77.0;
        teams[i].ges = 78.0;

        /*TSG Hoffenheim*/
        i = 5;
        teams[i].id = 5;
        teams[i].name = "TSG Hoffenheim";
        teams[i].ang = 79.0;
        teams[i].mit = 78.0;
        teams[i].def = 77.0;
        teams[i].ges = 78.0;

        /*RB Leipzig*/
        i = 6;
        teams[i].id = 6;
        teams[i].name = "RB Leipzig";
        teams[i].ang = 78.0;
        teams[i].mit = 80.0;
        teams[i].def = 76.0;
        teams[i].ges = 78.0;

        /*VfB Stuttgart*/
        i = 7;
        teams[i].id = 7;
        teams[i].name = "VfB Stuttgart";
        teams[i].ang = 81.0;
        teams[i].mit = 77.0;
        teams[i].def = 76.0;
        teams[i].ges = 77.0;

        /*Werder Bremen*/
        i = 8;
        teams[i].id = 8;
        teams[i].name = "Werder Bremen";
        teams[i].ang = 76.0;
        teams[i].mit = 77.0;
        teams[i].def = 76.0;
        teams[i].ges = 77.0;

        /*VfL Wolfsburg*/
        i = 9;
        teams[i].id = 9;
        teams[i].name = "VfL Wolfsburg";
        teams[i].ang = 75.0;
        teams[i].mit = 77.0;
        teams[i].def = 76.0;
        teams[i].ges = 77.0;

        /*Frankfurt*/
        i = 10;
        teams[i].id = 10;
        teams[i].name = "Frankfurt";
        teams[i].ang = 78.0;
        teams[i].mit = 75.0;
        teams[i].def = 76.0;
        teams[i].ges = 76.0;

        /*Hertha BSC*/
        i = 11;
        teams[i].id = 11;
        teams[i].name = "Hertha BSC";
        teams[i].ang = 77.0;
        teams[i].mit = 76.0;
        teams[i].def = 76.0;
        teams[i].ges = 76.0;

        /*FC Augsburg*/
        i = 12;
        teams[i].id = 12;
        teams[i].name = "FC Augsburg";
        teams[i].ang = 75.0;
        teams[i].mit = 75.0;
        teams[i].def = 77.0;
        teams[i].ges = 75.0;

        /*1. FSV Mainz 05*/
        i = 13;
        teams[i].id = 13;
        teams[i].name = "1. FSV Mainz 05";
        teams[i].ang = 73.0;
        teams[i].mit = 74.0;
        teams[i].def = 74.0;
        teams[i].ges = 75.0;

        /*Hannover 96*/
        i = 14;
        teams[i].id = 14;
        teams[i].name = "Hannover 96";
        teams[i].ang = 75.0;
        teams[i].mit = 74.0;
        teams[i].def = 74.0;
        teams[i].ges = 74.0;

        /*SC Freiburg*/
        i = 15;
        teams[i].id = 15;
        teams[i].name = "SC Freiburg";
        teams[i].ang = 75.0;
        teams[i].mit = 73.0;
        teams[i].def = 74.0;
        teams[i].ges = 74.0;

        /*Düsseldorf*/
        i = 16;
        teams[i].id = 16;
        teams[i].name = "Düsseldorf";
        teams[i].ang = 73.0;
        teams[i].mit = 72.0;
        teams[i].def = 72.0;
        teams[i].ges = 72.0;

        /*1. FC Nürnberg*/
        i = 17;
        teams[i].id = 17;
        teams[i].name = "1. FC Nürnberg";
        teams[i].ang = 70.0;
        teams[i].mit = 70.0;
        teams[i].def = 72.0;
        teams[i].ges = 71.0;

        for (i = 0; i < 18; i++) {
                teams[i].pos = i;
                teams[i].pts = 0;
                teams[i].gf = 0;
                teams[i].ga = 0;
        }
}

/* Manual setting up of schedule */
void initSchedule()
{
        /* Counters */
        int gameday;
        int game;

        /* 1. Spieltag */
        gameday = 0;
        game = 0;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[0].id;
        schedule[gameday][game].guest = teams[5].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 1;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[9].id;
        schedule[gameday][game].guest = teams[3].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 2;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[8].id;
        schedule[gameday][game].guest = teams[14].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 3;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[11].id;
        schedule[gameday][game].guest = teams[17].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 4;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[16].id;
        schedule[gameday][game].guest = teams[12].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 5;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[15].id;
        schedule[gameday][game].guest = teams[10].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 6;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[4].id;
        schedule[gameday][game].guest = teams[1].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 7;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[13].id;
        schedule[gameday][game].guest = teams[7].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 8;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[2].id;
        schedule[gameday][game].guest = teams[6].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;

        /* 2. Spieltag */
        gameday = 1;
        game = 0;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[14].id;
        schedule[gameday][game].guest = teams[2].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 1;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[17].id;
        schedule[gameday][game].guest = teams[13].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 2;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[12].id;
        schedule[gameday][game].guest = teams[4].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 3;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[10].id;
        schedule[gameday][game].guest = teams[8].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 4;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[1].id;
        schedule[gameday][game].guest = teams[9].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 5;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[5].id;
        schedule[gameday][game].guest = teams[15].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 6;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[7].id;
        schedule[gameday][game].guest = teams[0].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 7;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[6].id;
        schedule[gameday][game].guest = teams[16].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 8;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[3].id;
        schedule[gameday][game].guest = teams[11].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;

        /* 3. Spieltag */
        gameday = 2;
        game = 0;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[2].id;
        schedule[gameday][game].guest = teams[10].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 1;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[9].id;
        schedule[gameday][game].guest = teams[11].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 2;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[13].id;
        schedule[gameday][game].guest = teams[12].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 3;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[16].id;
        schedule[gameday][game].guest = teams[5].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 4;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[6].id;
        schedule[gameday][game].guest = teams[14].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 5;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[0].id;
        schedule[gameday][game].guest = teams[1].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 6;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[4].id;
        schedule[gameday][game].guest = teams[3].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 7;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[8].id;
        schedule[gameday][game].guest = teams[17].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 8;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[15].id;
        schedule[gameday][game].guest = teams[7].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;

        /* 4. Spieltag */
        gameday = 3;
        game = 0;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[7].id;
        schedule[gameday][game].guest = teams[16].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 1;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[12].id;
        schedule[gameday][game].guest = teams[8].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 2;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[9].id;
        schedule[gameday][game].guest = teams[15].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 3;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[17].id;
        schedule[gameday][game].guest = teams[14].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 4;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[11].id;
        schedule[gameday][game].guest = teams[4].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 5;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[5].id;
        schedule[gameday][game].guest = teams[2].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 6;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[3].id;
        schedule[gameday][game].guest = teams[0].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 7;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[1].id;
        schedule[gameday][game].guest = teams[13].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 8;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[10].id;
        schedule[gameday][game].guest = teams[6].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;

        /* 5. Spieltag */
        gameday = 4;
        game = 0;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[8].id;
        schedule[gameday][game].guest = teams[11].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 1;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[15].id;
        schedule[gameday][game].guest = teams[3].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 2;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[14].id;
        schedule[gameday][game].guest = teams[5].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 3;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[0].id;
        schedule[gameday][game].guest = teams[12].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 4;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[16].id;
        schedule[gameday][game].guest = teams[1].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 5;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[13].id;
        schedule[gameday][game].guest = teams[9].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 6;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[4].id;
        schedule[gameday][game].guest = teams[10].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 7;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[6].id;
        schedule[gameday][game].guest = teams[7].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 8;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[2].id;
        schedule[gameday][game].guest = teams[17].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;

        /* 6. Spieltag */
        gameday = 5;
        game = 0;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[11].id;
        schedule[gameday][game].guest = teams[0].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 1;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[17].id;
        schedule[gameday][game].guest = teams[16].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 2;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[7].id;
        schedule[gameday][game].guest = teams[8].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 3;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[9].id;
        schedule[gameday][game].guest = teams[4].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 4;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[5].id;
        schedule[gameday][game].guest = teams[6].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 5;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[3].id;
        schedule[gameday][game].guest = teams[13].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 6;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[1].id;
        schedule[gameday][game].guest = teams[2].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 7;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[10].id;
        schedule[gameday][game].guest = teams[14].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 8;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[12].id;
        schedule[gameday][game].guest = teams[15].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;

        /* 7. Spieltag */
        gameday = 6;
        game = 0;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[8].id;
        schedule[gameday][game].guest = teams[9].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 1;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[16].id;
        schedule[gameday][game].guest = teams[3].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 2;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[2].id;
        schedule[gameday][game].guest = teams[12].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 3;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[13].id;
        schedule[gameday][game].guest = teams[11].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 4;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[14].id;
        schedule[gameday][game].guest = teams[7].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 5;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[0].id;
        schedule[gameday][game].guest = teams[4].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 6;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[15].id;
        schedule[gameday][game].guest = teams[1].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 7;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[5].id;
        schedule[gameday][game].guest = teams[10].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 8;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[6].id;
        schedule[gameday][game].guest = teams[17].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;

        /* 8. Spieltag */
        gameday = 7;
        game = 0;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[10].id;
        schedule[gameday][game].guest = teams[16].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 1;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[17].id;
        schedule[gameday][game].guest = teams[5].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 2;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[9].id;
        schedule[gameday][game].guest = teams[0].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 3;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[12].id;
        schedule[gameday][game].guest = teams[6].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 4;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[7].id;
        schedule[gameday][game].guest = teams[2].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 5;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[1].id;
        schedule[gameday][game].guest = teams[14].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 6;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[3].id;
        schedule[gameday][game].guest = teams[8].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 7;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[11].id;
        schedule[gameday][game].guest = teams[15].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 8;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[4].id;
        schedule[gameday][game].guest = teams[13].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;

        /* 9. Spieltag */
        gameday = 8;
        game = 0;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[15].id;
        schedule[gameday][game].guest = teams[4].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 1;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[14].id;
        schedule[gameday][game].guest = teams[12].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 2;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[16].id;
        schedule[gameday][game].guest = teams[9].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 3;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[2].id;
        schedule[gameday][game].guest = teams[11].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 4;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[13].id;
        schedule[gameday][game].guest = teams[0].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 5;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[5].id;
        schedule[gameday][game].guest = teams[7].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 6;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[17].id;
        schedule[gameday][game].guest = teams[10].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 7;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[6].id;
        schedule[gameday][game].guest = teams[3].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 8;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[8].id;
        schedule[gameday][game].guest = teams[1].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;

        /* 10. Spieltag */
        gameday = 9;
        game = 0;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[7].id;
        schedule[gameday][game].guest = teams[10].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 1;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[3].id;
        schedule[gameday][game].guest = teams[14].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 2;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[1].id;
        schedule[gameday][game].guest = teams[5].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 3;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[0].id;
        schedule[gameday][game].guest = teams[15].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 4;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[12].id;
        schedule[gameday][game].guest = teams[17].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 5;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[9].id;
        schedule[gameday][game].guest = teams[2].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 6;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[11].id;
        schedule[gameday][game].guest = teams[6].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 7;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[4].id;
        schedule[gameday][game].guest = teams[16].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
        game = 8;
        schedule[gameday][game].day = gameday;
        schedule[gameday][game].home = teams[13].id;
        schedule[gameday][game].guest = teams[8].id;
        schedule[gameday][game].hG = 0;
        schedule[gameday][game].gG = 0;
}
