// Программа для нахождения максимальной площади треугольника на множестве точек (исходный точки из файла Input.txt)
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <conio.h>
#include <string>

using namespace std;

const int size_row = 100;
const int size_column = 2;

double tochki[size_row][size_column];

double a;    // double a[size_row - 2];
double b;    // double b[size_row - 2];
double c;    // double c [size_row - 2] ;
double d;    // double d [size_row - 2] ;
double S_tr; // double S_tr [size_row - 2];

int i, j, k, number_calculation, number_triangle, n;


double Smax_tr;

void vvod_tochek() // Процедура ввода точек из файла в массив
{
    ifstream InFile("Input.txt");// Переменная с файлом
    if (InFile) {// Если файл найден
        for (i = 0; i < size_row; i++) { // for (i = 0; i != size_row; i++) {
            for (j = 0; j < size_column; j++) { //for (j = 0; j != size_column; j++) {
                InFile >> tochki[i][j];       // Запись данных с файла в двумерный массив
            }
        }

        // Для проверки
        //for (i = 0; i != size_row; i++) {
            //for (j = 0; j != size_column; j++) {
                //cout << tochki[i][j]<<endl;
            //}
        //}
        //cout << endl << endl;
    }
    else cout << "File not found!!! Check the file in the directory"; //// Если файл не найден
}

int main() //Процедура подсчета площади треугольника и выбора максимальной
{
    cout << "This is a program to calculate maximum area of a triangle" << endl << endl;

    Smax_tr = 0;
    n = 0;
    number_triangle = 0;
    number_calculation = ((size_row) * (size_row-2) * (size_row-1)) / 6;

    // Для проверки
    //cout << "Number of calculations " << number_calculation << endl;

    vvod_tochek();

    for (i = 0; i < size_row-2; i++) { 
        for (j = i + 1; j != size_row-1; j++) {
            for (k = j + 1; k != size_row; k++) { 
                a = (tochki[j][0] - tochki[i][0]); //a[i] = (tochki[j][1] - tochki[i][1]);
                b = (tochki[k][1] - tochki[i][1]); //b[i] = (tochki[k][2] - tochki[i][2]);
                c = (tochki[k][0] - tochki[i][0]); //c[i] = (tochki[k][1] - tochki[i][1]);
                d = (tochki[j][1] - tochki[i][1]); //d[i] = (tochki[j][2] - tochki[i][2]);

                S_tr = (abs(a * b - c * d)) / 2; // S_tr[i] = (abs(a[i] * b[i] - c[i] * d[i])) / 2;
                n = n + 1;

                // Для проверки
                //cout << n << "  " << S_tr<< endl;
                //

                if (S_tr > 0) {
                    number_triangle = number_triangle + 1;
                }

                if (S_tr > Smax_tr) {
                    Smax_tr = S_tr;
                }
            }
        }
    }

    // Для проверки
    //cout << "Number of triangles " << number_triangle << endl << endl;

    if (Smax_tr > 0) {
        cout << "Maximum Area of a triangle " << Smax_tr << endl ;
    }
    else cout << "There is no triangle at these points. Check the coordinates of the points in the file Input.txt" << endl;

    system("pause");
    return 0;
}
