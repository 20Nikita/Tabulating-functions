/*************************************************************************************************
*                                                                                                *
*                          ИНФОРМАТИКА И ВЫЧИСЛИТЕЛЬНАЯ ТЕХНИКА                                  *
*                                                                                                *
**************************************************************************************************
*    Prodgect type: ConsoleApplication                                                           *
*    Progect name:  Laba2                                                                        *
*    File name:     Laba2.sln                                                                    *
*    Language:      Cpp, MSVS 2017                                                               *
*    Programmes:    М3О-107Б-18                                                                  *
*                   Гордеев Никита                                                               *
*                   Топунова Алёна                                                               *
*    Modified by:   17.10.2018                                                                   *
*    Created:       06.11.2018                                                                   *
*    Comment:       Лаболаторная работа №2                                                       *
*************************************************************************************************/
#include "pch.h"    // подключение заголовочного файла
//#include <conio.h>
#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main()		
{   //Инициализация переменных
	double A;				       //концы интервала
	double B;			           //концы интервала
	int    NInt;	   	           //число интервалов
	double h;					   //шаг
	double X;                      //аргумент
	double F;                      //функция F(x) = (x - 1)*(x - 1)*(x - 1)
	double G;                      //функция G(x) = 1 - x * x
	int    i;                      //параметр цикла
	double Time;				   //временная переменная
	//Ввод А
	cout << "Enter A" << "\n";
	cin >> A;
	cout << "A= " << A << "\n\n";
	//Ввод В
	cout << "Enter B" << "\n";
	cin >> B;
	cout << "B= " << B << "\n\n";
	//Ввод NInt
	cout << "Enter NInt" << "\n";
	cin >> NInt;
	cout << "NInt= " << NInt << "\n\n";

	while (NInt <= 0)//Входной контроль
	{
		cout << "NInt should be > 0" << "\n";
		cout << "Enter NInt" << "\n" << "\n";
		cin >> NInt;
		cout << "NInt " << NInt << "\n";
	}// Конец while

	if (A > B)//меняем переменные местами
	{
		Time = A;
		A = B;
		B = Time;
		cout << "Variables a and b are swapped by maets \n\n\n";
	}//if

	h = (B - A) / NInt;//Вычисление шага
	
	if (A == B) { NInt = 0; }//Входной кантроль

	//Шапка
	cout << char(218);
	cout << setfill(char(196)) << setw(15);
	cout << char(194);
	cout << setfill(char(196)) << setw(15);
	cout << char(194);
	cout << setfill(char(196)) << setw(15);
	cout << char(191) << endl;
	cout << char(179) << "       X      ";
	cout << char(179) << "       F      ";
	cout << char(179) << "       G      ";
	cout << char(179) << endl;
	cout << char(195);
	cout << setfill(char(196)) << setw(15);
	cout << char(197);
	cout << setfill(char(196)) << setw(15);
	cout << char(197);
	cout << setfill(char(196)) << setw(15);
	cout << char(180) << endl;
	for (i = 0; i <= NInt; i++)               //Печать середины таблицы
	{
		X = A + i * h;                        //Приращение аргумента
		F = (X - 1)*(X - 1)*(X - 1);          //Вычисление функции F(x)
		G = 1 - X*X;                          //Вычисление функции G(x)
		//Заполняем таблицу
		cout << char(179) << " " << setfill(char(32)) << setw(12) << X << " ";
		cout << char(179) << " " << setfill(char(32)) << setw(12) << F << " ";
		cout << char(179) << " " << setfill(char(32)) << setw(12) << G << " ";
		cout << char(179) << endl;
		//Отчёркиваем результат
		if (i < NInt)
		{
			cout << char(195);
			cout << setfill(char(196)) << setw(15);
			cout << char(197);
			cout << setfill(char(196)) << setw(15);
			cout << char(197);
			cout << setfill(char(196)) << setw(15);
			cout << char(180) << endl;
		}//if
	}//for i
	
	//Конец таблицы
	cout << char(192);
	cout << setfill(char(196)) << setw(15);
	cout << char(193);
	cout << setfill(char(196)) << setw(15);
	cout << char(193);
	cout << setfill(char(196)) << setw(15);
	cout << char(217) << endl;
}