#include <iostream>
using namespace std;

int brojPaketa(int mase[], int n, int L, int D) {
	int broj = 0;
	for (int i = 0; i < n; i++) {
		if (mase[i] >= L && mase[i] <= D)
			broj++;
	}
	return broj;
}

void ispraviMjerenja(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] < 0)
			a[i] = 0;
	}
}

int brojIznadPraga(int temp[][6], int redak, int P) {
	int broj = 0;

	for (int i = 0; i < 6; i++) {
		if (temp[redak][i] > P)
			broj++;
	}
	return broj;
}

int main()
{
	/*int n, L, D;
	int mase[100];
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> mase[i];
	}
	cin >> L >> D;

	cout << brojPaketa(mase, n, L, D);*/
	//-----------------------------------------------------------------------
	/*int n;
	int a[100];

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	ispraviMjerenja(a, n);

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}*/
	//-----------------------------------------------------------------------
	int temp[4][6];
	int redak, P;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 6; j++) {
			cin >> temp[i][j];
		}
	}

	cin >> redak >> P;

	cout << brojIznadPraga(temp, redak, P);

}