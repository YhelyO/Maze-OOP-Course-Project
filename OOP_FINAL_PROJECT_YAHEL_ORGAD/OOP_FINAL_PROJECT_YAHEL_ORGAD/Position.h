#pragma once
#include "Position.h"
class Position
{
private:
	int _x; //x coordinate
	int _y; //y coordinate
public:
	//constructors
	Position(int x, int y);
	Position();//defult
	Position(const Position& other);//copy
	//distractor
	~Position();

	//get methods
	int getX() const;//return the x coordinate
	int getY() const;//return the y coordinate
	Position& getPosition(); //return the position object

	//set methods
	void setX(int x); //set the x coordinate
	void setY(int y); //set the y coordinate
	void xplus();//set the x coordinate to be x+1
	void xminus();//set the x coordinate to be x-1
	void yplus();//set the y coordinate to be y+1
	void yminus();//set the y coordinate to be y-1

	void printPosition() const;//printing the position information

	//check methods
	bool isUnder(const Position& other);//check if givven pos is under him
	bool isAbove(const Position& other); // check if givven pos is above him
	bool isLeftTo(const Position& other);//check if givven pos is left to him
	bool isRightTo(const Position& other);//check if givven pos is right to him


};