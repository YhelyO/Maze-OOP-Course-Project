#include "Game.h"
#include "Maze.h"
#include "Room.h"
#include <time.h> 
Game::Game(int roundsNum)
{
	this->_roundsNum = roundsNum;

}
Game::~Game()
{

}
Game::Game(const Game& other)
{
	this->_maze = other._maze;

	this->_roundsNum = other._roundsNum;
}
void Game::buildMaze1()
{
	Position p00(0, 0);
	Position p10(1, 0);
	Position p20(2, 0);
	Position p30(3, 0);
	Position p01(0, 1);
	Position p11(1, 1);
	Position p21(2, 1);
	Position p31(3, 1);
	Position p02(0, 2);
	Position p12(1, 2);
	Position p22(2, 2);
	Position p32(3, 2);
	Position p03(0, 3);
	Position p13(1, 3);
	Position p23(2, 3);
	Position p33(3, 3);

	Room r00(p00, false, false, true, true, 0);
	Room r10(p10, false, true, true, false, 0);
	Room r20(p20, false, true, false, true, 0);
	Room r30(p30, false, false, true, true, 0);
	Room r01(p01, false, false, false, false, 0);
	Room r11(p11, true, true, false, false, 0);
	Room r21(p21, true, true, false, false, 0);
	Room r31(p31, false, false, false, false, 0);
	Room r02(p02, false, false, true, true, 0);
	Room r12(p12, true, false, true, true, 0);
	Room r22(p22, true, false, true, true, 0);
	Room r32(p32, false, false, true, true, 0);
	Room r03(p03, false, false, false, false, 0);
	Room r13(p13, false, false, false, false, 0);
	Room r23(p23, false, false, false, false, 0);
	Room r33(p33, false, false, false, false, 0);

	this->_maze.addRoom(r00);
	this->_maze.addRoom(r10);
	this->_maze.addRoom(r20);
	this->_maze.addRoom(r30);
	this->_maze.addRoom(r01);
	this->_maze.addRoom(r11);
	this->_maze.addRoom(r21);
	this->_maze.addRoom(r31);
	this->_maze.addRoom(r02);
	this->_maze.addRoom(r12);
	this->_maze.addRoom(r22);
	this->_maze.addRoom(r32);
	this->_maze.addRoom(r03);
	this->_maze.addRoom(r13);
	this->_maze.addRoom(r23);
	this->_maze.addRoom(r33);

}
void Game::buildMaze2()
{
	Position p00(0, 0);
	Position p10(1, 0);
	Position p20(2, 0);
	Position p30(3, 0);
	Position p01(0, 1);
	Position p11(1, 1);
	Position p21(2, 1);
	Position p31(3, 1);
	Position p02(0, 2);
	Position p12(1, 2);
	Position p22(2, 2);
	Position p32(3, 2);
	Position p03(0, 3);
	Position p13(1, 3);
	Position p23(2, 3);
	Position p33(3, 3);

	Room r00(p00, false, false, true, true, 0);
	Room r10(p10, false, true, true, false, 0);
	Room r20(p20, false, true, false, true, 0);
	Room r30(p30, false, false, true, true, 0);
	Room r01(p01, false, false, true, true, 0);
	Room r11(p11, true, true, true, false, 0);
	Room r21(p21, true, true, false, true, 0);
	Room r31(p31, false, false, true, true, 0);
	Room r02(p02, false, false, false, false, 0);
	Room r12(p12, true, false, false, true, 0);
	Room r22(p22, true, false, true, false, 0);
	Room r32(p32, false, false, false, false, 0);
	Room r03(p03, false, false, false, false, 0);
	Room r13(p13, false, false, false, false, 0);
	Room r23(p23, false, false, false, false, 0);
	Room r33(p33, false, false, false, false, 0);

	this->_maze.addRoom(r00);
	this->_maze.addRoom(r10);
	this->_maze.addRoom(r20);
	this->_maze.addRoom(r30);
	this->_maze.addRoom(r01);
	this->_maze.addRoom(r11);
	this->_maze.addRoom(r21);
	this->_maze.addRoom(r31);
	this->_maze.addRoom(r02);
	this->_maze.addRoom(r12);
	this->_maze.addRoom(r22);
	this->_maze.addRoom(r32);
	this->_maze.addRoom(r03);
	this->_maze.addRoom(r13);
	this->_maze.addRoom(r23);
	this->_maze.addRoom(r33);

}
void Game::buildMaze3()
{
	Position p00(0, 0);
	Position p10(1, 0);
	Position p20(2, 0);
	Position p30(3, 0);
	Position p01(0, 1);
	Position p11(1, 1);
	Position p21(2, 1);
	Position p31(3, 1);
	Position p02(0, 2);
	Position p12(1, 2);
	Position p22(2, 2);
	Position p32(3, 2);
	Position p03(0, 3);
	Position p13(1, 3);
	Position p23(2, 3);
	Position p33(3, 3);

	Room r00(p00, false, false, true, true, 0);
	Room r10(p10, false, true, true, false, 0);
	Room r20(p20, false, true, false, true, 0);
	Room r30(p30, false, false, true, true, 0);
	Room r01(p01, false, false, false, false, 0);
	Room r11(p11, true, true, false, false, 0);
	Room r21(p21, true, true, false, false, 0);
	Room r31(p31, false, false, false, false, 0);
	Room r02(p02, false, false, true, true, 0);
	Room r12(p12, true, true, true, false, 0);
	Room r22(p22, true, true, false, true, 0);
	Room r32(p32, false, false, true, true, 0);
	Room r03(p03, false, false, false, false, 0);
	Room r13(p13, true, false, false, true, 0);
	Room r23(p23, true, false, true, false, 0);
	Room r33(p33, false, false, false, false, 0);

	this->_maze.addRoom(r00);
	this->_maze.addRoom(r10);
	this->_maze.addRoom(r20);
	this->_maze.addRoom(r30);
	this->_maze.addRoom(r01);
	this->_maze.addRoom(r11);
	this->_maze.addRoom(r21);
	this->_maze.addRoom(r31);
	this->_maze.addRoom(r02);
	this->_maze.addRoom(r12);
	this->_maze.addRoom(r22);
	this->_maze.addRoom(r32);
	this->_maze.addRoom(r03);
	this->_maze.addRoom(r13);
	this->_maze.addRoom(r23);
	this->_maze.addRoom(r33);

}
void Game::buildMaze4()
{
	Position p00(0, 0);
	Position p10(1, 0);
	Position p20(2, 0);
	Position p30(3, 0);
	Position p01(0, 1);
	Position p11(1, 1);
	Position p21(2, 1);
	Position p31(3, 1);
	Position p02(0, 2);
	Position p12(1, 2);
	Position p22(2, 2);
	Position p32(3, 2);
	Position p03(0, 3);
	Position p13(1, 3);
	Position p23(2, 3);
	Position p33(3, 3);

	Room r00(p00, false, false, true, true, 0);
	Room r10(p10, false, true, true, false, 0);
	Room r20(p20, false, true, false, true, 0);
	Room r30(p30, false, false, true, true, 0);
	Room r01(p01, false, false, true, true, 0);
	Room r11(p11, true, true, true, false, 0);
	Room r21(p21, true, true, false, true, 0);
	Room r31(p31, false, false, true, true, 0);
	Room r02(p02, false, false, false, false, 0);
	Room r12(p12, true, true, false, false, 0);
	Room r22(p22, true, true, false, false, 0);
	Room r32(p32, false, false, false, false, 0);
	Room r03(p03, false, false, false, false, 0);
	Room r13(p13, true, false, false, true, 0);
	Room r23(p23, true, false, true, false, 0);
	Room r33(p33, false, false, false, false, 0);

	this->_maze.addRoom(r00);
	this->_maze.addRoom(r10);
	this->_maze.addRoom(r20);
	this->_maze.addRoom(r30);
	this->_maze.addRoom(r01);
	this->_maze.addRoom(r11);
	this->_maze.addRoom(r21);
	this->_maze.addRoom(r31);
	this->_maze.addRoom(r02);
	this->_maze.addRoom(r12);
	this->_maze.addRoom(r22);
	this->_maze.addRoom(r32);
	this->_maze.addRoom(r03);
	this->_maze.addRoom(r13);
	this->_maze.addRoom(r23);
	this->_maze.addRoom(r33);

}
void Game::buildMaze5()
{
	Position p00(0, 0);
	Position p10(1, 0);
	Position p20(2, 0);
	Position p30(3, 0);
	Position p01(0, 1);
	Position p11(1, 1);
	Position p21(2, 1);
	Position p31(3, 1);
	Position p02(0, 2);
	Position p12(1, 2);
	Position p22(2, 2);
	Position p32(3, 2);
	Position p03(0, 3);
	Position p13(1, 3);
	Position p23(2, 3);
	Position p33(3, 3);


	Room r00(p00, false, false, true, true, 0);
	Room r10(p10, false, true, true, false, 0);
	Room r20(p20, false, true, false, true, 0);
	Room r30(p30, false, false, true, true, 0);
	Room r01(p01, false, false, false, false, 0);
	Room r11(p11, true, true, false, false, 0);
	Room r21(p21, true, true, false, false, 0);
	Room r31(p31, false, false, false, false, 0);
	Room r02(p02, false, false, false, false, 0);
	Room r12(p12, true, true, false, false, 0);
	Room r22(p22, true, true, false, false, 0);
	Room r32(p32, false, false, false, false, 0);
	Room r03(p03, false, false, false, false, 0);
	Room r13(p13, true, true, false, true, 0);
	Room r23(p23, true, true, true, false, 0);
	Room r33(p33, false, false, false, false, 0);

	this->_maze.addRoom(r00);
	this->_maze.addRoom(r10);
	this->_maze.addRoom(r20);
	this->_maze.addRoom(r30);
	this->_maze.addRoom(r01);
	this->_maze.addRoom(r11);
	this->_maze.addRoom(r21);
	this->_maze.addRoom(r31);
	this->_maze.addRoom(r02);
	this->_maze.addRoom(r12);
	this->_maze.addRoom(r22);
	this->_maze.addRoom(r32);
	this->_maze.addRoom(r03);
	this->_maze.addRoom(r13);
	this->_maze.addRoom(r23);
	this->_maze.addRoom(r33);

}

void Game::playerCall(int i, bool isRandom)
{
	cout << "What you want to do Menu" << endl;
	cout << "********" << endl;
	cout << "0) Stay" << endl;
	cout << "1) Move" << endl;
	cout << "2) Help" << endl;
	int choice;
	cout << "Enter what you want to do : ";
	if (isRandom == false)
	{
		cin >> choice;
	}
	else
	{
		choice = rand() % 3;
	}
	switch (choice)
	{
	case 0: cout << " you styed at your place " << endl;	break;
	case 1:
		this->movePlayer(i, isRandom);
		break;
	case 2:
		this->helpPlayer(i, isRandom);
		break;
	}
}

void Game::movePlayer(int i, bool isRandom)
{
	cout << "where you want to move Menu" << endl;
	cout << "********" << endl;
	cout << "0) Up" << endl;
	cout << "1) Down" << endl;
	cout << "2) Left" << endl;
	cout << "3) Right" << endl;
	int choice;
	cout << "Enter what you want to do : ";
	if (isRandom == false)
	{

		cin >> choice;
	}
	else
	{

		choice = rand() % 4;
	}
	switch (choice)
	{
	case 0:
		if (this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getRoomPos().getY() > 0
			&& this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getUp() == true)
		{
			this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).removePlayer(*this->_maze.getPlayersArr()[i]);
			this->_maze.getPlayersArr()[i]->playerCurrPosUp();
			this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).addPlayer(*this->_maze.getPlayersArr()[i]);
			this->_maze.getPlayersArr()[i]->playerStepsPP();
			this->_maze.getPlayersArr()[i]->setScore(this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getTreasure());
			cout << "you moved up " << endl;
		}
		else if (this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getRoomPos().getY() == 0
			&& this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getUp() == true)
		{
			this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).removePlayer(*this->_maze.getPlayersArr()[i]);
			this->_maze.getPlayersArr()[i]->playerCurrPosUp();
			this->_maze.getPlayersArr()[i]->playerGotOut();
			this->_maze.getPlayersArr()[i]->playerStepsPP();
		}
		else if (this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getUp() == false)
		{
			cout << "you cant go there, there is a wall in the way, please try again to move somewhere else (Down/Left/Right)" << endl;
			this->movePlayer(i, isRandom);
		}

		break;
	case 1:
		if (this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getRoomPos().getY() < 3
			&& this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getDown() == true)
		{
			this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).removePlayer(*this->_maze.getPlayersArr()[i]);
			this->_maze.getPlayersArr()[i]->playerCurrPosDown();
			this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).addPlayer(*this->_maze.getPlayersArr()[i]);
			this->_maze.getPlayersArr()[i]->playerStepsPP();
			this->_maze.getPlayersArr()[i]->setScore(this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getTreasure());
			cout << "you moved down " << endl;
		}
		else if (this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getRoomPos().getY() == 3
			&& this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getDown() == true)
		{
			this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).removePlayer(*this->_maze.getPlayersArr()[i]);
			this->_maze.getPlayersArr()[i]->playerCurrPosDown();
			this->_maze.getPlayersArr()[i]->playerGotOut();
			this->_maze.getPlayersArr()[i]->playerStepsPP();
		}
		else if (this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getDown() == false)
		{
			cout << "you cant go there, there is a wall in the way, please try again to move somewhere else (Up/Left/Right)" << endl;
			this->movePlayer(i, isRandom);
		}
		break;
	case 2:
		if (this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getRoomPos().getX() > 0
			&& this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getLeft() == true)
		{
			this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).removePlayer(*this->_maze.getPlayersArr()[i]);
			this->_maze.getPlayersArr()[i]->playerCurrPosLeft();
			this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).addPlayer(*this->_maze.getPlayersArr()[i]);
			this->_maze.getPlayersArr()[i]->playerStepsPP();
			this->_maze.getPlayersArr()[i]->setScore(this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getTreasure());
			cout << "you moved left " << endl;
		}
		else if (this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getRoomPos().getX() == 0
			&& this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getLeft() == true)
		{
			this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).removePlayer(*this->_maze.getPlayersArr()[i]);
			this->_maze.getPlayersArr()[i]->playerCurrPosLeft();
			this->_maze.getPlayersArr()[i]->playerGotOut();
			this->_maze.getPlayersArr()[i]->playerStepsPP();
		}
		else if (this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getLeft() == false)
		{
			cout << "you cant go there, there is a wall in the way, please try again to move somewhere else (Up/Down/Right)" << endl;
			this->movePlayer(i, isRandom);
		}
		break;
	case 3:
		if (this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getRoomPos().getX() < 3
			&& this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getRight() == true)
		{
			this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).removePlayer(*this->_maze.getPlayersArr()[i]);
			this->_maze.getPlayersArr()[i]->playerCurrPosRight();
			this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).addPlayer(*this->_maze.getPlayersArr()[i]);
			this->_maze.getPlayersArr()[i]->playerStepsPP();
			this->_maze.getPlayersArr()[i]->setScore(this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getTreasure());
			cout << "you moved right " << endl;
		}
		else if (this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getRoomPos().getX() == 3
			&& this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getRight() == true)
		{
			this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).removePlayer(*this->_maze.getPlayersArr()[i]);
			this->_maze.getPlayersArr()[i]->playerCurrPosRight();
			this->_maze.getPlayersArr()[i]->playerGotOut();
			this->_maze.getPlayersArr()[i]->playerStepsPP();
		}
		else if (this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getRight() == false)
		{
			cout << "you cant go there, there is a wall in the way, please try again to move somewhere else (Up/Left/Down)" << endl;
			this->movePlayer(i, isRandom);
		}
		break;
	}
}
void Game::helpPlayer(int i, bool isRandom)
{
	cout << "Wich help you want to get Menu" << endl;
	cout << "********" << endl;
	cout << "0) get distance to the nearest treasure" << endl;
	cout << "1) see how near room looks like " << endl;
	int choice;
	cout << "Enter what you want to do : ";
	if (isRandom == false)
	{

		cin >> choice;
	}
	else
	{

		choice = rand() % 2;
	}

	switch (choice)
	{
	case 0:
		cout << "the disatance to the closest treasure to you is:" << this->getDistanceToClosestTreasure(i);
		break;
	case 1:
		this->getNearRoomLook(i, isRandom);
		break;
	}
}

double Game::getDistanceToClosestTreasure(int i)
{
	double mindistance = 999;
	double tempdistance = 999;
	Position treasurePos(0, 0);
	int xPlayerIndex = this->_maze.getPlayersArr()[i]->getPlayerPos().getX();
	int yPlayerIndex = this->_maze.getPlayersArr()[i]->getPlayerPos().getY();
	for (int m = 0; m < MAZE_X_SIZE; m++)
	{
		for (int n = 0; n < MAZE_Y_SIZE; n++)
		{
			treasurePos.setX(m);
			treasurePos.setY(n);
			if (this->_maze.getRoomByPos(treasurePos).getTreasure() != 0)
			{
				tempdistance = sqrt(pow(xPlayerIndex - m, 2) + pow(yPlayerIndex - n, 2) * 1.0);
			}
			if (mindistance > tempdistance)
			{
				mindistance = tempdistance;
			}
		}
	}
	return mindistance;
}
void Game::getNearRoomLook(int i, bool isRandom)
{
	cout << "Wich near room you want to see Menu" << endl;
	cout << "********" << endl;
	cout << "0) above you" << endl;
	cout << "1) below you " << endl;
	cout << "2) left to you " << endl;
	cout << "3) right to you " << endl;
	int choice;
	cout << "Enter what you want to do : ";
	if (isRandom == false)
	{
		cin >> choice;
	}
	else
	{

		choice = rand() % 4;
	}

	switch (choice)
	{
	case 0:
		if (this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getRoomPos().getY() > 0)
		{
			Position pos(this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getRoomPos().getX(),
				(this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getRoomPos().getY()) - 1);
			cout << "the room above you looks like: " << endl;
			this->_maze.getRoomByPos(pos).printRoom();
			if (this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getTreasure() != 0)
			{
				cout << "there is a treasure in this room and his value is:" << this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getTreasure() << endl;
			}
		}
		else if (this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getRoomPos().getY() == 0)
		{
			cout << "there isnt a room above you" << endl;
		}
		break;
	case 1:
		if (this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getRoomPos().getY() < 3)
		{
			Position pos(this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getRoomPos().getX(),
				(this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getRoomPos().getY()) + 1);
			cout << "the room under you looks like: " << endl;
			this->_maze.getRoomByPos(pos).printRoom();

		}
		else if (this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getRoomPos().getY() == 3)
		{
			cout << "there isnt a room under you" << endl;
		}
		break;

	case 2:
		if (this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getRoomPos().getX() > 0)
		{
			Position pos((this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getRoomPos().getX() - 1),
				(this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getRoomPos().getY()));
			cout << "the room left to you you looks like: " << endl;
			this->_maze.getRoomByPos(pos).printRoom();
		}
		else if (this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getRoomPos().getX() == 0)
		{
			cout << "there isnt a room left to you" << endl;
		}
		break;

	case 3:
		if (this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getRoomPos().getX() < 3)
		{
			Position pos((this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getRoomPos().getX() + 1),
				(this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getRoomPos().getY()));
			cout << "the room right to you you looks like: " << endl;
			this->_maze.getRoomByPos(pos).printRoom();
		}
		else if (this->_maze.getPlayerRoom(*this->_maze.getPlayersArr()[i]).getRoomPos().getX() == 3)
		{
			cout << "there isnt a room right to you" << endl;
		}
		break;
	}
}

bool Game::isThereAWinner()
{
	Position pos(0, 0);
	for (int i = 0; i < MAZE_Y_SIZE; ++i)
	{
		for (int j = 0; j < MAZE_X_SIZE; ++j)
		{
			pos.setX(i);
			pos.setY(j);
			if (this->_maze.getRoomByPos(pos).isWinnerInTheRoom() == true) {
				return true;
			}
		}
	}
	return false;
}


void Game::play(bool isAllRandom, bool isPrintEveryAction)
{
	srand((unsigned int)time(0));
	Position p(0, 0);
	Player player1('$', p);
	Player player2('#', p);
	for (int i = 0; i < this->_roundsNum; i++)
	{

		cout << "************************************************************" << endl;
		cout << "round number:   " << i + 1 << "  started" << endl;
		cout << "************************************************************" << endl;
		//maze random set

		int whatMazeToBuild = rand() % 5 + 1;
		if (whatMazeToBuild == 1) { this->buildMaze1(); }
		if (whatMazeToBuild == 2) { this->buildMaze2(); }
		if (whatMazeToBuild == 3) { this->buildMaze3(); }
		if (whatMazeToBuild == 4) { this->buildMaze4(); }
		if (whatMazeToBuild == 5) { this->buildMaze5(); }
		//players and treasure random set
		player1.stepsToZero();
		player2.stepsToZero();
		Position pos(0, 0);
		bool flag = false;
		if (i > 0)
		{
			this->_maze.removePlayer(player1);
			this->_maze.removePlayer(player2);
		}

		for (int k = 0; k < 3; k++)
		{

			flag = false;
			while (flag == false)
			{
				/*srand(time(0));*/

				int x = rand() % 4;

				int y = rand() % 4;
				pos.setX(x);
				pos.setY(y);

				int treasure = rand() % 3 + 6;


				if (this->_maze.isRoomHasExtDoor(pos) == true)
				{
					if (k == 0) { player1.setPlayerPos(pos);  this->_maze.addPlayer(player1); }
					if (k == 1) { player2.setPlayerPos(pos);  this->_maze.addPlayer(player2); }
					if (k == 2) { this->_maze.setTreasure(treasure, pos); }
					flag = true;
				}
			}
		}
		/*players random set until here**********/
		(this->_maze).printMaze();
		//building random until here****************
		while (this->isThereAWinner() == false
			&& (this->_maze.getPlayersArr()[0]->getIsInRange() == true
				|| this->_maze.getPlayersArr()[1]->getIsInRange() == true) == true)
		{


			if (isAllRandom == true)
			{
				for (int j = 0; j < this->_maze.getPlayersNum(); j++)
				{
					if (this->_maze.getPlayersArr()[j]->getIsInRange() == true)
					{
						cout << "" << endl;
						cout << "****************************" << endl;
						cout << "now its player " << this->_maze.getPlayersArr()[j]->getPlayerName() << " turn" << endl;
						playerCall(j, true);
						if (isPrintEveryAction == true)
						{
							this->_maze.printMaze();
						}
					}
				}
			}
			else
			{
				if (this->_maze.getPlayersArr()[0]->getIsInRange() == true)
				{
					cout << "" << endl;
					cout << "****************************" << endl;
					cout << "now its player " << this->_maze.getPlayersArr()[0]->getPlayerName() << " turn" << endl;
					playerCall(0, false);//not random
					if (isPrintEveryAction == true)
					{
						this->_maze.printMaze();
					}
				}

				if (this->_maze.getPlayersArr()[1]->getIsInRange() == true)
				{
					cout << "" << endl;
					cout << "****************************" << endl;
					cout << "now its player " << this->_maze.getPlayersArr()[1]->getPlayerName() << " turn" << endl;
					playerCall(1, true);
					if (isPrintEveryAction == true)
					{
						this->_maze.printMaze();
					}
				}

			}
		}
		cout << "" << endl;
		cout << "****************************" << endl;
		cout << "there is a winner *or* all players got out of the maze" << endl;
		cout << "****************************" << endl;


		if (isPrintEveryAction == false)
		{
			this->_maze.printMaze();
		}
		cout << "" << endl;
		cout << "****************************" << endl;
		cout << "the results of this round is:" << endl;
		this->printResults();
		cout << "****************************" << endl;
	}
	cout << "" << endl;
	cout << "****************************" << endl;
	this->_maze.getWinner();
	cout << "" << endl;
	cout << "" << endl;
	cout << "GAME ENDED! BYE! SEE U SOON ;)" << endl;
	cout << "" << endl;
	cout << "" << endl;
	this->_maze.removePlayer(player1);
	this->_maze.removePlayer(player2);
}

void Game::printResults()
{
	this->_maze.updatePlayersScore();
	for (int i = 0; i < this->_maze.getPlayersNum(); i++)
	{
		cout << "player name: " << this->_maze.getPlayersArr()[i]->getPlayerName() << "  and his score is: " << this->_maze.getPlayersArr()[i]->getScore() << endl;
	}
}