#include <stdio.h>
#include <stdlib.h>

#include "objects.h"

// Game commands
enum commands{
    LOOK,
    ACTION,
    MOVE
} 

char** intro = NULL

/**
    Plays a created intro from a text file. Should contain a title, narrative description, etc.
**/
void play_Intro(){
    
}

/**
    Enters a given area. Upon entering, the 
**/
void enter_Room(char* room){
   /**
        TODO - Access created room struct based on name selected
            - Upon entering, room name and description is displayed.
            - Players will stay in the room untill the function is called again on a different room.
    **/
}

void player_Commands(char* room){
    
	switch (commands){
		case '1': printf(room.);
		case '2': printf("You cannot take the table.");
		case '3': printf("You cannot leave.");
		case '4': printf("Your inventory is empty.");
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

    char *room

    stream = fopen(filename, "r");
    if (stream == NULL) {
        perror("fopen");
        exit(EXIT_FAILURE);
    }

    while ((chars_read = getline(&line, &len, stream)) != -1) {
        
    }

    free(line);
    fclose(stream);
}

/** Main function; runs game**/
int main(int argc, char *argv[]){
    initialize_Game(argv[arg]);
    start_Game();
    return 0;
}
