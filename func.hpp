#pragma once

const int n = 100;


void Read(int mas[n][n], short& hei, short& len);
void Write(int mas[n][n], short hei, short len);
int MaxNumb(int mas[n][n], short hei, short len);
bool haveSecMax(int mas[n][n], short hei, short len, int mx);
void simpleNumb(int mas[n][n],short mas1[n], short hei, short len);
void sortMas(int mas[n][n], short mas1[n], short hei, short len);