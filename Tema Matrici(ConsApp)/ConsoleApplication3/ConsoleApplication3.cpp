
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
	int matrix;
	//int matrix2;
	data_in.open("data_input.in");
	srand(time(NULL));

	//1
	matrix = rand() % 10 + 4;
	data_in << matrix << endl;
	for (int i = 0; i < matrix; i++) {
		for (int j = 0; j < matrix; j++) {
			data_in << rand() % 100 + 1 << " ";
		}
		data_in << endl;
	}
	////////////////////////////////////////////
	/*
	//2
	matrix2 = matrix;
	data_in << matrix2 << endl;
	for (int i = 0; i < matrix2; i++) {
		for (int j = 0; j < matrix2; j++) {
			data_in << rand() % 100 + 1 << " ";
		}
		data_in << endl;
	}
	*/
	////////////////////////////////////////////
	data_in.close();
}

void read_matrix(int x[][100], int matrix) {
	for (int i = 1; i <= matrix; i++)
	{
		for (int j = 1; j <= matrix; j++)
		{
			data_in >> x[i][j];
		}
	}
}
/*
void read_matrix2(int y[][100], int matrix2) {
	for (int i = 1; i <= matrix2; i++)
	{
		for (int j = 1; j <= matrix2; j++)
		{
			data_in >> y[i][j];
		}
	}
}
*/
void print_matrix(int x[][100], int matrix) {
	for (int i = 1; i <= matrix; i++)
	{
		for (int j = 1; j <= matrix; j++)
		{
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
}
/*
void print_matrix2(int y[][100], int matrix2) {
	for (int i = 1; i <= matrix2; i++)
	{
		for (int j = 1; j <= matrix2; j++)
		{
			cout << y[i][j] << " ";
		}
		cout << endl;
	}
}
*/
void save_matrix(int x[][100], int matrix) {
	for (int i = 1; i <= matrix ; i++)
	{
		for (int j = 1; j <= matrix; j++)
		{
			data_out << x[i][j] << " ";
		}
		data_out << endl;
	}
	data_out << endl;
}
/*
void save_matrix2(int y[][100], int matrix2) {
	for (int i = 1; i <= matrix2; i++)
	{
		for (int j = 1; j <= matrix2; j++)
		{
			data_out << y[i][j] << " ";
		}
		data_out << endl;
	}
}
*/
void exercitiul_1(int x[][100], int matrix)
{
	int nr = 0, s = 0, media = 0;

	for (int i = 1; i <= matrix; i++)
	{
		for (int j = 1; j <= matrix; j++)
		{
			cout << x[i][j] << " ";
			nr++;
			s = s + x[i][j];
		}
		cout << endl;
	}

	media = s / nr;

	cout << "Media aritmetica este (CAZ 1) : " << media << endl;

	cout << "Media aritmetica este (CAZ 2) : " << s / (matrix*matrix);

}

void exercitiul_2(int x[][100] , int matrix)
{
	int s = 0;
	for (int i = 1; i <= matrix; i++)
	{
		s = s + x[i][i];
	}

	cout << "Suma = " << s;
}

void exercitiul_3(int x[][100], int matrix)
{
	int p = 1;
	for (int i = 1; i <= matrix; i++)
	{
		for (int j = 1; j <= matrix; j++)
		{
			cout << x[i][j] << " ";
		}
		cout << endl;
	}

	int i = 1;
	int j = matrix;
	while (matrix >= 1) {
		p = p * x[i][j];
		i++;
		j--;
		matrix--;
	}
	cout << "Produs = " << p;
}

void exercitiul_4(int x[][100], int matrix)
{
	int s = 0;
	for (int i = 1; i <= matrix; i++)
	{
		s = 0;
		for (int j = 1; j <= matrix; j++)
		{
			s = s + x[i][j];
			cout << x[i][j] << " ";
		}
		cout << "| S =" << s;
		cout << endl;
	}
}

void exercitiul_5(int x[][100], int matrix)
{
	int s = 0;
	for (int i = 1; i <= matrix; i++)
	{
		s = 0;
		for (int j = 1; j <= matrix; j++)
		{
			s = s + x[j][i];
			cout << x[i][j] << " ";

		}
		cout << "Suma coloanei " << i << " este " << s;
		cout << endl;
	}
}

void exercitiul_6(int x[][100], int matrix)
{
	cout << "Transpusa" << endl;

	for (int i = 1; i <= matrix; i++)
	{
		for (int j = 1; j <= matrix; j++)
		{
			cout << x[j][i] << " ";
		}
		cout << endl;
	}
}




int main()
{
	generate_files();

	int x[100][100], y[100][100];
	int matrix;
	//int matrix2;

	data_in >> matrix;
	//data_in >> matrix2;

	read_matrix(x, matrix);
	print_matrix(x, matrix);
	save_matrix(x, matrix);

	cout << endl;

	//read_matrix2(y, matrix);
	//print_matrix2(y, matrix);
	//save_matrix2(y, matrix);

	cout << endl;
	cout<<"Exercitiu :"<< endl;
	cout << endl;

	//exercitiul_1(x, matrix);
	//exercitiul_2(x, matrix);
	//exercitiul_3(x, matrix);
	//exercitiul_4(x, matrix);
	//exercitiul_5(x, matrix);
	//exercitiul_6(x, matrix);

	data_in.close();
	data_out.close();
}

