//#include "stdafx.h"
#include <iostream>
//#include <Windows.h>

using namespace std;


int main()
{
    char Map [10] [10] = {{'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
	                  {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
                          {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
                          {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
	                  {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
	};
	
	for(int row = 0; row < 10; row++)
	{
		for (int colum = 0; colum < 10; colum++)
		{
			cout << Map [row] [colum] << " ";
		}
		cout << endl;
	}
	
	
	
    return 0;
}
