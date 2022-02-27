#include "Maze.h"
#define ROOMWIDTH 5
#define ROOMLENGTH 6
#define PLAYERS_NUM 2

Maze::Maze(int i)
{
	this->_players = NULL;
	this->_playersNum = 0;


	for (int i = 0; i < MAZE_Y_SIZE; ++i)
	{
		for (int j = 0; j < MAZE_X_SIZE; ++j)
		{
			this->_rooms[i][j] = NULL;
		}
	}
}

Maze::Maze()
{

	this->_playersNum = 0;


	this->_players = new Player * [this->_playersNum + 1];
	for (int i = 0; i < this->_playersNum; i++)
		this->_players[i] = NULL;

	for (int i = 0; i < MAZE_Y_SIZE; ++i)
	{
		for (int j = 0; j < MAZE_X_SIZE; ++j)
		{
			this->_rooms[i][j] = NULL;
		}
	}
}

bool Maze::isRoomInPos(int x, int y) {
	for (int i = 0; i < MAZE_X_SIZE; i++)
	{
		for (int j = 0; j < MAZE_Y_SIZE; j++)
		{
			if (this->_rooms[i][j] != NULL)
			{
				if (this->_rooms[i][j]->getRoomPos().getX() == x && this->_rooms[i][j]->getRoomPos().getY() == y)
				{
					return true;
				}
			}
		}
	}
	return false;
}
void Maze::printMaze()
{
	for (int i = 0; i < MAZE_X_SIZE; i++)
	{
		for (int j = 0; j < MAZE_Y_SIZE; j++)
		{
			Position pos(i, j);
			if (this->_rooms[i][j] != NULL)
			{
				(this->getRoomByPos(pos)).roomToArrOfText();
			}
		}
	}
	cout << endl;
	for (int j = 0; j < MAZE_Y_SIZE; j++)
	{
		for (int k = 0; k < ROOMLENGTH; k++)
		{
			for (int i = 0; i < MAZE_X_SIZE; i++)
			{

				if (this->_rooms[i][j] == NULL) { cout << "     "; }
				else
				{
					for (int m = 0; m < ROOMWIDTH; m++)
					{
						cout << (*(this->_rooms[i][j]->getRoomLook())[m][k]);
					}
				}

			}
			cout << endl;
		}
		cout << " \n";
	}

	cout << endl;

}
void Maze::addRoom(Room& room)
{
	int xIndex = room.getRoomPos().getX();
	int yIndex = room.getRoomPos().getY();
	this->_rooms[xIndex][yIndex] = new Room;
	*this->_rooms[xIndex][yIndex] = room;

}

void Maze::addPlayer(Player& player)
{
	this->_playersNum++;
	this->_players[(this->_playersNum) - 1] = new Player;
	*this->_players[(this->_playersNum) - 1] = player;
	this->_rooms[player.getPlayerPos().getX()][player.getPlayerPos().getY()]->addPlayer(player);//add to specific room 
	this->_players[(this->_playersNum) - 1]->backToRange();
}

void Maze::removePlayer(Player& player) {
	int index = -1;
	for (int i = 0; i < this->_playersNum; i++)
	{
		if (this->_players[i]->getPlayerName() == player.getPlayerName()) { index = i; }
	}
	if (index == -1) {
		return;
	}
	delete this->_players[index];
	this->_players[index] = this->_players[this->_playersNum - 1];
	Player** temp = new Player * [this->_playersNum - 1];
	for (int i = 0; i < this->_playersNum - 1; i++)
		temp[i] = this->_players[i];
	this->_players = temp;
	this->_playersNum--;
}

Maze::~Maze()
{
	for (int i = 0; i < MAZE_X_SIZE; i++)
	{
		for (int j = 0; j < MAZE_Y_SIZE; j++)
		{
			if (this->_rooms[i][j] != NULL) {
				delete this->_rooms[i][j];
			}
		}
	}
	if (this->_players != NULL)
	{
		for (int i = 0; i < this->_playersNum; i++)
		{
			if (this->_players[i] != NULL)
			{
				delete this->_players[i];
			}
		}
	}

}

bool Maze::isRoomExt(Room& room)
{
	int rpx = room.getRoomPos().getX();
	int rpy = room.getRoomPos().getY();
	if (0 < rpx && rpx < 3 && 0 < rpy && rpy < 3)
	{
		if (this->_rooms[rpx - 1][rpy] != NULL && this->_rooms[rpx][rpy - 1] != NULL
			&& this->_rooms[rpx][rpy + 1] != NULL && this->_rooms[rpx + 1][rpy] != NULL)
		{
			return false;
		}
	}
	return true;
}

bool Maze::isRoomHasExtDoor(Position& pos)
{

	if (pos.getY() == 0 && (this->_rooms[pos.getX()][pos.getY()]->getUp()) == true) { return true; }
	else if (pos.getY() == 3 && (this->_rooms[pos.getX()][pos.getY()]->getDown() == true)) { return true; }
	else if (pos.getX() == 0 && (this->_rooms[pos.getX()][pos.getY()]->getLeft() == true)) { return true; }
	else if (pos.getX() == 3 && (this->_rooms[pos.getX()][pos.getY()]->getRight() == true)) { return true; }
	else { return false; }
}

Room& Maze::getRoomByPos(Position& pos) const { return *(this->_rooms[pos.getX()][pos.getY()]); }




Room& Maze::getPlayerRoom(Player& player) const
{
	for (int i = 0; i < MAZE_X_SIZE; i++)
	{
		for (int j = 0; j < MAZE_Y_SIZE; j++)
		{
			if (this->_rooms[i][j]->getRoomPos().getX() == player.getPlayerPos().getX()
				&& this->_rooms[i][j]->getRoomPos().getY() == player.getPlayerPos().getY())
			{
				return *this->_rooms[i][j];
			}
		}
	}
	return *this->_rooms[0][0];
}


int Maze::getPlayersNum() const { return this->_playersNum; }
Player** Maze::getPlayersArr() const { return this->_players; }

void Maze::updatePlayersScore()
{
	for (int i = 0; i < this->_playersNum; i++)
	{
		this->_players[i]->calculateScore();
	}
}

void Maze::getWinner() const
{
	int minScore = -999;
	int winnerIndex = -1;
	for (int i = 0; i < this->_playersNum; i++)
	{
		if (this->_players[i]->getScore() > minScore)
		{
			minScore = this->_players[i]->getScore();
			winnerIndex = i;
		}
	}
	cout << "the winner name is:  " << this->_players[winnerIndex]->getPlayerName() << "  and his score is:  " << this->_players[winnerIndex]->getScore() << endl;
}

void Maze::setTreasure(int treasure, Position& pos) { this->getRoomByPos(pos).setTreasure(treasure); }
