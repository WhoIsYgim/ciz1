#include "warship.h"
#include "stdlib.h"

Warship* warship_constructor (char* name, char* shipyard,char* campaign, char* condition, int year, int crew)
{
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