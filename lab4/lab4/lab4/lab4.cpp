// lab4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>
#include <locale>
#include <stdlib.h>
#include "Levenshtein.h"
#include "LCS.h"
#include <cstdlib>
#include <ctime>
#include <iomanip>
#define _rand(min, max) ( rand() % ((max) - (min) + 1) + (min) )

using namespace std;

char* generate(int size) // генерирует строку больших латинских букв
{

	/*static bool seedset = false;
	if (!seedset) {
		srand(static_cast<unsigned> (time(NULL)));
	}
	static char alph[] = "ABCDEFGHJKLMNOPQRSTUVWXYZ";
	char* str;
	str = (char*)malloc(sizeof(char)*size);
	for (int i = 0; i < size; i++)
		str[i] = alph[rand() % (sizeof(alph) / sizeof(alph[0]) - 1)];*/

	char* str = (char*)malloc(sizeof(char)*size);
	for (int i(0); i < size; i++)
	{
		str[i] = 65 + rand() % (91 - 65);
	}
	return str;
}

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	char abc[25]; // наш алфавит
	char s1[300];
	char s2[250];

	// заполняем массив
	for (int i = 97, n = 0; i <= 122; ++i, ++n)
	{
		abc[n] = (char)i;
	}
	std::cout << "S1 = ";
	for (int i = 0; i < 301; i++)
	{
		s1[i] = abc[_rand(0, 25)];
		if (i % 50 == 0)
			std::cout << std::endl;
		std::cout << s1[i];
	}
	std::cout << std::endl << "S2 =";

	for (int i = 0; i < 251; i++)
	{
		s2[i] = abc[_rand(0, 25)];
		if (i % 50 == 0)
			std::cout << std::endl;
		std::cout << s2[i];
	}
	std::cout << std::endl;

	clock_t t1 = 0;
	clock_t t2 = 0;
	clock_t	t3 = 0;
	clock_t t4 = 0;
	int  lx = sizeof(s1);
	int ly = sizeof(s2);


	/*int S1_size[]{ 12, 15, 20, 30,60,150,300 };
	int S2_size[]{ 10,13,17,25,50,125,250 };

	std::cout << std::endl;
	std::cout << std::endl << "-- расстояние Левенштейна -----" << std::endl;
	std::cout << std::endl << "--длина --- рекурсия -- дин.програм. ---" << std::endl;
	for (int i = 0; i < std::min(lx, ly); i++)
	{
		t1 = clock();
		levenshtein_r(S1_size[i], s1, S2_size[i], s2);
		t2 = clock();
		t3 = clock();
		levenshtein(S1_size[i], s1, S2_size[i], s2);
		t4 = clock();
		std::cout << std::right << std::setw(2) << S1_size[i] << "/" << std::setw(2) << S2_size[i]
			<< "        " << std::left << std::setw(10) << (t2 - t1)
			<< "   " << std::setw(10) << (t4 - t3) << std::endl;
	}
	system("pause");*/
	/*cout << " ----- ГЕНЕРАЦИЯ СТРОК! ----- " << endl << endl;


	const char* A = generate(300); const char* B = generate(250);
	cout << "Строка A:" << endl; for (int i = 0; i < 300; i++) cout << A[i] << " ";
	cout << endl << endl << "Строка B:" << endl; for (int i = 0; i < 250; i++) cout << B[i] << " ";
	cout << endl << endl;
	system("pause");

	double kmas[] = { 0.04, 0.05, 0.0625, 0.1, 0.2, 0.5, 1 };
	cout << " ----- ДИСТАНЦИЯ ЛЕВЕНШТЕЙНА! ----- " << endl << endl;
	for (int j = 0; j < 7; j++)
	{
		cout << kmas[j] << endl;
		int res = 0; clock_t t1 = 0, t2 = 0;
		for (int i = 0; i < 300 * kmas[j]; i++)
			cout << A[i] << " "; cout << endl;
		for (int i = 0; i < 250 * kmas[j]; i++)
			cout << B[i] << " "; cout << endl;
		t1 = clock();
		res = levenshtein(300 * kmas[j], A, 250 * kmas[j], B); t2 = clock();
		cout << "Динамическое программирование" << endl << "Дистанция Левенштейна: " << res << endl;
		cout << "Время: " << t2 - t1 << endl;
		t1 = clock(); res = levenshtein_r(300 * kmas[j], A, 250 * kmas[j], B); t2 = clock();
		cout << "Рекурсия" << endl << "Дистанция Левенштейна: " << res << endl;
		cout << "Время: " << t2 - t1 << endl << endl;
	}*/
		
		
		/*cout << endl << endl << " ----- НАИБОЛЬШАЯ ОБЩАЯ ПОДПОСЛЕДОВАТЕЛЬНОСТЬ (LCS)! ----- " << endl;
		int s = 0;
		cout << endl << endl << "Рекурсивный метод LCS: " << endl;
		for (int k = 2; k < 15; k++)
		{
			cout << endl;
			for (int i = 0; i < k; i++) cout << A[i] << " "; cout << endl;
			for (int i = 0; i < k; i++) cout << B[i] << " "; cout << endl;
			t1 = clock(); s = lcs(k, A, k, B); t2 = clock();
			cout << "Длина строк: " << k << endl << "Длина LCS: " << s << endl << "Время: " << t2 - t1 << endl << endl;
		}

		cout << endl << endl << "Динамическое программирование:" << endl;
		char z[100] = ""; t1 = clock(); int l = lcsd(A, B, z); t2 = clock();
		cout << "LCS: " << z << endl << "Длина LCS: " << l << endl << "Время: " << t2 - t1 << endl << endl;*/
		

		cout << endl << endl << " ----- ДИСТАНЦИЯ ЛЕВЕНШТЕЙНА ----- " << endl << endl;
		const char H1[] = {'Р', 'А', 'Б'};
		const char H2[] = { 'Б', 'А' ,'Р', 'К', 'А'};
		for (int i = 0; i < 3; i++) cout << H1[i] << " "; cout << endl;
		for (int i = 0; i < 5; i++) cout << H2[i] << " "; cout << endl;
		int s = levenshtein_r(3,H1,5,H2);
		cout << "Дистанция Левенштейна для РАБ и БАРКА: " << s << endl << endl;
		system("pause");
		

		/*cout << endl << endl << " ----- НАИБОЛЬШАЯ ОБЩАЯ ПОДПОСЛЕДОВАТЕЛЬНОСТЬ ----- " << endl;
		char X[] = "QVTWNHO", Y[] = "RQTWYK";
		cout << endl << "Последовательность X: " << X;
		cout << endl << "Последовательность Y: " << Y;
		cout << endl << endl << "Рекурсивный метод: ";
		t1 = clock(); int s = lcs(sizeof(X)-1, X, sizeof(Y)-1, Y); t2 = clock();
		cout << endl << "Длина LCS: " << s << endl << "Время: " << t2 - t1 << endl << endl;
		cout << "Динамическое программирование:" << endl;
		char zz[100] = ""; t1 = clock(); int l = lcsd(X, Y, zz); t2 = clock();
		cout << "LCS: " << zz << endl << "Длина LCS: " << l << endl << "Время: " << t2 - t1 << endl << endl; */
		

	/*cout << endl << endl << " ----- НАИБОЛЬШАЯ ОБЩАЯ ПОДПОСЛЕДОВАТЕЛЬНОСТЬ ----- " << endl;
	char X[] = "QVTWNHO", Y[] = "RQTWYK";
	cout << endl << "Последовательность X: " << X;
	cout << endl << "Последовательность Y: " << Y;
	cout << endl << endl << "Рекурсивный метод: ";
	t1 = clock(); int s = lcs(sizeof(A) - 1, A, sizeof(B) - 1, B); t2 = clock();
	cout << endl << "Длина LCS: " << s << endl << "Время: " << t2 - t1 << endl << endl;
	cout << "Динамическое программирование:" << endl;
	for (int i(2); i < strlen(A); i++)
	{
		int j;
		char* str1 = (char*)malloc(sizeof(char)*i);
		char* str2 = (char*)malloc(sizeof(char)*i);
		for (j=0; j < i; j++)
		{
			str1[j] = A[j];
			str2[j] = B[j];
		}
		str1[j] = '\0'; str2[j] = '\0';
		char zz[100] = ""; t1 = clock(); int l = lcsd(str1, str2, zz); t2 = clock();
		cout << "LCS: " << zz << endl << "Длина LCS: " << l << endl << "Время: " << t2 - t1 << endl << endl;
	}*/
	return 0;
}

