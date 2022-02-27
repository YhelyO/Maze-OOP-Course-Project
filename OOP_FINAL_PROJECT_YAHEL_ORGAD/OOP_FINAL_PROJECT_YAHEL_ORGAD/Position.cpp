#include "Position.h"
#include<iostream>
#include<string>
using namespace std;
Position::Position(int x, int y)
{
	this->_x = x;
	this->_y = y;
	//cout << " (position) constrcted" << endl;
}
Position::Position() {
	this->_x = 0;
	this->_y = 0;
	/*cout << " (position) defult constrcted" << endl;*/
}

Position::Position(const Position& other)
{
	this->_x = other._x;
	this->_y = other._y;
	//cout << " (position) copy constrcted" << endl;
}

Position::~Position() {/* cout << " (position) destroyed" << endl;*/ }

int Position::getX() const { if (this->_x != NULL) { return this->_x; } else return NULL; }
int Position::getY() const { if (this->_y != NULL) { return this->_y; } else return NULL; }
void Position::setX(int x) { this->_x = x; }
void Position::setY(int y) { this->_y = y; }
Position& Position::getPosition() { return *this; }
void Position::printPosition() const { cout << "(" << this->_x << "," << this->_y << ")" << endl; }
bool Position::isUnder(const Position& other) { if (this->_y + 1 == other._y) { return true; } return false; }
bool Position::isAbove(const Position& other) { if (this->_y - 1 == other._y) { return true; }return false; }
bool Position::isLeftTo(const Position& other) { if (this->_x + 1 == other._x) { return true; }return false; }
bool Position::isRightTo(const Position& other) { if (this->_x - 1 == other._x) { return true; }return false; }
void Position::xplus() { (this->_x)++; }
void Position::xminus() { (this->_x)--; }
void Position::yplus() { (this->_y)++; }
void Position::yminus() { (this->_y)--; }