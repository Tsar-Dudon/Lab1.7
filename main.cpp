#include "func.hpp"
#include <iostream>

int main()
{	
	short hei = 10;
	short len = 10;
	int mas[n][n];
	short simpleMas[n];

	Read(mas, hei, len);
	int mx = MaxNumb(mas, hei, len);
	if(haveSecMax(mas, hei, len, mx))
	{
		simpleNumb(mas, simpleMas, hei, len);
		sortMas(mas, simpleMas, hei, len);
	}
	Write(mas, hei, len);
	return 0;
}