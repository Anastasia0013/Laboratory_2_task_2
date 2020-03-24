
#include "Opredelitel.h"

float del(float** matr, int n, int i, int j)
{
	float A = 0;
	float** matr1 = new float* [n-1];
	for (int i = 0; i < n-1; i++) {
		matr1[i] = new float[n-1];
	}
	for (int k = 0; k < n-1; k++) {
		for (int l = 0; l < n-1; l++) {
			if (k < i) {
				if (l < j)
					matr1[k][l] = matr[k][l];
				else
					matr1[k][l] = matr[k][l + 1];
			}
			else {
				if (l < j)
					matr1[k][l] = matr[k + 1][l];
				else
					matr1[k][l] = matr[k + 1][l + 1];
			}
		}
		
	}
	A = opr(matr1, n - 1);
	for (int i = 0; i < n-1; i++) {
		delete[] matr1[i];
	}
	delete[] matr1;
	return A ;
}
double del(double** matr, int n, int i, int j)
{
	double A = 0;
	double** matr1 = new double* [n - 1];
	for (int i = 0; i < n - 1; i++) {
		matr1[i] = new double[n - 1];
	}
	for (int k = 0; k < n - 1; k++) {
		for (int l = 0; l < n - 1; l++) {
			if (k < i - 1 && l < j - 1)
				matr1[k][l] = matr[k][l];
			else {
				if (k<i - 1 && l>i - 1)
					matr1[k][l] = matr[k][l + 1];
				else {
					if (k > i - 1 && l < i - 1)
						matr1[k][l] = matr[k + 1][l];
					else
						matr1[k][l] = matr[k + 1][l + 1];
				}
			}
		}
	}
		
	A = opr(matr1, n - 1);

	for (int i = 0; i < n-1; i++) {
		delete[] matr1[i];
	}
	delete[] matr1;
	return A;
}
