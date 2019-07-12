#include <iostream>
#define MAX 100
using namespace std;

void normirovat (double znacheniya[], int kollichestvo)
{
	double maximal = znacheniya[1];
	double minimal = znacheniya[1];
	int i ,j;
	for(i = 0; i < kollichestvo; i++) {
		if (znacheniya[i] > maximal)
			maximal = znacheniya[i];
		if (znacheniya[i] < minimal)
			minimal = znacheniya[i];
	}
	for(j = 0; j < kollichestvo; j++)
		znacheniya[j] = ((znacheniya[j] - minimal)/(maximal - minimal));
}


int main()
{
	int chislo,i ;
	cin >> chislo;
	double znacheniya[MAX];
	for(i = 0; i < chislo; i++) {
		cin >> znacheniya[i];
		cout << endl;
	}
	normirovat (znacheniya,chislo);
	for (int i = 0; i < chislo; i++)
		cout << znacheniya[i] << endl;
	return 0;
}
