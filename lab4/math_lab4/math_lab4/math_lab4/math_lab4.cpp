// math_lab4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <algorithm>
#include <iostream>
#include <ctime>
#include <iomanip>
#include "Levenshtein.h"
#include "LCS.h"

using namespace std;

char * Gen(int size)
{
	char *str = (char*)malloc(sizeof(char)*size);

	for (int i = 0; i < size; i++) str[i] = rand() % 26 + 'a';
	return str;
}

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "RUS");


	cout << "___________________________Генерируем строки S1, S2_____________________________" << endl << endl;
	char *S1 = Gen(300);
	char *S2 = Gen(250);
	cout << "Строка S1: " << endl;
	for (int i = 0; i < 300; i++) cout << S1[i] << " ";
	cout << endl<<endl;
    cout << "Строка S2: " << endl;
	for (int i = 0; i < 250; i++) cout << S2[i] << " ";
	cout << endl << endl;


	

	//cout << "_____________________________Дистанция Левенштейна______________________________" << endl << endl;
	//int dist = 0;
	clock_t t1 = 0, t2 = 0;

	//const char Kol[] = { 'Б', 'Е', 'С' };
	//const char Stolb[] = { 'Б', 'Л', 'Е', 'С', 'К' };
	//for (int i = 0; i < 3; i++) cout << Kol[i] << " "; cout << endl;
	//for (int i = 0; i < 5; i++) cout << Stolb[i] << " "; cout << endl;
	//dist = levenshtein_r(3, Kol, 5, Stolb);
	//cout << "Дистанция Левенштейна для БЕС и БЛЕСК: " << dist << endl << endl;
	////system("pause");


	float k[] = { 0.04, 0.05, 0.0625, 0.1, 0.2, 0.5, 1 };

	//for (int i = 0; i < 300* k[0]; i++) cout << S1[i] << " ";
	//cout << endl << endl;
	//for (int i = 0; i < 250* k[0]; i++) cout << S2[i] << " "; 
	//t1 = clock(); 
	//dist = levenshtein(300 * k[0], S1, 250 * k[0], S2);
	//t2 = clock();
	//cout << endl << endl;
	//cout << "Дистанция Левенштейна с помощью динамического программирования: " << dist << endl;
	//cout << "Время вычисления алгоритма: (сек) " << t2 - t1 << endl;
	//t1 = clock();
	//dist = levenshtein_r(300 * k[0], S1, 250 * k[0], S2);
	//t2 = clock();
	//cout << "Дистанция Левенштейна с помощью рекурсии: " << dist << endl;
	//cout << "Время вычисления алгоритма: (сек) " << t2 - t1<< endl;
	//cout << endl << endl;

	//for (int i = 0; i < 300 * k[1]; i++) cout << S1[i] << " ";
	//cout << endl << endl;
	//for (int i = 0; i < 250 * k[1]; i++) cout << S2[i] << " ";
	//t1 = clock();
	//dist = levenshtein(300 * k[1], S1, 250 * k[1], S2);
	//t2 = clock();
	//cout << endl << endl;
	//cout << "Дистанция Левенштейна с помощью динамического программирования: " << dist << endl;
	//cout << "Время вычисления алгоритма: (сек) " << t2 - t1 << endl;
	//t1 = clock();
	//dist = levenshtein_r(300 * k[1], S1, 250 * k[1], S2);
	//t2 = clock();
	//cout << "Дистанция Левенштейна с помощью рекурсии: " << dist << endl;
	//cout << "Время вычисления алгоритма: (сек) " << t2 - t1 << endl;
	//cout << endl << endl;


	//for (int i = 0; i < 300 * k[2]; i++) cout << S1[i] << " ";
	//cout << endl << endl;
	//for (int i = 0; i < 250 * k[2]; i++) cout << S2[i] << " ";
	//t1 = clock();
	//dist = levenshtein(300 * k[2], S1, 250 * k[2], S2);
	//t2 = clock();
	//cout << endl << endl;
	//cout << "Дистанция Левенштейна с помощью динамического программирования: " << dist << endl;
	//cout << "Время вычисления алгоритма: (сек) " << t2 - t1 << endl;
	//t1 = clock();
	//dist = levenshtein_r(300 * k[2], S1, 250 * k[2], S2);
	//t2 = clock();
	//cout << "Дистанция Левенштейна с помощью рекурсии: " << dist << endl;
	//cout << "Время вычисления алгоритма: (сек) " << t2 - t1 << endl;
	//cout << endl << endl;


	//for (int i = 0; i < 300 * k[3]; i++) cout << S1[i] << " ";
	//cout << endl << endl;
	//for (int i = 0; i < 250 * k[3]; i++) cout << S2[i] << " ";
	//t1 = clock();
	//dist = levenshtein(300 * k[3], S1, 250 * k[3], S2);
	//t2 = clock();
	//cout << endl << endl;
	//cout << "Дистанция Левенштейна с помощью динамического программирования: " << dist << endl;
	//cout << "Время вычисления алгоритма: (сек) " << t2 - t1 << endl;
	//t1 = clock();
	//dist = levenshtein_r(300 * k[3], S1, 250 * k[3], S2);
	//t2 = clock();
	//cout << "Дистанция Левенштейна с помощью рекурсии: " << dist << endl;
	//cout << "Время вычисления алгоритма: (сек) " << t2 - t1 << endl;
	//cout << endl << endl;

	//for (int i = 0; i < 300 * k[4]; i++) cout << S1[i] << " ";
	//cout << endl << endl;
	//for (int i = 0; i < 250 * k[4]; i++) cout << S2[i] << " ";
	//t1 = clock();
	//dist = levenshtein(300 * k[4], S1, 250 * k[4], S2);
	//t2 = clock();
	//cout << endl << endl;
	//cout << "Дистанция Левенштейна с помощью динамического программирования: " << dist << endl;
	//cout << "Время вычисления алгоритма: (сек) " << t2 - t1 << endl;
	//t1 = clock();
	//dist = levenshtein_r(300 * k[4], S1, 250 * k[4], S2);
	//t2 = clock();
	//cout << "Дистанция Левенштейна с помощью рекурсии: " << dist << endl;
	//cout << "Время вычисления алгоритма: (сек) " << t2 - t1 << endl;
	//cout << endl << endl;

	//for (int i = 0; i < 300 * k[5]; i++) cout << S1[i] << " ";
	//cout << endl << endl;
	//for (int i = 0; i < 250 * k[5]; i++) cout << S2[i] << " ";
	//t1 = clock();
	//dist = levenshtein(300 * k[5], S1, 250 * k[5], S2);
	//t2 = clock();
	//cout << endl << endl;
	//cout << "Дистанция Левенштейна с помощью динамического программирования: " << dist << endl;
	//cout << "Время вычисления алгоритма: (сек) " << t2 - t1  << endl;
	//t1 = clock();
	//dist = levenshtein_r(300 * k[5], S1, 250 * k[5], S2);
	//t2 = clock();
	//cout << "Дистанция Левенштейна с помощью рекурсии: " << dist << endl;
	//cout << "Время вычисления алгоритма: (сек) " << t2 - t1 << endl;
	//cout << endl << endl;

	//for (int i = 0; i < 300 * k[6]; i++) cout << S1[i] << " ";
	//cout << endl << endl;
	//for (int i = 0; i < 250 * k[6]; i++) cout << S2[i] << " ";
	//t1 = clock();
	//dist = levenshtein(300 * k[6], S1, 250 * k[6], S2);
	//t2 = clock();
	//cout << endl << endl;
	//cout << "Дистанция Левенштейна с помощью динамического программирования: " << dist << endl;
	//cout << "Время вычисления алгоритма: (сек) " << t2 - t1 << endl;
	//t1 = clock();
	//dist = levenshtein_r(300 * k[6], S1, 250 * k[6], S2);
	//t2 = clock();
	//cout << "Дистанция Левенштейна с помощью рекурсии: " << dist << endl;
	//cout << "Время вычисления алгоритма: (сек)" << t2 - t1 << endl;



    cout << endl << "____________________НАИБОЛЬШАЯ ОБЩАЯ ПОДПОСЛЕДОВАТЕЛЬНОСТЬ (LCS)__________________";
	int res = 0, m;

	cout << endl << "Рекурсивный метод LCS: " << endl;
	for (m = 5; m < 15; m++)
	{
		for (int i = 0; i < m; i++) cout << S1[i] << " ";
		cout << endl;
		for (int i = 0; i < m; i++) cout << S2[i] << " ";
		cout << endl<< endl; 
		t1 = clock();
		res = lcs(m, S1, m, S2);
		t2 = clock();
		cout << "Длина строк: " << k << endl << "Длина LCS: " << res << endl << "Время: " << t2 - t1 << endl << endl;

	}
	cout << "Динамическое программирование" << endl;
    char z[100] = "";
	t1 = clock();
	int l = lcsd(S1, S2, z);
	t2 = clock();
	cout << endl << "Длина LCS: " << l;
	cout << endl << "Время выполнения: " << t2 - t1 << endl;




	cout << endl << "_____________________Вычисление длины LCS для X и Y(рекурсия)___________________";
	char X[] = "CDLDCA", Y[] = "ALBDACD";
	cout << endl << "-- последовательность X: " << X;
	cout << endl << "-- последовательность Y: " << Y;
	t1 = clock();
	int s = lcs(
		sizeof(X) - 1,  // длина   последовательности  X   
		"CDLDCA",       // последовательность X
		sizeof(Y) - 1,  // длина   последовательности  Y
		"ALBDACD"       // последовательность Y
		);
	t2 = clock();
	cout << endl << "-- длина LCS: " << s << endl;
	cout << endl << "Время выполнения: " << t2 - t1 << endl;

    
	char x[] = "CDLDCA",
	     y[] = "ALBDACD";
	t1 = clock();
	l = lcsd(x, y, z);
	t2 = clock();
	cout << endl
	<< "___Наибольшая общая подпоследовательость - LCS(динамическое программирование)___" << endl;
	cout << endl << "последовательость X: " << x;
	cout << endl << "последовательость Y: " << y;
	cout << endl << "                LCS: " << z;
	cout << endl << "          длина LCS: " << l;
	cout << endl << "Время выполнения: " << t2 - t1 << endl;
	cout << endl;

	return 0;

}