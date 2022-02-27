#pragma once
#include "Position.h"
#include<iostream>
#include<string>
using namespace std;
class Player
{
private:
	char _playerName;//the player name , only one char
	Position _playerCurrPos;// the player position
	int _steps; //the number of steps th eplayer did in cuurent round
	int* _score; //the player score in cuurent game
	bool* _isInRange; // is the player in the range of the maze  (if he is return true) or he got out
public:
	//constructors
	Player(char playerName, Position& playerCurrPos);
	Player(const Player& other);//copy
	Player();//defult
	//distractor
	~Player();

	//get methods
	char getPlayerName() const;//return the player name
	Position& getPlayerPos();//return the player pos
	bool getIsInRange() const;//return if the player is in the range of the maze
	int getSteps() const;//return the player steps
	int getScore() const;//return the player score

	//set methods
	void playerCurrPosUp();//set the player pos to be (x,y-1)
	void playerCurrPosDown();//set the player pos to be (x,y+1)
	void playerCurrPosLeft();//set the player pos to be (x-1,y)
	void playerCurrPosRight();//set the player pos to be (x+1,y)
	void playerStepsPP();//set the player steps to be steps+1
	void playerGotOut();//set the player is in range to be false
	void backToRange();//set the player is in range to be true
	void setScore(int treasure);//set the player score to be score+givven value
	void calculateScore();////set the player score to be score - steps 
	void setPlayerPos(Position& pos);//change the player cuurent position (moved)
	void stepsToZero();//set player steps at tstart of a new round to 0


};

