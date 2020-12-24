//Ejercicio 9 de la hoja 1 de la semana 12
#include "stdafx.h"
#include<iostream>
#include<conio.h>
#include <stdlib.h>
#include<time.h>

using namespace std;
using namespace System;

using namespace std;
int IngresaNum()
{
	int Num;
	cout << "Ingrese Num:"; cin >> Num;
	while (Num <= 0 || Num >= 100)
	{
		cout << "Ingrese Num:"; cin >> Num;
	}
	return Num;
}

void ImprimeDatos(int Num)
{

	for (int i = 1; i <= Num; i++)
	{
		for (int k = 41 - i; k >= 1; k--)
			cout << " ";
		for (int j = 1; j<i; j++)
			cout << j;
		for (int j = i; j >= 1; j--)
			cout << j;
		cout << "\n";
	}
}

int main()
{
	int Num;
	Num = IngresaNum();
	ImprimeDatos(Num);
	_getch();
}