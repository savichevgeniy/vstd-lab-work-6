#include <iostream>

using namespace std;

class Task2
{
private:
	static const int N = 15;
	int Matrix[N][N];

	int col1, col2;

	void FillMatrix()
	{
		for (int row = 0; row < N; row++)
		{
			for (int col = 0; col < N; col++)
				Matrix[row][col] = 1 + rand() % 9;
		}
	}

	void PrintMatrix()
	{
		for (int row = 0; row < N; row++)
		{
			for (int col = 0; col < N; col++)
				cout << setw(3) << Matrix[row][col];
			cout << endl;
		}
	}

	void SvapCol(int col1, int col2)
	{
		for (int row = 0; row < N; row++)
		{
			Matrix[row][col2] += Matrix[row][col1];
			Matrix[row][col1] = Matrix[row][col2] - Matrix[row][col1];
			Matrix[row][col2] -= Matrix[row][col1];
		}
	}

public:
	void ShowMatrix()
	{
		FillMatrix();
		cout << "Заданная матрица:" << endl;
		PrintMatrix();

		cout << "Введите первый столбец: "; cin >> col1;
		cout << "Введите второй столбец: "; cin >> col2;

		col1 = col1 - 1;
		col2 = col2 - 1;

		cout << "Преобразованная матрица:" << endl;
		SvapCol(col1, col2);
		PrintMatrix();
	}

};