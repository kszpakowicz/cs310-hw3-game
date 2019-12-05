#include <stdio.h>
#include <stdlib.h>

#include "creator.c"

void enter_Room(char* room){
   /**
        TODO - Access created room struct based on name selected
            - Upon entering, room name and description is displayed.
            - Players will stay in the room untill the function is called again on a different room.
    **/
}

void player_Commands(char* room){
    /**
        TODO - List of accessable commands for the player in an area.
            - Implementation is still being worked on. We might merge this with enter_Room.

            Commands to add:

            1. Look (Displays all items/actions available in the room - extended description of room)
            2. Action (Player can try and take/interact objects if available) 
            3. Move (Player can leave and enter areas)
    **/
}

void start_Game(char* filename){
    /**
        Stream opens script file that contains necessary data for game:
        - Names and descriptions for areas 
        - Player health/starting values
        - Commands
        - Scenerios 
    **/
    FILE *stream;
    stream = fopen(filename, "r");    
}

void ini_Game(){
    /**
        TODO - Creates all characters, items, and areas for the game from the user script.
                - Called either during main or start_Game function. 
                    - Might be deleted and functionality merged with start_Game.
    **/
}

int main(int argc, char *argv[]){
    start_Game(argv[arg]);
    return 0;
}
