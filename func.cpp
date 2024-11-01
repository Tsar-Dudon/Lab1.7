#include <iostream>
#include "func.hpp"

void Read(int mas[n][n], short& hei, short& len)
{
    std::cout << "enter heith: ";
	std::cin >> hei;
	std::cout << "enter lenth: ";
	std::cin >> len;
    for(int i = 0; i < hei; i++)
    {
        for(int j = 0; j < len; j++)
        {
            std::cin >> mas[i][j];
        }
    }
}

void Write(int mas[n][n], short hei, short len)
{
    for(short i = 0; i < hei; i++)
	{
		for(short j = 0; j < len; j++)
		{
			std::cout << mas[i][j] << " ";
		}
		std::cout << "" << std::endl;
	}
}

int MaxNumb(int mas[n][n], short hei, short len)
{
    int mx = 0;
    for(short i = 0; i < hei; i++)
	{
		for(short j = 0; j < len; j++)
		{
			if(mas[i][j] > mx)
            {
                mx = mas[i][j];
            }
		}
	}
    return mx;
}

bool haveSecMax(int mas[n][n], short hei, short len, int mx)
{
    short counter = 0;
    for(short i = 0; i < hei; i++)
	{
		for(short j = 0; j < len; j++)
		{
			if(mas[i][j] == mx)
            {
                counter++;
            }
		}
	}
    if(counter == 2)
        return true;
    else
        return false;
}

void simpleNumb(int mas[n][n], short mas1[n], short hei, short len)
{
    for(short i = 0; i < hei; i++)
	{
        short howMany = 0;
		for(short j = 0; j < len; j++)
		{
            short counter = 0;
            for(short k = 1; k <= mas[i][j]; k++)
            {
                if(mas[i][j] % k == 0)
                    counter++;
            }
            if(counter < 3)
                howMany++;
		}
        mas1[i] = howMany;
	}
}

void sortMas(int mas[n][n], short mas1[n], short hei, short len)
{
    for(short k = 0; k < hei - 1; k++)
        for(short e = k + 1; e < hei; e++)
            if(mas1[k] < mas1[e])
            {
                std::swap(mas1[k], mas1[e]);
                for(short j = 0; j < len; j++)
                {
                    std::swap(mas[k][j], mas[e][j]);
                }
            }
}