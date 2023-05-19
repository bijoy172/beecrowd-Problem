#include<bits/stdc++.h>

using namespace std;

int main()

{
   int X,Y;

   cin >> X >> Y;

   cout << fixed;

   cout << setprecision(2);

   double  arr[5] = {4.00, 4.50, 5.00, 2.00, 1.50};

   double Snack = arr[X-1]*Y;

   cout << "Total: R$ " << Snack << endl;

   return 0;

}
