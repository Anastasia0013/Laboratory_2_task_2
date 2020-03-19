//транспонированная матрица
#include<iostream>
#include <cstdlib>
#include "matrix.h"
using namespace std;
int main()
{
	int n;
	int m;
	cin >> n;
	cin >> m;
	if (n <= 0 || m <= 0)
		cout << "Error matr1";
	else {
		int** matr1 = new int* [n];
		for (int i = 0; i < n; i++) {
			matr1[i] = new int[m];
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> matr1[i][j];
			}
		}
		obr(matr1, n, m);
		for (int i = 0; i < n; i++) {
			delete[] matr1[i];
		}
		delete[] matr1;
	}
	int k;
	cin >> k ;
	int l;
	cin >> l;
	if (k <= 0 || l <= 0) {
		cout << "Error matr2";
	}
	else {
		float** matr2 = new float* [k];
		for (int i = 0; i < k; i++) {
			matr2[i] = new float[l];
		}
		for (int i = 0; i < k; i++) {
			for (int j = 0; j < l; j++) {
				cin >> matr2[i][j];
			}
		}
		obr(matr2, k, l);

		for (int i = 0; i < k; i++) {
			delete[] matr2[i];
		}
		delete[] matr2;
	}
	return 0;
}


