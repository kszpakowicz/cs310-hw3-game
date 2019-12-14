UPDATE COMMENTS:
Original repository deleted. Currently second version of repository.
Creator.c deleted. Functionality merged with objects.h.

CS 310 - Operating Systems

Text Adventure Engine in C
    - Created by: Kevin Szpakowicz, Alexander Wojcik

Project Overview:
    This project is a text adventure game engine written in C. The focus on this program
    is not to create a full game, but rather a tool set for others to create a game based
    only on writting a game script of descriptions and lines to be inputed into the program.
    
Functionality:
    The user will first need to create a script.txt file that contains all scenerio information.
    There is an example script format file included. The program will then read the information and 
    create the game. 

Current Program Status:
    Currently not finished; unable to run.
    The program consists of two main files: main.c and objects.h
    'main.c' is used to run the program and contains all data for reading a script file, initiliazing 
    the game data, and creating the final game. 
    'objects.h' contains a skeleton of all game objects, including functions for creating 
    a player, areas, and game items.
    
    In addition, an example file, 'script.txt', is included as an idea of the script formating for 
    the program to function in a final release.

    A tester program, 'test.c', is still included in the repository. This is not part of the main
    program and is not needed for any engine functionality. It is merely created as a way to test 
    the program parts during development.
