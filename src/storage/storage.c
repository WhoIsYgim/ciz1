#include "storage.h"

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


Storage* storage_constructor(size_t length, size_t capacity){
    Storage* to_store = (Storage*)malloc(sizeof (Storage));

    to_store->length = length;
    to_store->capacity = capacity;
    return to_store;

}

void add_warship(Storage* storage, char* name, char* shipyard, char* campaign, char* condition, int year, int crew){
    if(!storage){
        return;
    }

    Warship* temp = (Warship*) malloc(sizeof (Warship));

    if(!temp){
        return;
    }
    temp->name = name;
    temp->shipyard = shipyard;
    temp->campaign = campaign;
    temp->condition = condition;
    temp->year = year;
    temp->crew = crew;

    if(storage->length+1 >= storage->capacity){
        storage->capacity *=2;
        storage->ship = (Warship*) realloc(storage->ship, sizeof(Warship)*storage->capacity);
        if(!storage->ship){
            return;
        }
    }
    storage->ship[storage->length] = *temp;
    ++storage->length;
    free(temp);


}

void name_search(Storage* storage, char* name){
    if(!storage){
        printf("Storage is empty!\n");
        return;
    }
    bool flag = false;
    for(size_t i = 0; i < storage->length; ++i){
        if (!strcmp(storage->ship[i].name, name)){
            warship_display(storage->ship[i]);
            flag = true;
        }
    }

    if (flag == 0)
        printf("%s", "There are no appropriate warships.\n");
}

void shipyard_search(Storage* storage, char* shipyard){
    if(!storage){
        printf("Storage is empty!\n");
        return;
    }
    bool flag = false;
    for(size_t i = 0; i < storage->length; ++i){
        if (!strcmp(storage->ship[i].shipyard,shipyard)){
            warship_display(storage->ship[i]);
            flag = true;
        }
    }
    if (!flag) {
        printf("%s", "There are no appropriate warships.\n");
    }
}

void condition_search(Storage* storage, char* condition){
    if(!storage){
        printf("Storage is empty!\n");
        return;
    }
    bool flag = false;
    for(size_t i = 0; i < storage->length; ++i){
        if (!strcmp(storage->ship[i].condition,condition)){
            warship_display(storage->ship[i]);
            flag = true;
        }
    }
    if (!flag)
        printf("%s", "There are no appropriate warships.\n");
}
void year_search(Storage* storage, int year){
    if(!storage){
        printf("Storage is empty!\n");
        return;
    }
    bool flag = false;
    for(size_t i = 0; i < storage->length; ++i){
        if (storage->ship[i].year == year){
            warship_display(storage->ship[i]);
            flag = true;
        }
    }
    if (!flag)
        printf("%s", "There are no appropriate warships.\n");
}

void crew_search(Storage* storage, int crew){
    if(!storage){
        printf("Storage is empty!\n");
        return;
    }
    bool flag = false;
    for(size_t i = 0; i < storage->length; ++i){
        if (storage->ship[i].crew == crew){
            warship_display(storage->ship[i]);
            flag = true;
        }
    }
    if (!flag)
        printf("%s", "There are no appropriate warships.\n");
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

