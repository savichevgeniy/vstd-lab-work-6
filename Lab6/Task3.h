#include <iostream>

using namespace std;

class Task3
{
private:
	static const int N = 8;
	double a = 1.77, X = 0;
	double MatrixX[N] = {3.9, 2.5, 3.6, 6.2, 5.0, 3.3, 2.7, 4.6};

	void CalculateY()
	{
		cout << "Введите Х: "; cin >> X;
		double *x = &X;
		for ( int row = 0; row < N; row++)
		{
			MatrixX[row] = abs((pow(sin(x[row] + a), 3) - pow(cos(x[row] + a), 2)) / (pow((x[row] + a), 4)));
		}
	}

	void PrintMatrixX()
	{
		for (int row = 0; row < N; row++)
			cout << "\t" << MatrixX[row];
		cout << endl;
	}

public:
	void ShowMatrix()
	{
		cout << "Исходная матрица по Х:" << endl;
		PrintMatrixX();
		cout << "Преоразованная матрица по Y:" << endl;
		CalculateY();
		PrintMatrixX();
	}
};