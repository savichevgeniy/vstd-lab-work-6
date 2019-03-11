#include <iostream>

using namespace std;

class Task4
{
public:

	void ShowMatrix()
	{
		static const int N = 3;
		static const int M = 6;
		srand((unsigned)time(NULL));

		int a[N][M], b[N][M];

		cout << "Исходная матрица: " << endl;
		for (int n = 0; n < N; n++, cout << endl)
			for (int m = 0; m < M; m++)
			{
				a[n][m] = 10 + rand() % 90;
				cout << setw(4) << a[n][m];
			}

		cout << "Перевернутая матрица" << endl;

		for (int m = 0; m < M; m++, cout << endl)
			for (int n = N - 1; n >= 0; n--)
			{
				b[n][m] = a[n][m];
				cout << setw(4) << b[n][m];
			}

		fflush(stdin);
		cin.get();
	}
};