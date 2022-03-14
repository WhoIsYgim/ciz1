#include "warship.h"
#include <stdio.h>
#include <stdlib.h>

Warship* warship_constructor (char* name, char* shipyard,char* campaign, char* condition, int year, int crew){
    Warship *buffer = (Warship*)malloc(sizeof(Warship));
    if(buffer == NULL)
    {
        return NULL;
    }
    buffer->name = name;
    buffer->shipyard = shipyard;
    buffer->campaign = campaign;
    buffer->condition = condition;
    buffer->year = year;
    buffer->crew = crew;

    return buffer;
}

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