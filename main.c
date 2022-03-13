
#include <stdio.h>
#include <string.h>

#include "storage.h"
#include "warship.h"
#include "input.h"

const char* name = "name";
const char* shipyard = "ship";
const char* condition = "cond";
const char* year = "year";
const char* crew = "crew";
const char* stop = "stop";

int main ()
{

    Storage* storage = storage_constructor(0,1);

    new_warship(storage, "Aurora", "Admiralty","ABC","Museum ship",1900, 570);
    new_warship(storage, "B","Admiralty", "ABC","working",1900, 400);
    new_warship(storage, "C","Admiralty", "ABC","defeated",1900, 600);
    new_warship(storage, "D","USA", "ABC","defeated",1900, 600);



    printf("%s", "Please, choose a warship search parameter or type 'stop' to exit: \n");
    printf("\t%s", "name - searching by name\n");
    printf("\t%s", "ship - searching by shipyard\n");
    printf("\t%s", "cond - searching by condition\n");
    printf("\t%s", "year - searching by launch year\n");
    printf("\t%s", "crew - searching by crew size\n");
    printf("\t%s", "stop - exit program\n");

    printf("%s\n", "Input command: ");
    char *buf = get_str();

    while (abs(strcmp(buf,stop))) {

        if (!strcmp(buf, name)) {
            printf("%s", "Input name of warship:\n ");
            buf = get_str();
            name_search(storage, buf);
        }
        else if (!strcmp(buf, shipyard)) {
            printf("%s", "Input name of shipyard:\n ");
            buf = get_str();
            shipyard_search(storage, buf);
        }
        else if (!strcmp(buf, condition)) {
            printf("%s", "Input condition:\n ");
            buf = get_str();
            condition_search(storage, buf);
        }
        else if (!strcmp(buf, year)) {
            printf("%s", "Input the launch year:\n ");
            buf = get_str();
            int launch;
            launch = atoi(buf);
            year_search(storage, launch);
        }
        else if (!strcmp(buf, crew)) {
            printf("%s", "Input crew size:\n ");
            buf = get_str();
            int crew_s;
            crew_s = atoi(buf);
            crew_search(storage, crew_s);
        }
        else {
            printf("%s\n","Unknown command. ");
        }
        printf("%s\n", "Input command: ");
        buf = get_str();
    }


    free_storage(&storage);
}



