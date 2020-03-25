#include "matrix.h"
#include<iostream>
#include "Opredelitel.h"
#include "Delet.h"
using namespace std;
void obr(float** matr, int n)
{
	float A;
	A = opr(matr, n);
	if (A == 0) {
		cout << "Error determinant" << endl;
	}
	else{
		if (n == 2) {
			float e = matr[0][0];
			matr[0][0] = matr[1][1] / A;
			matr[1][1] = e / A;
			matr[1][0] = -matr[1][0] / A;
			matr[0][1] = -matr[0][1] / A;

		}
		else {
			if (n == 3) {

				float** matr1 = new float* [n];
				for (int i = 0; i < n; i++) {
					matr1[i] = new float[n];
				}
				
				for (int i = 0; i < n; i++) {
					for (int j = 0; j < n; j++) {

						float k = del(matr, n, i, j);
						matr1[i][j] = pow((-1),i+j)*k;
					}
				}
				for (int i = 0; i < n; i++) {
					for (int j = 0; j < n; j++) {
						matr[i][j] = matr1[j][i] / A;
					}
				}
				for (int i = 0; i < n; i++) {
					delete[] matr1[i];
				}
				delete[] matr1;
			}
			else {
				if (n == 1)
					matr[0][0] /= A;
			}
		}
	}
}
void obr(double** matr, int n)
{
	double A;
	A = opr(matr, n);
	if (A == 0) {
		cout << "Error determinant" << endl;
	}
	else {
		if (n == 2) {
			double e = matr[0][0];
			matr[0][0] = matr[1][1] / A;
			matr[1][1] = e / A;
			matr[1][0] = -matr[1][0] / A;
			matr[0][1] = -matr[0][1] / A;

		}
		else {
			if (n == 3) {

				float** matr1 = new float* [n];
				for (int i = 0; i < n; i++) {
					matr1[i] = new float[n];
				}

				for (int i = 0; i < n; i++) {
					for (int j = 0; j < n; j++) {

						float k = del(matr, n, i, j);
						matr1[i][j] = pow((-1), i + j) * k;
					}
				}
				for (int i = 0; i < n; i++) {
					for (int j = 0; j < n; j++) {
						matr[i][j] = matr1[j][i] / A;
					}
				}
				for (int i = 0; i < n; i++) {
					delete[] matr1[i];
				}
				delete[] matr1;
			}
			else {
				if (n == 1)
					matr[0][0] /= A;
			}
		}
	}
}
