#include <stdio.h>
#include <stdlib.h>

#include "objects.h"

create_Player(int h, char** i){
    struct player p1;
    p1.health = h;
    p1.inventory = i;
}

create_Room(char* n, char* d, char** o){
    struct room &n;
    &n.name = n;
    &n.description = d;
    &n.objects = o;   
}
