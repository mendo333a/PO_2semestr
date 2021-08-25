// Striangle.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

double x1, y1, x2, y2, x3, y3, side_a, side_b, side_c, Perimetr_tr, S_tr;
int id;

void vvod_tochek(x1, y1, x2, y2, x3, y3)
{
    cout << endl << endl;

    cout << "Enter the x coordinate of the first point: ";
    cin >> x1;

    cout << "Enter the y coordinate of the first point: ";
    cin >> y1;

    cout << "Enter the x coordinate of the second point: ";
    cin >> x2;

    cout << "Enter the y coordinate of the second point: ";
    cin >> y2;

    cout << "Enter the x coordinate of the third point: ";
    cin >> x3;

    cout << "Enter the y coordinate of the third point: ";
    cin >> y3;

    return;
}

int main()
{
 
   cout << "This is a program to calculate of three-point area of a triangle" << endl << endl;

  do {
    
   vvod_tochek(x1, y1, x2, y2, x3, y3);

   side_a = sqrt(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2));
   side_b = sqrt(pow(abs(x1 - x3), 2) + pow(abs(y1 - y3), 2));
   side_c = sqrt(pow(abs(x2 - x3), 2) + pow(abs(y2 - y3), 2));

         if (side_a ==0 || side_b==0 || side_c==0) {

          cout << "The area of a triangle can not be calculated. Set the coordinates of the new points.";
          vvod_tochek(x1, y1, x2, y2, x3, y3);
        
         }
   
  Perimetr_tr = 0.5 * (side_a + side_b + side_c);
    
         if (Perimetr_tr == side_a || Perimetr_tr == side_b || Perimetr_tr == side_c || Perimetr_tr == 0) {
     
          cout << "The area of a triangle can not be calculated. Set the coordinates of the new points.";
          vod_tochek(x1, y1, x2, y2, x3, y3);
       
         }

   S_tr = sqrt(Perimetr_tr * (Perimetr_tr - side_a) * (Perimetr_tr - side_b) * (Perimetr_tr - side_c));

   cout << "Area of a triangle " << S_tr << endl ;
    
   cout << "Continue calculating?: 0 - no; 1 - yes: ";
   cin >> id;

   cout << endl;

   } while (id > 0);

 return 0;

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
