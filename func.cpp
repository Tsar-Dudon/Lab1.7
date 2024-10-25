#include <iostream>
#include "func.hpp"
using namespace dud;

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
                else
                    continue;
            }
        }
        return mx;
    }
