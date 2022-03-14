#pragma once

#include "warship.h"
#include <stddef.h>

typedef struct{
    size_t length;
    size_t capacity;
    Warship* ship;
}Storage;

Storage* storage_constructor(size_t length, size_t capacity);

void add_warship(Storage* storage, char* name, char* shipyard, char* campaign, char* condition, int year, int crew);

void name_search (Storage* storage, char* name);
void shipyard_search(Storage* storage, char* shipyard);
void condition_search(Storage* storage, char* condition);
void year_search(Storage* storage, int year);
void crew_search(Storage* storage, int crew);

void free_storage(Storage** storage);