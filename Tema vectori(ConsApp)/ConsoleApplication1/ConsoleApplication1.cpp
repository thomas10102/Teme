#include "pch.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>     
#include <time.h>

using namespace std;

ifstream data_in("data_input.in");
ofstream data_out("data_output.out");

void generate_files() {
	ofstream data_in;
	int vector;
	data_in.open("data_input.in");
	srand(time(NULL));
	vector = rand() % 100 + 1;
	data_in << vector << endl;
	for (int i = 0; i < vector; i++) {
		data_in << rand() % 100 + 1 << " ";
	}
	data_in << endl;
	data_in.close();
}

void read_vector(int x[], int n) {
	for (int i = 0; i < n; i++) {
		data_in >> x[i];
	}
}

void print_vector(int x[], int n) {
	for (int i = 0; i < n; i++) {
		cout << x[i] << " ";
	}
}

void save_vector(int x[], int n) {
	for (int i = 0; i < n; i++) {
		data_out << x[i] << " ";
	}
}

void exercitiul_1(int x[], int n)
{
	int k;

	cout << "k(Pozitia pentru stergere) =";
	cin >> k;

	for(int i = k-1; i < n; i++)
	{
		x[i] = x[i + 1];
	}
	n--;
	for(int i = 0; i < n; i++)
	{
		cout << x[i] << " ";
	}

}

void exercitiul_2(int x[], int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (x[i] % 2 == 0)
		{
			cout << x[i] << " ";
		}
	}
}

void exercitiul_3(int x[], int n)
{
	int i;

	cout << "Numere de pe indice par:" << endl;
	for (i = 0; i <
 n; i++)
	{
		if (i % 2 == 0)
		{
			cout << x[i] << " ";
		}
	}
}

void exercitiul_4(int x[], int n)
{
	int m , i;
	m = x[1];
	for (i = 1; i < n; i++)
	{
		if (x[i] < m)
		{
			m = x[i];
		}
	}
	cout << "Minimul este: " << m;

}

void exercitiul_5(int x[], int n)
{
	int i, k, a;
	cout << "Pozitie ="; cin >> k;
	cout << "Numar ="; cin >> a;
	if (k > n) {
		cout << "Pozitie invalida!\nLungimea vectorului=" << n;
	}
	else
	{
		n++;
		for (i = n; i > k; i--)
		{
			x[i] = x[i - 1];
		}
		x[k] = a;
		for (i = 0; i < n; i++)
		{
			cout << x[i] << " ";
		}
	}

}
/*
//NU merge
void exercitiul_6(int x[], int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		b[x[i]]++;
	}

	for (i = 1; i < 10; i++)
	{
		cout << b[i] << " ";
	}
}
*/

void exercitiul_7(int x[], int n)
{

	int b[100] = { 0 }, s = 0;
	int k, j;
	int i;

	for (i = 0; i < n; i++)
	{
		k = 1;
		for (j = 0; j <= s; j++)
		{
			if (x[i] == b[j]) { k = 0; }
		}

		if (k == 1)
		{
			b[s + 1] = x[i];
			s++;
		}
	}
	for (i = 1; i <= s; i++)
	{
		cout << b[i] << " ";
	}

}

void exercitiul_9(int x[],int y[], int n)
{
	int m, i, ok;

	cout << "m =";
	cin >> m;

	for (i = 0; i < m; i++)
	{
		cout << "y[" << i << "]=";
		cin >> y[i];
	}

	ok = 1;

	for (i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (x[i] == y[j] && n == m)
			{
				ok = 1;
			}
			else { ok = 0; }
		}
	}

	if (ok == 1)
	{
		cout << "Sunt la fel";
	}
	else if (n != m)
	{
		cout << "Nu sunt la fel 1";
	}
	else if (ok == 0) cout << "Nu sunt la fel 2";
}


int main()
{
	//generate_files();
	int n, x[101],y[100];
	data_in >> n;

	read_vector(x, n);
	print_vector(x, n);

	cout << endl;
	//exercitiul_1(x, n);
	//exercitiul_2(x, n);
	//exercitiul_3(x, n);
	//exercitiul_4(x, n);
	//exercitiul_5(x, n);
	//exercitiul_6(x, n);
	//exercitiul_7(x, n);
	exercitiul_9(x,y, n);

	save_vector(x, n);

	data_in.close();
	data_out.close();

}