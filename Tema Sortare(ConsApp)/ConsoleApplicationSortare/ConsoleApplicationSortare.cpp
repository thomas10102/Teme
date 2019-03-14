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


void exercitiul_1(int x[],int n)
{
	int ok, i, aux, k;

	cout << endl;

	cout << "Dati k=";
	cin >> k;

	do
	{
		ok = 1;
		for (i = 0; i < k; i++)
		{
			if (x[i] > x[i + 1])
			{
				aux = x[i];
				x[i] = x[i + 1];
				x[i + 1] = aux;
				ok = 0;
			}
		}
		for (i = k + 1; i <= n; i++)
		{
			if (x[i] < x[i + 1])
			{
				aux = x[i];
				x[i] = x[i + 1];
				x[i + 1] = aux;
				ok = 0;
			}
		}
	} while (!ok);


	for (i = 0; i < n; i++)
	{
		cout << x[i] << " ";
	}
}

void exercitiul_2(int x[], int n)
{
	int ok, i, aux;

	cout << endl;

	do
	{
		ok = 1;
		for (i = 0; i < n-1; i++)
		{
			if (x[i] > x[i + 1])
			{
				aux = x[i];
				x[i] = x[i + 1];
				x[i + 1] = aux;
				ok = 0;
			}
		}
	} while (!ok);


	for (i = 0; i < n; i++)
	{
		cout << x[i] << " ";
	}
}

void exercitiul_3(int x[],int y[], int n)
{
	int ok, l = 1, i, j, aux, k = 0;

	for (i = 1; i < n; i++)
	{
		ok = 1;
		for (j = 2; j <= x[i] / 2; j++)
		{
			if (x[i] % j == 0)
				ok = 0;
		}
		if (ok == 1)
		{
			y[l] = x[i];
			l++;

			k = 1;
		}
	}
	do
	{
		ok = 1;
		for (i = 1; i < l - 1; i++)
		{
			if (y[i] > y[i + 1])
			{
				aux = y[i];
				y[i] = y[i + 1];
				y[i + 1] = aux;
				ok = 0;
			}
		}
	} while (!ok);

	cout << endl;

	for (i = 1; i < l; i++)
	{
		cout << y[i] << " ";
	}


	if (k == 0)
	{
		cout << "nu sunt numere prime";
	}
}

void exercitiul_4(int x[], int y[],int n)
{
	int d, i, aux, ok;

	for (i = 0; i <= n; i++)
	{
		d = 0;
		for (int k = 1; k <= x[i]; k++)
		{
			if (x[i] % k == 0)
			{
				d++;
			}
		}
		y[i] = d;
	}

	do {
		ok = 1;
		for (i = 1; i < n-1; i++)
		{
			if (y[i] > y[i + 1])
			{
				aux = x[i];
				x[i] = x[i + 1];
				x[i + 1] = aux;
				aux = y[i];
				y[i] = y[i + 1];
				y[i + 1] = aux;
				ok = 0;
			}
		}

	} while (!ok);

	cout << endl;
	for (i = 0; i < n; i++)
	{
		cout << x[i] << " ";
	}
	cout << endl;
	for (i = 0; i < n; i++)
	{
		cout << y[i] << " ";
	}
}

void exercitiul_5(int x[], int n)
{
	int i, vmax, vi, ok, aux;

	vmax = x[1];
	vi = 1;
	for (i = 0; i < n; i++)
	{
		if (x[i] > vmax)
		{
			vmax = x[i];
			vi = i;
		}
	}

	do {
		ok = 1;
		for (i = 0; i < vi-1; i++)
		{
			if (x[i] > x[i + 1])
			{
				aux = x[i];
				x[i] = x[i + 1];
				x[i + 1] = aux;
				ok = 0;
			}
		}
		for (i = vi; i < n; i++)
		{
			if (x[i] < x[i + 1])
			{
				aux = x[i];
				x[i] = x[i + 1];
				x[i + 1] = aux;
				ok = 0;
			}
		}

	} while (!ok);

	cout << endl;

	for (i = 0; i < n; i++)
	{
		cout << x[i] << " ";
	}

}

void exercitiul_6(int x[], int n)
{
	int i, vmax, vi, vj, vmin, ok, aux;

	vmax = x[1];
	vmin = x[1];
	vi = 1;
	vj = 1;

	for (i = 0; i < n; i++)
	{
		if (x[i] > vmax)
		{
			vmax = x[i];
			vi = i;
		}
		if (x[i] < vmin)
		{
			vmin = x[i];
			vj = i;

		}
	}

	if (vi < vj)
	{
		aux = vi;
		vi = vj;
		vj = aux;
	}

	do
	{
		ok = 1;
		for (i = vj + 1; i < vi - 1; i++)
		{
			if (x[i] > x[i + 1])
			{
				aux = x[i];
				x[i] = x[i + 1];
				x[i + 1] = aux;
				ok = 0;
			}
		}

	} while (!ok);

	cout << endl;

	for (i = 0; i < n; i++)
	{
		cout << x[i] << " ";
	}
}


void exercitiul_9(int x[],int y[], int n)
{
	int ok, aux, i, s, c, u;


	for (i = 0; i < n; i++)
	{
		s = 0;
		c = x[i];
		while (c > 0)
		{
			u = c % 10;
			s = s + u;
			c = c / 10;
		}
		y[i] = s;
	}


	do {
		ok = 1;
		for (i = 0; i < n; i++)
		{
			if (y[i] > y[i + 1])
			{
				aux = x[i];
				x[i] = x[i + 1];
				x[i + 1] = aux;
				aux = y[i];
				y[i] = y[i + 1];
				y[i + 1] = aux;
				ok = 0;
			}
		}

	} while (!ok);
	cout << endl;
	for (i = 1; i < n; i++)
	{
		cout << x[i] << " ";
	}
	cout << endl;
	for (i = 1; i < n; i++)
	{
		cout << y[i] << " ";
	}
}

int main()
{
	//generate_files();
	int n, x[101], y[101];
	data_in >> n;
	read_vector(x, n);
	print_vector(x, n);

	//exercitiul_1(x, n);
	//exercitiul_2(x, n);
	//exercitiul_3(x, y , n);
	//exercitiul_4(x,y,n);
	//exercitiul_5(x,n);
	//exercitiul_6(x,n);
	//exercitiul_9(x,y,n);

	save_vector(x, n);
	data_in.close();
	data_out.close();
}

