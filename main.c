#include <stdio.h>
#include <stdlib.h>

#include "creator.c"

void enter_Room(char* room){
   /**
        TODO - Access created room struct based on name selected
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
