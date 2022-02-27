#pragma once
#include "Position.h"
#include "Player.h"
#include<iostream>
#include<string>
using namespace std;
#define ROOMWIDTH 5 //the pointers of chars 2d dynamic array x size
#define ROOMLENGTH 6 //the pointers of chars 2d dynamic array y size
class Room
{
private:
	Position _roomPos; //the room position, (match to his position in the 2d arr of rooms in the maze class)
	bool _isUpDoor; //if there is a door in this direction its value will be 1
	bool _isDownDoor;//if there is a door in this direction its value will be 1
	bool _isLeftDoor;//if there is a door in this direction its value will be 1
	bool _isRightDoor;//if there is a door in this direction its value will be 1
	Player** _playersInTheRoom;// dynamic array of pointers to objects of player
	int _playersArrSize; // the dynamic array size
	int _treasure; //treasure in the room value
	char*** _roomLook; //a 2d dynamic array of pointers to chars , used to print the room look by his characteristics

public:
	//constructors
	Room(const Position& roomPos, bool isUpDoor, bool isDownDoor, bool isLeftDoor, bool isRightDoor, int treasure);
	Room(const Room& other);//copy
	Room();//defult
	~Room();
	//distractor
	//build the room methods
	void addPlayer(const Player& player);//add player to the dynamic array of players
	void removePlayer(Player& player); //remove player from the dynamic array of players
	void roomToArrOfText(); //converting the room to array of text by his characteristics

	void printRoom()const;//printing the room by the room look array
	//check methods
	bool isPlayerInTheRoom(Player& player);//if givven player is in the room return true
	bool isWinnerInTheRoom();//if there is a treasure with value above 0 and a player, return true

	//get methods
	char*** getRoomLook() const; //return the 2d dynamic array of pointers to chars
	Position& getRoomPos();//return the room position
	bool getUp() const;///return if there is a door in this direction 
	bool getDown() const;//return if there is a door in this direction 
	bool getLeft() const;//return if there is a door in this direction 
	bool getRight() const;//return if there is a door in this direction 
	Player** getPlayers() const;//return the dynamic array of pointers to objects of player
	int getPlayersArrSize() const;//return the e dynamic array of pointers to objects of player size
	int getTreasure() const;//return the value ot treasure in the room

	//set methods
	void setPos(Position& pos); //set the room position
	void setTreasure(int treasure); // set the treasure value

};

