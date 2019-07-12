#include <iostream>
#define MAX 99999
using namespace std;

double* normirovanie(double mass[], int N)
{
	double *func1 = new double[MAX];
	double max = mass[0];
	double min = mass[0];
	for (int i = 0; i < N; i++) {
		if (mass[i] > max)
			max = mass[i];
		if (mass[i] < min)
			min = mass[i];
	}
	for (int j = 0; j < N; j++)
		func1[j] = (mass[j] - min) / (max - min);
	return func1;
}

int main()
{
	int n;
	cin >> n;
	cout << endl;
	cout << endl;
	double *mass = new double[MAX];
	double *func2 = new double [MAX];
	for (int i = 0; i < n; i++) {
		cin >> mass[i];
		cout << endl;
	}
	func2 = normirovanie(mass, n);
	for (int i = 0; i < n; i++) {
		cout << func2[i] << endl;
		cout << endl;
	}

	delete [] func2;
	delete [] mass;
	return 0;
}