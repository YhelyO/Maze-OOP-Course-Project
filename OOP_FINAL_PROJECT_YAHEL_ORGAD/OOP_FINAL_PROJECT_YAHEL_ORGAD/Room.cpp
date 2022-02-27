#include "Room.h"
#include "Position.h"
#include<iostream>
#include<string>
using namespace std;
Room::Room(const Position& roomPos, bool isUpDoor, bool isDownDoor, bool isLeftDoor, bool isRightDoor, int treasure)
	:_roomPos(roomPos)
{
	this->_isUpDoor = isUpDoor;
	this->_isDownDoor = isDownDoor;
	this->_isLeftDoor = isLeftDoor;
	this->_isRightDoor = isRightDoor;
	this->_treasure = treasure;
	this->_playersArrSize = 0;
	this->_playersInTheRoom = NULL;
	this->_roomLook = NULL;
}
Room::Room(const Room& other) :_roomPos(other._roomPos)
{
	this->_isUpDoor = other._isUpDoor;
	this->_isDownDoor = other._isDownDoor;
	this->_isLeftDoor = other._isLeftDoor;
	this->_isRightDoor = other._isRightDoor;
	this->_treasure = other._treasure;
	this->_playersArrSize = other._playersArrSize;
	this->_playersInTheRoom = other._playersInTheRoom;
	this->_roomLook = other._roomLook;

}
Room::Room() :_roomPos()
{
	this->_isUpDoor = NULL;
	this->_isDownDoor = NULL;
	this->_isLeftDoor = NULL;
	this->_isRightDoor = NULL;
	this->_treasure = NULL;
	this->_playersArrSize = NULL;
	this->_playersInTheRoom = NULL;

	this->_roomLook = new char** [ROOMWIDTH];
	for (int i = 0; i < ROOMWIDTH; ++i)
	{
		this->_roomLook[i] = new char* [ROOMLENGTH];
		for (int j = 0; j < ROOMLENGTH; ++j)
		{
			this->_roomLook[i][j] = NULL;
		}
	}

}
void Room::addPlayer(const Player& player)
{
	Player** temp = new Player * [this->_playersArrSize + 1];
	for (int i = 0; i < this->_playersArrSize; i++)
		temp[i] = this->_playersInTheRoom[i];
	delete[] this->_playersInTheRoom;
	this->_playersInTheRoom = temp;
	this->_playersArrSize++;
	this->_playersInTheRoom[(this->_playersArrSize) - 1] = new Player;
	*this->_playersInTheRoom[(this->_playersArrSize) - 1] = player;
}
void Room::removePlayer(Player& player)
{
	int index = -1;
	for (int i = 0; i < this->_playersArrSize; i++)
	{
		if (this->_playersInTheRoom[i]->getPlayerName() == player.getPlayerName()) { index = i; }
	}
	if (index == -1) {
		cout << "Could not find this player in this room..." << endl;
		return;
	}
	delete this->_playersInTheRoom[index];
	this->_playersInTheRoom[index] = this->_playersInTheRoom[this->_playersArrSize - 1];
	Player** temp = new Player * [this->_playersArrSize - 1];
	for (int i = 0; i < this->_playersArrSize - 1; i++)
		temp[i] = this->_playersInTheRoom[i];
	this->_playersInTheRoom = temp;
	this->_playersArrSize--;
}

Room::~Room() {
	if (this->_playersInTheRoom != NULL)
	{
		for (int i = 0; i < this->_playersArrSize; i++)
			if (this->_playersInTheRoom[i] != NULL)
			{
				delete this->_playersInTheRoom[i];
			}

		delete[] this->_playersInTheRoom;
	}

	if (this->_roomLook != NULL) {
		for (int i = 0; i < ROOMWIDTH; i++)
		{
			for (int j = 0; j < ROOMLENGTH; ++j)
			{
				delete this->_roomLook[i][j];
			}
			delete this->_roomLook[i];
		}
		delete[] this->_roomLook;
	}

}

void Room::roomToArrOfText()
{
	this->_roomLook = new char** [ROOMWIDTH];
	for (int i = 0; i < ROOMWIDTH; ++i)
	{
		this->_roomLook[i] = new char* [ROOMLENGTH];
		for (int j = 0; j < ROOMLENGTH; ++j)
		{
			this->_roomLook[i][j] = NULL;
		}
	}

	if ((this->_isUpDoor) == false) {
		for (int i = 0; i < ROOMWIDTH; i++)
		{
			(this->_roomLook[i][ROOMLENGTH - 6]) = new char;
			*(this->_roomLook[i][ROOMLENGTH - 6]) = '-';
		}
	}
	else if ((this->_isUpDoor) == true) {
		for (int i = 0; i < ROOMWIDTH; i++)
		{
			(this->_roomLook[i][ROOMLENGTH - 6]) = new char;
			*this->_roomLook[i][ROOMLENGTH - 6] = '.';
		}
	}
	//row5
	if ((this->_isDownDoor) == false) {
		for (int i = 0; i < ROOMWIDTH; i++)
		{
			(this->_roomLook[i][ROOMLENGTH - 1]) = new char;
			*this->_roomLook[i][ROOMLENGTH - 1] = '-';
		}
	}
	else if ((this->_isDownDoor) == true) {
		for (int i = 0; i < ROOMWIDTH; i++)
		{
			(this->_roomLook[i][ROOMLENGTH - 1]) = new char;
			*this->_roomLook[i][ROOMLENGTH - 1] = '.';
		}
	}

	if ((this->_isLeftDoor) == false)
	{
		(this->_roomLook[0][ROOMLENGTH - 5]) = new char;
		(this->_roomLook[0][ROOMLENGTH - 4]) = new char;
		(this->_roomLook[0][ROOMLENGTH - 3]) = new char;
		(this->_roomLook[0][ROOMLENGTH - 2]) = new char;
		*this->_roomLook[0][ROOMLENGTH - 5] = '|';
		*this->_roomLook[0][ROOMLENGTH - 4] = '|';
		*this->_roomLook[0][ROOMLENGTH - 3] = '|';
		*this->_roomLook[0][ROOMLENGTH - 2] = '|';
	}
	else if ((this->_isLeftDoor) == true)
	{
		(this->_roomLook[0][ROOMLENGTH - 5]) = new char;
		(this->_roomLook[0][ROOMLENGTH - 4]) = new char;
		(this->_roomLook[0][ROOMLENGTH - 3]) = new char;
		(this->_roomLook[0][ROOMLENGTH - 2]) = new char;
		*this->_roomLook[0][ROOMLENGTH - 5] = '.';
		*this->_roomLook[0][ROOMLENGTH - 4] = '.';
		*this->_roomLook[0][ROOMLENGTH - 3] = '.';
		*this->_roomLook[0][ROOMLENGTH - 2] = '.';
	}

	if ((this->_isRightDoor) == false)
	{
		(this->_roomLook[4][ROOMLENGTH - 5]) = new char;
		(this->_roomLook[4][ROOMLENGTH - 4]) = new char;
		(this->_roomLook[4][ROOMLENGTH - 3]) = new char;
		(this->_roomLook[4][ROOMLENGTH - 2]) = new char;
		*this->_roomLook[4][ROOMLENGTH - 5] = '|';
		*this->_roomLook[4][ROOMLENGTH - 4] = '|';
		*this->_roomLook[4][ROOMLENGTH - 3] = '|';
		*this->_roomLook[4][ROOMLENGTH - 2] = '|';
	}
	else if ((this->_isRightDoor) == true)
	{
		(this->_roomLook[4][ROOMLENGTH - 5]) = new char;
		(this->_roomLook[4][ROOMLENGTH - 4]) = new char;
		(this->_roomLook[4][ROOMLENGTH - 3]) = new char;
		(this->_roomLook[4][ROOMLENGTH - 2]) = new char;
		*this->_roomLook[4][ROOMLENGTH - 5] = '.';
		*this->_roomLook[4][ROOMLENGTH - 4] = '.';
		*this->_roomLook[4][ROOMLENGTH - 3] = '.';
		*this->_roomLook[4][ROOMLENGTH - 2] = '.';
	}
	//רווחים שורות 1 ו 4
	for (int i = 1; i <= ROOMWIDTH - 2; i++)
	{
		this->_roomLook[i][ROOMLENGTH - 5] = new char;
		this->_roomLook[i][ROOMLENGTH - 2] = new char;
		*this->_roomLook[i][ROOMLENGTH - 5] = ' ';
		*this->_roomLook[i][ROOMLENGTH - 2] = ' ';
	}

	//רווחים שורה 2 עם אוצר
	for (int i = 1; i <= ROOMWIDTH - 2/* && i != 2*/; i++)
	{
		this->_roomLook[i][ROOMLENGTH - 4] = new char;
		*this->_roomLook[i][ROOMLENGTH - 4] = ' ';
	}
	if (this->_treasure != 0)
	{
		char c = this->_treasure + 48;
		this->_roomLook[2][ROOMLENGTH - 4] = new char;
		*this->_roomLook[2][ROOMLENGTH - 4] = c;
	}
	else
	{
		this->_roomLook[2][ROOMLENGTH - 4] = new char;
		*this->_roomLook[2][ROOMLENGTH - 4] = ' ';
	}

	//רווחים שורה 3 עם שחקנים
	for (int i = 1; i <= ROOMWIDTH - 2 - this->_playersArrSize; i++)
	{
		this->_roomLook[i][ROOMLENGTH - 3] = new char;
		*this->_roomLook[i][ROOMLENGTH - 3] = ' ';
	}
	int count = 0;
	for (int i = ROOMWIDTH - 1 - this->_playersArrSize; i < ROOMWIDTH - 1; i++)//players names
	{
		this->_roomLook[i][ROOMLENGTH - 3] = new char;
		*this->_roomLook[i][ROOMLENGTH - 3] = this->_playersInTheRoom[count]->getPlayerName();
		count++;
	}


}

Position& Room::getRoomPos() { return this->_roomPos; }
bool Room::isPlayerInTheRoom(Player& player) {
	for (int i = 0; i < this->_playersArrSize; i++)
	{
		if (this->_playersInTheRoom[i]->getPlayerName() == player.getPlayerName()) { return true; }
	}
	return false;
}
char*** Room::getRoomLook() const { return this->_roomLook; }
void Room::printRoom() const
{
	cout << endl;
	for (int j = 0; j < ROOMLENGTH; j++)

	{
		for (int i = 0; i < ROOMWIDTH; i++)
		{
			if (i == 2 && j == 2)
			{
				cout << this->_treasure;
			}
			else
			{
				cout << *this->_roomLook[i][j];
			}
		}
		cout << endl;
	}
	cout << endl;
}
bool Room::isWinnerInTheRoom()
{
	if (this != NULL)
	{
		if (this->_treasure != 0 && this->_playersInTheRoom != 0)
		{
			this->_playersInTheRoom[0]->setScore(this->_treasure);
			return true;
		}
	}

	return false;
}

bool Room::getUp() const { return this->_isUpDoor; }
bool Room::getDown()const { return this->_isDownDoor; }
bool Room::getLeft() const { return this->_isLeftDoor; }
bool Room::getRight() const { return this->_isRightDoor; }
int Room::getTreasure() const { return this->_treasure; }
Player** Room::getPlayers() const { return this->_playersInTheRoom; }
int Room::getPlayersArrSize() const { return this->_playersArrSize; }
void Room::setPos(Position& pos) { this->_roomPos.setX(pos.getX());  this->_roomPos.setY(pos.getY()); }
void Room::setTreasure(int treasure) { this->_treasure = treasure; }

