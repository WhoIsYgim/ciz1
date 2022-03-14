
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "storage.h"
#include "warship.h"
#include "input.h"
#include "interface.h"

const char* name = "name";
const char* shipyard = "ship";
const char* condition = "cond";
const char* year = "year";
const char* crew = "crew";
const char* stop = "stop";

int main ()
{

    Storage* storage = storage_constructor(0,1);

    add_warship(storage, "Aurora", "Admiralty", "ABC", "Museum ship", 1900, 570);
    add_warship(storage, "B", "Admiralty", "ABC", "working", 1910, 400);
    add_warship(storage, "C", "Admiralty", "ABC", "defeated", 1900, 600);
    add_warship(storage, "D", "USA", "ABC", "defeated", 1900, 600);

   console_output();

    char *buf = get_str();

    input_interface(storage, buf, name,shipyard,condition,year,crew,stop);

    free(buf);
    free_storage(&storage);
}



