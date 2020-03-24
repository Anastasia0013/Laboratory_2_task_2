
float opr(float** matr, int n)
{
	float A=0;
		if (n == 2)
		{
			A = matr[0][0] * matr[1][1] - matr[1][0] * matr[0][1];
		}
		else
			if (n == 1) {
				A = matr[0][0];
			}
			else{
				{
					A = matr[0][0] * matr[1][1] * matr[2][2];
					A -= matr[2][0] * matr[1][1] * matr[0][2];
					A += matr[1][0] * matr[2][1] * matr[0][2];
					A += matr[2][0] * matr[0][1] * matr[1][2];
					A -= matr[0][0] * matr[2][1] * matr[1][2];
					A -= matr[1][0] * matr[0][1] * matr[2][2];
				}
			}
			
	return A;
}

double opr(double** matr, int n)
{
	double A = 0;


		if (n == 2)
		{
			A = matr[0][0] * matr[1][1] - matr[1][0] * matr[0][1];
		}
		else
			if (n == 1) {
				A = matr[0][0];
			}
			else {
				{
					A = matr[0][0] * matr[1][1] * matr[2][2];
					A -= matr[2][0] * matr[1][1] * matr[0][2];
					A += matr[1][0] * matr[2][1] * matr[0][2];
					A += matr[2][0] * matr[0][1] * matr[1][2];
					A -= matr[0][0] * matr[2][1] * matr[1][2];
					A -= matr[1][0] * matr[0][1] * matr[2][2];
				}
			}
	
	return A;
}