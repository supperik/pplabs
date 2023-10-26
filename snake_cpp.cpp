// snake_cpp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>
#include <vector>
#include <deque>
#include <random>

using namespace std;

struct Apple {
	int X;
	int Y;
};

struct snake {
	bool isHead = 0;
	int X;
	int Y;
};

const int fieldWidth = 10;
const int fieldHeight = 10;

vector<vector<char>> fillField(vector<vector<char>>&field) {
	for (int i = 0; i < fieldWidth; i++) {
		for (int j = 0; j < fieldHeight; j++) {
			if (i == 0 || j == 0 || i == fieldWidth - 1 || j == fieldHeight - 1) {
				field[i][j] = '#';
			}
			else {
				field[i][j] = '*';
			}
		}
	}
	return field;
}

Apple generateApple(Apple&fieldApple) {
	random_device rd;
	mt19937 mt(rd());
	uniform_int_distribution<int> dist(1, fieldWidth - 1);
	uniform_int_distribution<int> dist(1, fieldHeight - 1);

	int X = dist(mt);
	int Y = dist(mt);
	fieldApple.X = X;
	fieldApple.Y = Y;

	return fieldApple;
}

void render(deque<snake>&snake_deque, vector<vector<char>>&field) {

}

int main()
{
	vector<vector<char>> field(fieldHeight, vector<char>(fieldWidth));
	snake start_snake;
	Apple fieldApple;
	start_snake.isHead = 1;
	start_snake.X = fieldWidth / 2;
	start_snake.Y = fieldHeight / 2;
	
	deque<snake> snake_deque;
	

	snake_deque.push_back(start_snake);

	fillField(field);
	for(int i = 0; i < fieldWidth; i++) {
		for (int j = 0; j < fieldHeight; j++) {
			cout << field[i][j];
		}
		cout << endl;
	}
}
