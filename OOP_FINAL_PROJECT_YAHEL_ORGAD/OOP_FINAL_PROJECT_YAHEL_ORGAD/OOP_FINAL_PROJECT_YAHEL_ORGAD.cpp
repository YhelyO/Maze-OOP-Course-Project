#include "Game.h"
#pragma warning(disable:4996)
#include<iostream>
#include<string>
using namespace std;

int main()
{
	Game g0(3);//set a game with 3 rounds
	/*freopen("text_file.txt", "w", stdout);*/
	cout << "OOP FINAL PROJECT BY YAHEL ORGAD ID 325010809" << endl;
	cout << "*********************************************************************************************************" << endl;
	cout << "NOW LETS PLAY A GAME THAT ALL THE PLAYERS ARE RANDOM AND THE MAZE GOT PRINT ONLY EVERY ROUND" << endl;
	cout << "*********************************************************************************************************" << endl;
	g0.play(true, false);//play a game with all random players and printing ony every room
	cout << "*********************************************************************************************************" << endl;
	cout << "NOW LETS PLAY A GAME THAT ONE PLAYER ISN'T RANDOM AND THE MAZE GOT PRINT ONLY EVERY ROUND" << endl;
	cout << "*********************************************************************************************************" << endl;
	g0.play(false, false);//play a game with all random players and printing ony every room
	cout << "*********************************************************************************************************" << endl;
	cout << "NOW LETS PLAY A GAME THAT ALL THE PLAYERS ARE RANDOM AND THE MAZE GOT PRINT EVERY CALL" << endl;
	cout << "*********************************************************************************************************" << endl;
	g0.play(true, true);//play a game with all random players and printing ony every room
	cout << "*********************************************************************************************************" << endl;
	cout << "NOW LETS PLAY A GAME THAT ONE PLAYER ISN'T RANDOM AND THE MAZE GOT PRINT EVERY CALL" << endl;
	cout << "*********************************************************************************************************" << endl;
	g0.play(false, true);//play a game with all random players and printing ony every room
	system("pause");

}

