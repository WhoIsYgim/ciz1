#pragma once
#include "stdio.h"

typedef struct {
    char* name;
    char* shipyard;
    char* campaign;
    char* condition;
    int year;
    int crew;

} Warship;

Warship* warship_constructor (char* name, char* shipyard,char* campaign, char* condition, int year, int crew);
