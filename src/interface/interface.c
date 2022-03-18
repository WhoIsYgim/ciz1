#include "interface.h"

#include "input.h"

#include <stdio.h>
#include<stdlib.h>
#include<string.h>


void console_output() {
    printf("%s", "Please, choose a warship search parameter or type 'stop' to exit: \n");
    printf("\t%s", "name - searching by name\n");
    printf("\t%s", "ship - searching by shipyard\n");
    printf("\t%s", "cond - searching by condition\n");
    printf("\t%s", "year - searching by launch year\n");
    printf("\t%s", "crew - searching by crew size\n");
    printf("\t%s", "stop - exit program\n");

    printf("%s\n", "Input command: ");

}

void input_interface(Storage* storage, char* buf){
    while (abs(strcmp(buf,"stop"))) {

        if (!strcmp(buf, "name")) {
            printf("%s", "Input name of warship:\n ");

            get_str(stdin, buf);
            name_search(storage, buf);
        }
        else if (!strcmp(buf, "shipyard")) {
            printf("%s", "Input name of shipyard:\n ");

            get_str(stdin, buf);
            shipyard_search(storage, buf);
        }
        else if (!strcmp(buf, "condition")) {
            printf("%s", "Input condition:\n ");
            get_str(stdin, buf);
            condition_search(storage, buf);
        }
        else if (!strcmp(buf, "year")) {
            printf("%s", "Input the launch year:\n ");
            get_str(stdin, buf);
            int launch;
            launch = atoi(buf);
            if(launch == 0) {
                printf("Launch year recognition error.\n");
                printf("%s\n", "Input command: ");
                get_str(stdin, buf);
                continue;
            }
            year_search(storage, launch);
        }
        else if (!strcmp(buf, "crew")) {
            printf("%s", "Input crew size:\n ");
            get_str(stdin, buf);
            int crew_s;
            crew_s = atoi(buf);

            if(crew_s == 0) {
                printf("Crew size recognition error.\n");
                printf("%s\n", "Input command: ");
                get_str(stdin, buf);
                continue;
            }
            crew_search(storage, crew_s);
        }
        else {
            printf("%s\n","Unknown command. ");
        }
        printf("%s\n", "Input command: ");
        get_str(stdin, buf);
    }
}
