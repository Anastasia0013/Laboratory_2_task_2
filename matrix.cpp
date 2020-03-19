#include "matrix.h"
#include<iostream>
using namespace std;
void obr(int** matr, int n, int m)
{
	int** matr1 = new int* [m];
	for (int i = 0; i < m; i++) {
		matr1[i] = new int[n];
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			matr1[i][j]= matr[j][i];
			cout << matr1[i][j] << "   ";
		}
		cout << endl;
	}
}
void obr(long int** matr, int n, int m)
{
	long int** matr1 = new long int* [m];
	for (int i = 0; i < m; i++) {
		matr1[i] = new long int[n];
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			matr1[i][j] = matr[j][i];
			cout << matr1[i][j] << "   ";
		}
		cout << endl;
	}
}
void obr(float** matr, int n, int m)
{
	float** matr1 = new float* [m];
	for (int i = 0; i < m; i++) {
		matr1[i] = new float[n];
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			matr1[i][j] = matr[j][i];
			cout << matr1[i][j] << "   ";
		}
		cout << endl;
	}
}
void obr(double** matr, int n, int m)
{
	double** matr1 = new double* [m];
	for (int i = 0; i < m; i++) {
		matr1[i] = new double[n];
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			matr1[i][j] = matr[j][i];
			cout << matr1[i][j] << "   ";
		}
		cout << endl;
	}
}
void obr(long double** matr, int n, int m)
{
	long double** matr1 = new long double* [m];
	for (int i = 0; i < m; i++) {
		matr1[i] = new long double[n];
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			matr1[i][j] = matr[j][i];
			cout << matr1[i][j] << "   ";
		}
		cout << endl;
	}
}

