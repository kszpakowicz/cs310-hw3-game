#include <stdio.h>
#include <stdlib.h>

/**
	Text game for testing:
	Hard-coded portions will not be in final version.
	Parts of this file will be integrated into the final program.
**/

int main(int argc, char *argv[]){
    int game = 1;
	while (game){
		char *look = "You are in a room";
		char *menu = "1. Look \n\n2. Action\n\n3. Move\n\n 4. Inventory\n\n"
		char choice;
		switch (choice){
			case '1': printf("You see a table.");
			case '2': printf("You cannot take the table.");
			case '3': printf("You cannot leave.");
			case '4': printf("Your inventory is empty.");
		}
		
	}
}