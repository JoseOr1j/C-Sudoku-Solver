// Author : Jose Orozco
// Date : 6/1/19
// Purpose : A program that fills in a game of sudoku and wins
#include <iostream>
#include <string>
using namespace std;
int Spot(int puzzle[][9], int row, int col, int num)
{// For all four cases repeats the if puzzle then increment sequence
	for (int i = 0; i < 9; ++i)
	{
		if (puzzle[row][i] == num) return 0;
		if (puzzle[i][col] == num) return 0;
	}
	return 1;
}
int Spot2(int puzzle2[][9], int row, int col, int num)
{
	for (int i = 0; i < 9; ++i)
	{
		if (puzzle2[row][i] == num) return 0;
		if (puzzle2[i][col] == num) return 0;
	}
	return 1;
}
int Spot3(int puzzle3[][9], int row, int col, int num)
{
	for (int i = 0; i < 9; ++i)
	{
		if (puzzle3[row][i] == num) return 0;
		if (puzzle3[i][col] == num) return 0;
	}
	return 1;
}
int Spot4(int puzzle4[][9], int row, int col, int num)
{
	for (int i = 0; i < 9; ++i)
	{
		if (puzzle4[row][i] == num) return 0;
		if (puzzle4[i][col] == num) return 0;
	}
	return 1;
}
int solveSudoku(int puzzle[][9], int row, int col)
{// Solves the Sudoku, checks to see what is missing
	if (row < 9 && col < 9)
	{
		if (puzzle[row][col] != 0)
		{
			if ((col + 1) < 9) return solveSudoku(puzzle, row, col + 1);
			else if ((row + 1) < 9) return solveSudoku(puzzle, row + 1, 0);
			else return 1;
		}
		else
		{
			for (int i = 0; i < 9; ++i)
			{
				if (Spot(puzzle, row, col, i + 1))
				{
					puzzle[row][col] = i + 1;
					if ((col + 1) < 9)
					{
						if (solveSudoku(puzzle, row, col + 1)) return 1;
						else puzzle[row][col] = 0;
					}
					else if ((row + 1) < 9)
					{
						if (solveSudoku(puzzle, row + 1, 0)) return 1;
						else puzzle[row][col] = 0;
					}
					else return 1;
				}
			}
		}
		return 0;
	}
	else return 1;
}// For three other cases
int solveSudoku2(int puzzle2[][9], int row, int col)
{
	if (row < 9 && col < 9)
	{
		if (puzzle2[row][col] != 0)
		{
			if ((col + 1) < 9) return solveSudoku(puzzle2, row, col + 1);
			else if ((row + 1) < 9) return solveSudoku(puzzle2, row + 1, 0);
			else return 1;
		}
		else
		{
			for (int i = 0; i < 9; ++i)
			{
				if (Spot2(puzzle2, row, col, i + 1))
				{
					puzzle2[row][col] = i + 1;
					if ((col + 1) < 9)
					{
						if (solveSudoku(puzzle2, row, col + 1)) return 1;
						else puzzle2[row][col] = 0;
					}
					else if ((row + 1) < 9)
					{
						if (solveSudoku(puzzle2, row + 1, 0)) return 1;
						else puzzle2[row][col] = 0;
					}
					else return 1;
				}
			}
		}
		return 0;
	}
	else return 1;
}
int solveSudoku3(int puzzle3[][9], int row, int col)
{
	if (row < 9 && col < 9)
	{
		if (puzzle3[row][col] != 0)
		{
			if ((col + 1) < 9) return solveSudoku(puzzle3, row, col + 1);
			else if ((row + 1) < 9) return solveSudoku(puzzle3, row + 1, 0);
			else return 1;
		}
		else
		{
			for (int i = 0; i < 9; ++i)
			{
				if (Spot3(puzzle3, row, col, i + 1))
				{
					puzzle3[row][col] = i + 1;
					if ((col + 1) < 9)
					{
						if (solveSudoku(puzzle3, row, col + 1)) return 1;
						else puzzle3[row][col] = 0;
					}
					else if ((row + 1) < 9)
					{
						if (solveSudoku(puzzle3, row + 1, 0)) return 1;
						else puzzle3[row][col] = 0;
					}
					else return 1;
				}
			}
		}
		return 0;
	}
	else return 1;
}
int solveSudoku4(int puzzle4[][9], int row, int col)
{
	if (row < 9 && col < 9)
	{
		if (puzzle4[row][col] != 0)
		{
			if ((col + 1) < 9) return solveSudoku(puzzle4, row, col + 1);
			else if ((row + 1) < 9) return solveSudoku(puzzle4, row + 1, 0);
			else return 1;
		}
		else
		{
			for (int i = 0; i < 9; ++i)
			{
				if (Spot4(puzzle4, row, col, i + 1))
				{
					puzzle4[row][col] = i + 1;
					if ((col + 1) < 9)
					{
						if (solveSudoku(puzzle4, row, col + 1)) return 1;
						else puzzle4[row][col] = 0;
					}
					else if ((row + 1) < 9)
					{
						if (solveSudoku(puzzle4, row + 1, 0)) return 1;
						else puzzle4[row][col] = 0;
					}
					else return 1;
				}
			}
		}
		return 0;
	}
	else return 1;
}

void printSudoku(int puzzle[9][9])
{// For four cases, prints the actual numbers and fills in any blanks
	for (int i = 0; i < 9; ++i)
	{
		for (int j = 0; j < 9; ++j) {
			cout << puzzle[i][j] << " ";
		}
		cout << "\n";
	}
}
void printSudoku2(int puzzle2[9][9])
{
	for (int i = 0; i < 9; ++i)
	{
		for (int j = 0; j < 9; ++j) {
			cout << puzzle2[i][j] << " ";
		}
		cout << "\n";
	}
}
void printSudoku3(int puzzle3[9][9])
{
	for (int i = 0; i < 9; ++i)
	{
		for (int j = 0; j < 9; ++j) {
			cout << puzzle3[i][j] << " ";
		}
		cout << "\n";
	}
}
void printSudoku4(int puzzle4[9][9])
{
	for (int i = 0; i < 9; ++i)
	{
		for (int j = 0; j < 9; ++j) {
			cout << puzzle4[i][j] << " ";
		}
		cout << "\n";
	}
}
int main()
{// Welcomes the user
	cout << "Welcome to play the real sudoku game designed by Jose Orozco!" << endl;
	// Will use 0s as blank spaces
	cout << "Game 1 is as follows" << endl;
	cout << "123456789" << endl;
	cout << "4_6789123" << endl;
	cout << "7891_3456" << endl;
	cout << "234567891" << endl;
	cout << "5678912_4" << endl;
	cout << "891234567" << endl;
	cout << "_45678912" << endl;
	cout << "678912345" << endl;
	cout << "912345_78" << endl;
	cout << "         " << endl;
	cout << "Game 1 Winning Result is as follows: " << endl;
	int puzzle[9][9] = { // This is board game	1, 0s count as blanks
	{ 1, 2, 3, 4, 5, 6, 7, 8, 9 },
	{ 4, 0, 6, 7, 8, 9, 1, 2, 3 },
	{ 7, 8, 9, 1, 0, 3, 4, 5, 6 },
	{ 2, 3, 4, 5, 6, 7, 8, 9, 1 },
	{ 5, 6, 7, 8, 9, 1, 2, 0, 4 },
	{ 8, 9, 1, 2, 3, 4, 5, 6, 7 },
	{ 0, 4, 5, 6, 7, 8, 9, 1, 2 },
	{ 6, 7, 8, 9, 1, 2, 3, 4, 5 },
	{ 9, 1, 2, 3, 4, 5, 0, 7, 8 } };
	solveSudoku(puzzle, 0, 0); // Solves solution
	printSudoku(puzzle); // Prints solution
	cout << "      " << endl;
	cout << "Game 2 is as follows:" << endl;
	cout << "_2345678_" << endl;
	cout << "_56789_23" << endl;
	cout << "7891_3456" << endl;
	cout << "23_567891" << endl;
	cout << "56789_234" << endl;
	cout << "89_23456_" << endl;
	cout << "345678_12" << endl;
	cout << "_7891_345" << endl;
	cout << "91_34567_" << endl;
	cout << "         " << endl;
	cout << "Game 2 Winning Result is as follows: " << endl;
	int puzzle2[9][9] = { // Board game 2
	{ 0, 2, 3, 4, 5, 6, 7, 8, 0 },
	{ 0, 5, 6, 7, 8, 9, 0, 2, 3 },
	{ 7, 8, 9, 1, 0, 3, 4, 5, 6 },
	{ 2, 3, 0, 5, 6, 7, 8, 9, 1 },
	{ 5, 6, 7, 8, 9, 0, 2, 3, 4 },
	{ 8, 9, 0, 2, 3, 4, 5, 6, 0 },
	{ 3, 4, 5, 6, 7, 8, 0, 1, 2 },
	{ 0, 7, 8, 9, 1, 0, 3, 4, 5 },
	{ 9, 1, 0, 3, 4, 5, 6, 7, 0 } };
	solveSudoku2(puzzle2, 0, 0); // Solves
	printSudoku2(puzzle2); // Prints
	cout << "         " << endl;
	cout << "Game 3 is as follows:" << endl;
	cout << "12_456_8_" << endl;
	cout << "_5678_123" << endl;
	cout << "7_912_456" << endl;
	cout << "_34_6_891" << endl;
	cout << "567_912_4" << endl;
	cout << "8_12345_7" << endl;
	cout << "345_78_12" << endl;
	cout << "67_9123_5" << endl;
	cout << "9_234_67_" << endl;
	cout << "         " << endl;
	cout << "Game 3 Winning Result is as follows: " << endl;
	int puzzle3[9][9] = { // Board game 3
	{ 1, 2, 0, 4, 5, 6, 0, 8, 0 },
	{ 0, 5, 6, 7, 8, 0, 1, 2, 3 },
	{ 7, 0, 9, 1, 2, 0, 4, 5, 6 },
	{ 0, 3, 4, 0, 6, 0, 8, 9, 1 },
	{ 5, 6, 7, 0, 9, 1, 2, 0, 4 },
	{ 8, 0, 1, 2, 4, 4, 5, 0, 7 },
	{ 3, 4, 5, 0, 7, 8, 0, 1, 2 },
	{ 6, 7, 0, 9, 1, 2, 3, 0, 5 },
	{ 9, 0, 2, 3, 4, 0, 6, 7, 0 } };
	solveSudoku3(puzzle3, 0, 0); // Solves
	printSudoku3(puzzle3); // Prints
	cout << "         " << endl;
	cout << "Game 4 is as follows:" << endl;
	cout << "1_34_67_9" << endl;
	cout << "_5_78_1_3" << endl;
	cout << "_8_12_45_" << endl;
	cout << "2_45_78_1" << endl;
	cout << "_67_91_3_" << endl;
	cout << "8_1_3_56_" << endl;
	cout << "_45_7_9_2" << endl;
	cout << "6_8_1_34_" << endl;
	cout << "_12_456_8" << endl;
	cout << "         " << endl;
	cout << "Game 4 Winning Result is as follows: " << endl;
	int puzzle4[9][9] = { // Board game 4
	{ 1, 0, 3, 4, 0, 6, 7, 0, 9 },
	{ 0, 5, 0, 7, 8, 0, 1, 0, 3 },
	{ 0, 8, 0, 1, 2, 0, 4, 5, 0 },
	{ 2, 0, 4, 5, 0, 7, 8, 0, 1 },
	{ 0, 6, 7, 0, 9, 1, 0, 3, 0 },
	{ 8, 0, 1, 0, 3, 0, 5, 6, 0 },
	{ 0, 4, 5, 0, 7, 0, 9, 0, 2 },
	{ 6, 0, 8, 0, 1, 0, 3, 4, 0 },
	{ 0, 1, 2, 0, 4, 5, 6, 0, 8 } };
	solveSudoku4(puzzle4, 0, 0); // Solves
	printSudoku4(puzzle4); // Prints
	cout << "        " << endl; // Just to make things neater
	cout << "Thank you for playing this Sudoku real game designed by Jose Orozco!" << endl;
	// Thanks the user and terminates the program
}