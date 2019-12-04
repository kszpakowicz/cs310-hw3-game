#include <stdio.h>
#include <stdlib.h>

/**
    Contains all data required for game object creation, including players, areas, and items.
**/

/**
    A main playable character. Has health and an inventory for holding items.
**/
typedef struct player{
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
} room_t;

/**
    An object that populates a given area. Has a name and description that is read once obsereved in game.
    Additionally, has an integer value for a status. If status is equal to 0, the object cannot be picked up.
    Otherwise, it is treated as an item and can be added to the inventory.
**/
typedef struct object{
    char* name;
    char* description;
    int status;
} object_t;
