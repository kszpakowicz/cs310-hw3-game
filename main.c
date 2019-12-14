#include <stdio.h>
#include <stdlib.h>

#include "objects.h"

// Game commands
enum commands{
    LOOK,
    ACTION,
    MOVE
} 

// Used for reading the script during game initialization.
enum script_Read{
    INTRO,
    PLAYER,
    ROOM,
    OBJECT
}

char** intro = NULL

/**
    Plays a created intro from a text file. Should contain a title, narrative description, etc.
**/
void play_Intro(){
     printf("%d ", intro);
}

/**
    Enters a given area. Upon entering, the player is greated with the name and description of the
    area, followed by a set of commands
**/
void enter_Room(char* room){
    populate_Room();
    printf("You are in the: ", "\n");
    printf("%d ", room.name, "\n");
    printf("%d", room.description);
    player_Commands(room);
}

void populate_Room(char* room){
    while (/**Objects != NULL**/){
        if (object.room == room){
            room.objects = object;
        }
    }
}

/**
    Player commands. Checks the data of the room explored based on the action selected.
**/
void player_Commands(char* room){
    printf("What would you like to do? (Type number command)", "\n");    
    printf("1. Look", "\n", "2. Action", "\n", "3. Move", "\n");  
	
    switch (commands){
		case '1': //Look for objects.
                printf("%d", room.look);
                break;
		case '2': //Select an action.
                printf("%d", room.action);
                break;
		case '3': //Enter a different room.
                printf("%d", room.move);
                enter_Room(input);
                break;
	}

    player_Commands(room);
}

/**
    Starts the game by playing the intro and entering the first room.
     The first created room should be named 'intro'.
**/
void start_Game(){
    play_Intro();
    enter_Room(intro);
}

/**
    Creates all characters, items, and areas for the game from the user script.
**/
void initialize_Game(char *filename){
    FILE *stream;
    char *line = NULL;
    size_t len = 0;
    ssize_t chars_read;
    int c;

    const char breaker = "|";
    
    //Opens script file to read from
    stream = fopen(filename, "r");
    if (stream == NULL) {
        perror("fopen");
        exit(EXIT_FAILURE);
    }

    //Reads file until end. Checks header to see where to add script data.
    while ((chars_read = getline(&line, &len, stream)) != -1) {
        while ((c = fgetc(file)) != breaker) //Reads line until '|' character.
        switch (script_Read){
            case '1':
            //INTRO
            case '2':
            //PLAYER
            case '3':
            //ROOM
            case '4':
            //OBJECT
        }
    }

    free(line);
    fclose(stream);
}

/** User input for the game commands **/
static bool getInput(void)
{
   printf("\n--> ");
   return fgets(input, sizeof(input), stdin) != NULL;
}

/** Main function; runs game**/
int main(int argc, char *argv[]){
    initialize_Game(argv[arg]);
    start_Game();
    while (parseAndExecute(input) && getInput());
    return 0;
}
