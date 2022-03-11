#include "storage.h"


Storage* storage_constructor(size_t length, size_t capacity)
{

}

void new_warship(Storage* storage, char* name, char* shipyard, char* campaign, char* condition, int year, int crew)
{

}

void name_search(Storage* storage, char* name)
{
    for(size_t i = 0; i < storage->length; ++i)
    {
        if (storage->ship[i].name == name)
        {
            warship_print(storage->ship[i]);
        }
    }
}

void shipyard_search(Storage* storage, char* shipyard)
{
    for(size_t i = 0; i < storage->length; ++i)
    {
        if (storage->ship[i].shipyard == shipyard)
        {
            warship_print(storage->ship[i]);
        }
    }
}
void condition_search(Storage* storage, char* condition)
{
    for(size_t i = 0; i < storage->length; ++i)
    {
        if (storage->ship[i].condition == condition)
        {
            warship_print(storage->ship[i]);
        }
    }
}
void year_search(Storage* storage, int year)
{
    for(size_t i = 0; i < storage->length; ++i)
    {
        if (storage->ship[i].year == year)
        {
            warship_print(storage->ship[i]);
        }
    }
}

void crew_search(Storage* storage, int crew)
{
    for(size_t i = 0; i < storage->length; ++i)
    {
        if (storage->ship[i].crew == crew)
        {
            warship_print(storage->ship[i]);
        }
    }
}

void warship_print (Warship ship)
{
    printf("%s%s%s", "'", ship.name, "'");
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