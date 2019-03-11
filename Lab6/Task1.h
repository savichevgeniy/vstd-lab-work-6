#include "pch.h"
#include <iostream>
#include <iomanip> 
#include <iomanip> 

using namespace std;

class Task1
{
private :

	static const int N = 8;
	static const int M = 4;

	int Matrix[N][M];
	int srfRow[N];

	double CalculateG()
	{
		double g = 0;
		double x = 0;
		for (int k = 0; k <= 8; k++)
		{
			for (int j = 0; j <= k; j++)
				g += log(j - exp(j)/ log(2));
		}
		return g;
	}

	void CalculateSrf()
	{
		int Srf = 0;
		int Sum = 0;
		int Size = 0;
		for (int col = 0; col < N; col++)
		{
			Sum += Matrix[0][col];
			Size = sizeof(Matrix[N][col]);
		}
			Srf = Sum / Size;
			cout << "Cреднее арифметическое элементов строк матрицы = " << Srf << endl;;
	}

	void FillMatrix()
	{
		for (int row = 0; row < N; row++)
		{
			for (int col = 0; col < M; col++)
			{
				Matrix[row][col] = abs(pow(-((2 + row)) / (3 + col), row) - exp(cos(col)) - 3 * 3.14);
			}
		}
	}


public:
	void PrintMatrix()
	{
		FillMatrix();
		cout << "Матриица элементов по А: " << endl;
		for (int row = 0; row < N; row++)
		{
			for (int col = 0; col < M; col++)
				cout << "\t" << Matrix[row][col];
			cout << endl;
		}
		cout << endl;
		CalculateSrf();
		cout << "G = " << CalculateG() << endl;
	}
};
