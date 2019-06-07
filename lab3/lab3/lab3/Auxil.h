#pragma  once 
#include <cstdlib>

namespace auxil
{
	void start();                         // старт  генератора случайных чисел
	double dget(double rmin, double rmax); // получить случайное число дробное между двумя дробными
	int iget(int rmin, int rmax);        // получить  случайное число целое между двумя целыми
};