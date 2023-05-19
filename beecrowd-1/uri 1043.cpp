#include<bits/stdc++.h>

using namespace std;

int main()

{
    double A,B,C;

    cin >> A >> B >> C;

    double Perimetro = (A+B+C);

    double Area = (((A+B)*C)/2);

    cout << fixed;

    cout << setprecision(1);

    if(A+B > C && B+C > A && A+C > B)

        cout << "Perimetro = " << Perimetro << endl;

    else

        cout << "Area = " << Area << endl;

    return 0;
}
