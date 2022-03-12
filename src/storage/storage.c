#include "storage.h"
#include <string.h>

Storage* storage_constructor(size_t length, size_t capacity)
{
    Storage* to_store = (Storage*)malloc(sizeof (Storage));

    to_store->length = length;
    to_store->capacity = capacity;
    return to_store;

}

void new_warship(Storage* storage, char* name, char* shipyard, char* campaign, char* condition, int year, int crew)
{
    Warship* temp = (Warship*) malloc(sizeof (Warship));

    temp->name = name;
    temp->shipyard = shipyard;
    temp->campaign = campaign;
    temp->condition = condition;
    temp->year = year;
    temp->crew = crew;

    if(storage->length+1 >= storage->capacity)
    {
        storage->capacity *=2;
        storage->ship = (Warship*) realloc(storage->ship, sizeof(Warship)*storage->capacity);

    }
    storage->ship[storage->length] = *temp;
    ++storage->length;
    free(temp);


}

void name_search(Storage* storage, char* name)
{
    int flag = 0;
    for(size_t i = 0; i < storage->length; ++i)
    {
        if (!strcmp(storage->ship[i].name, name))
        {
            warship_display(storage->ship[i]);
            flag = 1;
        }
    }

    if (flag == 0)
        printf("%s", "There are no appropriate warships");
}

void shipyard_search(Storage* storage, char* shipyard)
{
    int flag = 0;
    for(size_t i = 0; i < storage->length; ++i)
    {
        if (!strcmp(storage->ship[i].shipyard,shipyard))
        {
            warship_display(storage->ship[i]);
            flag = 1;
        }
    }
    if (flag == 0)
        printf("%s", "There are no appropriate warships");
}
void condition_search(Storage* storage, char* condition)
{
    int flag = 0;
    for(size_t i = 0; i < storage->length; ++i)
    {
        if (!strcmp(storage->ship[i].condition,condition))
        {
            warship_display(storage->ship[i]);
            flag = 1;
        }
    }
    if (flag == 0)
        printf("%s", "There are no appropriate warships");
}
void year_search(Storage* storage, int year)
{
    int flag = 0;
    for(size_t i = 0; i < storage->length; ++i)
    {
        if (storage->ship[i].year == year)
        {
            warship_display(storage->ship[i]);
            flag = 1;
        }
    }
    if (flag == 0)
        printf("%s", "There are no appropriate warships");
}

void crew_search(Storage* storage, int crew)
{
    int flag = 0;
    for(size_t i = 0; i < storage->length; ++i)
    {
        if (storage->ship[i].crew == crew)
        {
            warship_display(storage->ship[i]);
            flag = 1;
        }
    }
    if (flag == 0)
        printf("%s", "There are no appropriate warships");
}

void warship_display (Warship ship)
{
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
void free_storage(Storage** storage){
    if (*storage == NULL)
        return;
    if((*storage)->ship == NULL){
        free(*storage);
        *storage = NULL;
        return;
    }
    free((*storage)->ship);
    free(*storage);
    *storage = NULL;
}