////////////////////////
// Jalen Robinson-McClure
// CS 172
// October 24th, 2016
// EX 04-02
/////////////////////////

#include <iostream>
using namespace std;

int* doubleCapacity(const int* list, int size)
{
	if (size > 0)
	{
		int* newlist = new int[size * 2];
		for (int i = 0; i < size; i++)
		{
			newlist[i] = list[i];
		}

		delete list;

		return newlist;
	}
	else
	{
		return NULL;
	}
}

int main()
{
	int* list = new int[10];

	for (int i = 0; i < 10; i++)
	{
		list[i] = 10;
	}
	int* newlist = doubleCapacity(list, 10);

	return 0;
}
