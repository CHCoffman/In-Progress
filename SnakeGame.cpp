// SnakeGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
// video part 3

#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
bool gameOver;
const int WIDTH = 20;
const int HEIGHT = 20;
int x, y, fruitX, fruitY, score;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;
void Setup()
{
	gameOver = false;
	dir = STOP;
	x = WIDTH / 2;
	y = HEIGHT / 2;
	fruitX = rand() % WIDTH;
	fruitY = rand() % HEIGHT;
	score = 0;
}
void Draw()
{
	system("cls");
	for (int i = 0; i < WIDTH + 2; i++)
		cout << "#";
	cout << endl;

	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
		{
			if (j == 0)
				cout << "#";
			if (i == y && j == x)
				cout << "O";
			else if (i == fruitX && j == fruitX)
				cout << "F";
			else
				cout << " ";
			if (j == WIDTH - 1)
				cout << "#";
		}
		cout << endl;
	}

	for (int i = 0; i < WIDTH + 2; i++)
		cout << "#";
	cout << endl;
	cout << "Score:" << score << endl;
}
void Input()
{
	if (_kbhit())
	{
		switch (_getch())
		{
		case 'a':
			dir = LEFT;
			break;
		case 'd':
			dir = RIGHT;
			break;
		case 'w':
			dir = UP;
			break;
		case 's':
			dir = DOWN;
			break;
		case 'x':
			gameOver = true;
			break;
		}
	}

}
void Logic()
{
	switch (dir)
	{
	case LEFT:
		x--;
		break;
	case RIGHT:
		x++;
		break;
	case UP:
		y--;
		break;
	case DOWN:
		y++;
		break;
	default:
		break;
	}
	if (x > WIDTH || x < 0 || y > HEIGHT || y < 0)
		gameOver = true;
	if (x == fruitX && y == fruitY)
	{
		score += 10;
		fruitX = rand() % WIDTH;
		fruitY = rand() % HEIGHT;
	}

}

int main()
{
	Setup();

	while (!gameOver)
	{
		Draw();
		Input();
		Logic();
	}
	return 0;
}
