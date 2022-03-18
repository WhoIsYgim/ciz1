#pragma once


typedef struct {
    char* name;
    char* shipyard;
    char* campaign;
    char* condition;
    int year;
    int crew;

} Warship;

void warship_display (Warship ship);
