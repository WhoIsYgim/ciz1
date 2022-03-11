
#include <stdio.h>
#include "storage.h"
#include "warship.h"

int main ()
{
    Storage* storage = storage_constructor(0,1);

    new_warship(storage, "Aurora", "Admiralty","ABC","Museum ship",1900, 570);

    name_search(storage, "Aurora");
}