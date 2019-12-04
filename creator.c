#include <stdio.h>
#include <stdlib.h>

#include "objects.h"

/**
    Methods used to initialize game world objects, namely the Player and Environment.
    These methods are called when starting the game to create everything needed to run.
    All data for struct variables are read from the user-created script.
**/


/**
    Creates the main character. Has health and an inventory for items (if implemented).
**/
create_Player(int h, char** i){
    struct player p1;
    p1.health = h;
    p1.inventory = i;
}

/**
    Creates an evironment piece to explore. Each area consists of a name and description upon entering, as well
    as populated objects to interact with. 
**/
create_Room(char* n, char* d, char** o){
    struct room &n;
    &n.name = n;
    &n.description = d;
    &n.objects = o;   
}


