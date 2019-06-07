#include "pch.h"
#include "Auxil.h"
#include "Combi.h"
#include "Salesman.h"
#include <iostream>
#include <iomanip>
#include <ctime>
#include <locale>    

#define N (sizeof(DD)/2)
#define M 3

#define NN 100
clock_t SS[NN];

int main()
{
	setlocale(LC_ALL, "RUS");
	using namespace std;

	// ЗАДАЧА О КОММИВОЯЖЕРЕ
	cout << endl << endl << "---------- ЗАДАЧА О КОММИВОЯЖЕРЕ ----------" << endl;
	cout << "(используется генератор перестановок)" << endl;

	clock_t  t1 = 0, t2 = 0;

	const int COL = 5; // количество городов 

	int d[COL][COL];
	d[0][0] = INF; d[0][1] = 2; d[0][2] = 22; d[0][3] = INF; d[0][4] = 1;
	d[1][0] = 1; d[1][1] = INF; d[1][2] = 16; d[1][3] = 67; d[1][4] = 83;
	d[2][0] = 3; d[2][1] = 3; d[2][2] = INF; d[2][3] = 86; d[2][4] = 50;
	d[3][0] = 18; d[3][1] = 57; d[3][2] = 4; d[3][3] = INF; d[3][4] = 3;
	d[4][0] = 92; d[4][1] = 67; d[4][2] = 52; d[4][3] = 14; d[4][4] = INF;

	for (int i = 0; i < COL; i++)
	{
		cout << endl;
		for (int j = 0; j < COL; j++)
			if (d[i][j] != INF) cout << setw(3) << d[i][j] << " ";
			else cout << setw(3) << "INF" << " ";
	}

	int r[COL];

	auxil::start();
	t1 = clock();
	int s = salesman(COL, (int*)d, r);
	t2 = clock();

	cout << endl << endl << "Оптимальный маршрут: " << endl;
	for (int i = 0; i < COL; i++) cout << r[i] + 1 << "-->";
	cout << 1 << endl << endl;

	cout << "Длина маршрута: " << s << endl;



	return 0;
}