#include <stdio.h>
#include <stdlib.h>

/**
    Contains all data required for game object creation, including players, areas, and items.
**/

/**
    A main playable character. Has health and an inventory for holding items.
**/
typedef struct player{
    char* name;
    int health;
    char** inventory;
} player_t;

/**
    An in-game area that can be visited. Has an attached name and description that is accessed once entered.
    Can be populated with objects that can be interacted with.
**/
typedef struct room{
    char* name;
    char* description;
    char** objects;
    char** look;
    char** action;
    char** leave;
} room_t;

/**
    An object that populates a given area. Has a name and description that is read once obsereved in game.
    Additionally, has an integer value for a status. If status is equal to 0, the object cannot be picked up.
    Otherwise, it is treated as an item and can be added to the inventory.
**/
typedef struct object{
    char* name;
    char* area;
    char* description;
    int status;
} object_t;

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

/**
    Creates an object to be populated in an area. Each object has a name and description that is read once the object
    is selected. Additionally, each object has a status that determines whether it can be picked up or not.
**/
create_Object(char* n, char* r, char* d, int s){
    struct object &n;
    &n.name = n;
    &r.room = r;
    &n.description = d;
    &n.status = s
}
