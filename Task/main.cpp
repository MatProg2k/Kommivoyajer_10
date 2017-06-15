#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <locale>

#include "Salesman.h"

int main()
{
	setlocale(LC_CTYPE, "Russian");


	//после семи, долгое выполнение
	Salesman salesman(
		7,
		{
			{ INF,	10,		200,	50,		65,		75,		22,		12,		79,		80  },
			{ 19,	INF,	31,		78,		10,		250,	20,		31,		158,	100 },
			{ 161,	20,		INF,	15,		10,		15,		INF,	17,		200,	157 },
			{ 199,	9,		31,		INF,	10,		15,		25,		79,		211,	129 },
			{ 112,	23,		25,		74,		INF,	15,		99,		22,		248,	100 },
			{ 55,	29,		78,		74,		10,		INF,	75,		35,		300,	INF },
			{ 30,	33,		31,		74,		10,		96,		INF,	96,		297,	11  },
			{ 31,	20,		81,		74,		10,		96,		20,		INF,	145,	19  },
			{ 97,	257,	INF,	74,		10,		96,		13,		44,		INF,	222 },
			{ 222,	340,	36,		74,		10,		96,		32,		127,	36,		INF }
		}	  
	);

	salesman.Generation();
	salesman.ShowResult();

	system("pause");
	return 0;
}