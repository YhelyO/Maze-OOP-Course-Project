#pragma once
#include "Maze.h"
#define ROOMWIDTH 5
#define ROOMLENGTH 6
#define MAZE_X_SIZE 4
#define MAZE_Y_SIZE 4
class Game
{
private:
	Maze _maze;
	int _roundsNum;
public:
	//constructors
	Game(int roundsNum);
	Game(const Game& other);
	//distractor
	~Game();
	//maze builders
	void buildMaze1();
	void buildMaze2();
	void buildMaze3();
	void buildMaze4();
	void buildMaze5();
	//main run funcion
	void play(bool isAllRandom, bool isPrintEveryAction);
	//get the player calls(where to move/what help he want)
	void playerCall(int i, bool isRandom);
	void movePlayer(int i, bool isRandom);
	void helpPlayer(int i, bool isRandom);
	void getNearRoomLook(int i, bool isRandom);
	double getDistanceToClosestTreasure(int i);
	//checks if there is a winner(a player in a room with a treasure
	bool isThereAWinner();
	//print the results of the round
	void printResults();


};

