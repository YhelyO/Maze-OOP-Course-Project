#include "Player.h"
#include<iostream>
#include<string>
using namespace std;
Player::Player(char playerName, Position& playerCurrPos) :_playerCurrPos(playerCurrPos)
{
	this->_playerName = playerName;
	this->_steps = 0;
	this->_score = new int;
	*this->_score = 0;
	this->_isInRange = new bool;
	*this->_isInRange = true;
}
Player::Player() :_playerCurrPos()
{

	this->_playerName = ' ';
	this->_steps = 0;
	this->_score = new int;
	*this->_score = 0;
	this->_isInRange = new bool;
	*this->_isInRange = true;
}
Player::Player(const Player& other)
{

	this->_playerName = other._playerName;
	this->_playerCurrPos = other._playerCurrPos;
	this->_steps = other._steps;
	this->_score = other._score;
	this->_isInRange = other._isInRange;
}
Player::~Player() {}
char Player::getPlayerName()const { return this->_playerName; }

void Player::playerCurrPosUp() { (this->_playerCurrPos).yminus(); }
void Player::playerCurrPosDown() { (this->_playerCurrPos).yplus(); }
void Player::playerCurrPosLeft() { (this->_playerCurrPos).xminus(); }
void Player::playerCurrPosRight() { (this->_playerCurrPos).xplus(); }
Position& Player::getPlayerPos() { return this->_playerCurrPos; }
bool Player::getIsInRange()const { return *this->_isInRange; }
int Player::getSteps()const { return this->_steps; }
int Player::getScore() const { return *this->_score; }
void Player::playerGotOut() { *this->_isInRange = false; cout << "you got out" << endl << endl; }
void Player::playerStepsPP() { this->_steps++; }
void Player::setScore(int treasure) { *this->_score += treasure; }
void Player::calculateScore() { *this->_score -= _steps; }
void Player::setPlayerPos(Position& pos) { this->_playerCurrPos = pos; }
void Player::backToRange() { *this->_isInRange = true; }
void Player::stepsToZero() { this->_steps = 0; }
