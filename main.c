
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "storage.h"
#include "warship.h"
#include "input.h"
#include "interface.h"
#define MAX_LEN 100

int main ()
{

    Storage* storage = storage_constructor(0,1);

    add_warship(storage, "A", "A", "ABC", "A", 1900, 570);
    add_warship(storage, "B", "B", "ABC", "B", 1910, 600);
    add_warship(storage, "C", "C", "ABC", "C", 1900, 600);
    add_warship(storage, "D", "D", "ABC", "D", 1900, 600);

    console_output();

    char *buf =(char*) malloc(sizeof (char)*MAX_LEN);
    get_str(stdin, buf);

    input_interface(storage, buf);

    free(buf);
    free_storage(&storage);
}

