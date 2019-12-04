#include <stdio.h>
#include <stdlib.h>

typedef struct player{
    int health;
    char** inventory;
} player_t;

typedef struct room{
    char* name;
    char* description;
    char** objects;
}
