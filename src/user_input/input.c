#include "input.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN 100


void get_str(FILE* in_stream, char* str) {

    size_t count = sizeof (char )*MAX_LEN;
    getline(&str,&count,in_stream);
    str[strlen(str)-1] = '\0';
}

