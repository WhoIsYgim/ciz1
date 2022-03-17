#include "warship.h"
#include <stdio.h>
#include <stdlib.h>



void warship_display (Warship ship){
    printf("%s%s%s", "'", ship.name, "'\n");
    printf("%s", "\t Year of launch: ");
    printf("%d%s", ship.year,"\n");
    printf("%s", "\t Shipyard: ");
    puts(ship.shipyard);
    printf("%s", "\t Campaign: ");
    puts(ship.campaign);
    printf("%s", "\t Condition: ");
    puts(ship.condition);
    printf("%s", "\t Crew size: ");
    printf("%d%s", ship.crew,"\n");


}