#pragma once
#include "Room.h"
#define MAZE_X_SIZE 4
#define MAZE_Y_SIZE 4
#define PLAYERS_NUM 2
class Maze
{
private:
	Room* _rooms[MAZE_X_SIZE][MAZE_Y_SIZE]; //2d const size array of pointers to objects of room 
	Player** _players; //dynamic array of pointers to objects of player
	int _playersNum;// the size of the dynamic array
public:
	//constructors
	Maze(int i);
	Maze();
	//distractor
	~Maze();
	//build the maze methods
	void addRoom(Room& room);//add room to the rooms 2d array of pointers to room 
	void addPlayer(Player& player);//add player to the dynamic array og players objects
	void removePlayer(Player& player);	//remove player from the dynamic array og players objects
	void printMaze();	//printing the maze
	//get methods
	Room& getRoomByPos(Position& pos) const;//return a room in givven pos from the 2d arr of rooms
	Room& getPlayerRoom(Player& player) const;//return a room by a givven player that have the same position as him
	Player** getPlayersArr() const;//return the players dynamic array
	int getPlayersNum() const;//return the number of players that in the dynamic array of players
	void getWinner() const;//print the winner iformation
	//set methods
	void setTreasure(int treasure, Position& pos);//set treasure value by givven int and in a room in the rooms array by givven position that match to the wanted room 
	void updatePlayersScore();//calculate all the players in ther array score in the end of the round
	//chekcs methods
	bool isRoomInPos(int x, int y);//check if there is a room in this coordinates inside the 2d arr of rooms
	bool isRoomExt(Room& room);//cheks if the room is external
	bool isRoomHasExtDoor(Position& pos);//checks if the room in givven position have an external door

};


