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
