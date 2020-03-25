
#include<iostream>
#include <cstdlib>
#include "matrix.h"
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n <= 0)
		cout << "Error matr1";
	else {
		float** matr1 = new float* [n];
		for (int i = 0; i < n; i++) {
			matr1[i] = new float[n];
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> matr1[i][j];
			}
		}
		obr(matr1, n);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << matr1[i][j] << "   ";
			}
			cout << endl;
		}
		for (int i = 0; i < n; i++) {
			delete[] matr1[i];
		}
		delete[] matr1;
	}
	int k;
	cin >> k ;
	if (k <= 0) {
		cout << "Error matr2";
	}
	else {
		double** matr2 = new double* [k];
		for (int i = 0; i < k; i++) {
			matr2[i] = new double[k];
		}
		for (int i = 0; i < k; i++) {
			for (int j = 0; j < k; j++) {
				cin >> matr2[i][j];
			}
		}
		obr(matr2, k);
		for (int i = 0; i < k; i++) {
			for (int j = 0; j < k; j++) {
				cout << matr2[i][j] << "   ";
			}
			cout << endl;
		}
		for (int i = 0; i < k; i++) {
			delete[] matr2[i];
		}
		delete[] matr2;
	}
	return 0;
}


