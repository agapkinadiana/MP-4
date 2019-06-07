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


	cout << "___________________________���������� ������ S1, S2_____________________________" << endl << endl;
	char *S1 = Gen(300);
	char *S2 = Gen(250);
	cout << "������ S1: " << endl;
	for (int i = 0; i < 300; i++) cout << S1[i] << " ";
	cout << endl<<endl;
    cout << "������ S2: " << endl;
	for (int i = 0; i < 250; i++) cout << S2[i] << " ";
	cout << endl << endl;


	

	//cout << "_____________________________��������� �����������______________________________" << endl << endl;
	//int dist = 0;
	clock_t t1 = 0, t2 = 0;

	//const char Kol[] = { '�', '�', '�' };
	//const char Stolb[] = { '�', '�', '�', '�', '�' };
	//for (int i = 0; i < 3; i++) cout << Kol[i] << " "; cout << endl;
	//for (int i = 0; i < 5; i++) cout << Stolb[i] << " "; cout << endl;
	//dist = levenshtein_r(3, Kol, 5, Stolb);
	//cout << "��������� ����������� ��� ��� � �����: " << dist << endl << endl;
	////system("pause");


	float k[] = { 0.04, 0.05, 0.0625, 0.1, 0.2, 0.5, 1 };

	//for (int i = 0; i < 300* k[0]; i++) cout << S1[i] << " ";
	//cout << endl << endl;
	//for (int i = 0; i < 250* k[0]; i++) cout << S2[i] << " "; 
	//t1 = clock(); 
	//dist = levenshtein(300 * k[0], S1, 250 * k[0], S2);
	//t2 = clock();
	//cout << endl << endl;
	//cout << "��������� ����������� � ������� ������������� ����������������: " << dist << endl;
	//cout << "����� ���������� ���������: (���) " << t2 - t1 << endl;
	//t1 = clock();
	//dist = levenshtein_r(300 * k[0], S1, 250 * k[0], S2);
	//t2 = clock();
	//cout << "��������� ����������� � ������� ��������: " << dist << endl;
	//cout << "����� ���������� ���������: (���) " << t2 - t1<< endl;
	//cout << endl << endl;

	//for (int i = 0; i < 300 * k[1]; i++) cout << S1[i] << " ";
	//cout << endl << endl;
	//for (int i = 0; i < 250 * k[1]; i++) cout << S2[i] << " ";
	//t1 = clock();
	//dist = levenshtein(300 * k[1], S1, 250 * k[1], S2);
	//t2 = clock();
	//cout << endl << endl;
	//cout << "��������� ����������� � ������� ������������� ����������������: " << dist << endl;
	//cout << "����� ���������� ���������: (���) " << t2 - t1 << endl;
	//t1 = clock();
	//dist = levenshtein_r(300 * k[1], S1, 250 * k[1], S2);
	//t2 = clock();
	//cout << "��������� ����������� � ������� ��������: " << dist << endl;
	//cout << "����� ���������� ���������: (���) " << t2 - t1 << endl;
	//cout << endl << endl;


	//for (int i = 0; i < 300 * k[2]; i++) cout << S1[i] << " ";
	//cout << endl << endl;
	//for (int i = 0; i < 250 * k[2]; i++) cout << S2[i] << " ";
	//t1 = clock();
	//dist = levenshtein(300 * k[2], S1, 250 * k[2], S2);
	//t2 = clock();
	//cout << endl << endl;
	//cout << "��������� ����������� � ������� ������������� ����������������: " << dist << endl;
	//cout << "����� ���������� ���������: (���) " << t2 - t1 << endl;
	//t1 = clock();
	//dist = levenshtein_r(300 * k[2], S1, 250 * k[2], S2);
	//t2 = clock();
	//cout << "��������� ����������� � ������� ��������: " << dist << endl;
	//cout << "����� ���������� ���������: (���) " << t2 - t1 << endl;
	//cout << endl << endl;


	//for (int i = 0; i < 300 * k[3]; i++) cout << S1[i] << " ";
	//cout << endl << endl;
	//for (int i = 0; i < 250 * k[3]; i++) cout << S2[i] << " ";
	//t1 = clock();
	//dist = levenshtein(300 * k[3], S1, 250 * k[3], S2);
	//t2 = clock();
	//cout << endl << endl;
	//cout << "��������� ����������� � ������� ������������� ����������������: " << dist << endl;
	//cout << "����� ���������� ���������: (���) " << t2 - t1 << endl;
	//t1 = clock();
	//dist = levenshtein_r(300 * k[3], S1, 250 * k[3], S2);
	//t2 = clock();
	//cout << "��������� ����������� � ������� ��������: " << dist << endl;
	//cout << "����� ���������� ���������: (���) " << t2 - t1 << endl;
	//cout << endl << endl;

	//for (int i = 0; i < 300 * k[4]; i++) cout << S1[i] << " ";
	//cout << endl << endl;
	//for (int i = 0; i < 250 * k[4]; i++) cout << S2[i] << " ";
	//t1 = clock();
	//dist = levenshtein(300 * k[4], S1, 250 * k[4], S2);
	//t2 = clock();
	//cout << endl << endl;
	//cout << "��������� ����������� � ������� ������������� ����������������: " << dist << endl;
	//cout << "����� ���������� ���������: (���) " << t2 - t1 << endl;
	//t1 = clock();
	//dist = levenshtein_r(300 * k[4], S1, 250 * k[4], S2);
	//t2 = clock();
	//cout << "��������� ����������� � ������� ��������: " << dist << endl;
	//cout << "����� ���������� ���������: (���) " << t2 - t1 << endl;
	//cout << endl << endl;

	//for (int i = 0; i < 300 * k[5]; i++) cout << S1[i] << " ";
	//cout << endl << endl;
	//for (int i = 0; i < 250 * k[5]; i++) cout << S2[i] << " ";
	//t1 = clock();
	//dist = levenshtein(300 * k[5], S1, 250 * k[5], S2);
	//t2 = clock();
	//cout << endl << endl;
	//cout << "��������� ����������� � ������� ������������� ����������������: " << dist << endl;
	//cout << "����� ���������� ���������: (���) " << t2 - t1  << endl;
	//t1 = clock();
	//dist = levenshtein_r(300 * k[5], S1, 250 * k[5], S2);
	//t2 = clock();
	//cout << "��������� ����������� � ������� ��������: " << dist << endl;
	//cout << "����� ���������� ���������: (���) " << t2 - t1 << endl;
	//cout << endl << endl;

	//for (int i = 0; i < 300 * k[6]; i++) cout << S1[i] << " ";
	//cout << endl << endl;
	//for (int i = 0; i < 250 * k[6]; i++) cout << S2[i] << " ";
	//t1 = clock();
	//dist = levenshtein(300 * k[6], S1, 250 * k[6], S2);
	//t2 = clock();
	//cout << endl << endl;
	//cout << "��������� ����������� � ������� ������������� ����������������: " << dist << endl;
	//cout << "����� ���������� ���������: (���) " << t2 - t1 << endl;
	//t1 = clock();
	//dist = levenshtein_r(300 * k[6], S1, 250 * k[6], S2);
	//t2 = clock();
	//cout << "��������� ����������� � ������� ��������: " << dist << endl;
	//cout << "����� ���������� ���������: (���)" << t2 - t1 << endl;



    cout << endl << "____________________���������� ����� ��������������������� (LCS)__________________";
	int res = 0, m;

	cout << endl << "����������� ����� LCS: " << endl;
	for (m = 5; m < 15; m++)
	{
		for (int i = 0; i < m; i++) cout << S1[i] << " ";
		cout << endl;
		for (int i = 0; i < m; i++) cout << S2[i] << " ";
		cout << endl<< endl; 
		t1 = clock();
		res = lcs(m, S1, m, S2);
		t2 = clock();
		cout << "����� �����: " << k << endl << "����� LCS: " << res << endl << "�����: " << t2 - t1 << endl << endl;

	}
	cout << "������������ ����������������" << endl;
    char z[100] = "";
	t1 = clock();
	int l = lcsd(S1, S2, z);
	t2 = clock();
	cout << endl << "����� LCS: " << l;
	cout << endl << "����� ����������: " << t2 - t1 << endl;




	cout << endl << "_____________________���������� ����� LCS ��� X � Y(��������)___________________";
	char X[] = "CDLDCA", Y[] = "ALBDACD";
	cout << endl << "-- ������������������ X: " << X;
	cout << endl << "-- ������������������ Y: " << Y;
	t1 = clock();
	int s = lcs(
		sizeof(X) - 1,  // �����   ������������������  X   
		"CDLDCA",       // ������������������ X
		sizeof(Y) - 1,  // �����   ������������������  Y
		"ALBDACD"       // ������������������ Y
		);
	t2 = clock();
	cout << endl << "-- ����� LCS: " << s << endl;
	cout << endl << "����� ����������: " << t2 - t1 << endl;

    
	char x[] = "CDLDCA",
	     y[] = "ALBDACD";
	t1 = clock();
	l = lcsd(x, y, z);
	t2 = clock();
	cout << endl
	<< "___���������� ����� �������������������� - LCS(������������ ����������������)___" << endl;
	cout << endl << "����������������� X: " << x;
	cout << endl << "����������������� Y: " << y;
	cout << endl << "                LCS: " << z;
	cout << endl << "          ����� LCS: " << l;
	cout << endl << "����� ����������: " << t2 - t1 << endl;
	cout << endl;

	return 0;

}