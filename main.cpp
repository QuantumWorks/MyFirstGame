#include "stdafx.h"
#include <iostream>
#include "Windows.h"
//#include <Windows.h>

using namespace std;


int main()
{
	char Map[10][10] = { { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' },
						 { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' },
						 { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' },
						 { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' },
						 { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' },
					     { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' },
					   	 { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' },
						 { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' },
						 { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' },
						 { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' },
	};

	int PlayerRow = 7; // Y
	int Playercol = 1; // X

	Map[PlayerRow][Playercol] = '@';

	for (int row = 0; row < 10; row++)
	{
		for (int colum = 0; colum < 10; colum++)
		{
			cout << Map[row][colum] << " ";
		}
		cout << endl;
	}
	Sleep(90000);
	return 0;
}
