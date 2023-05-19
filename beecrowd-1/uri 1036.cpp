#include<bits/stdc++.h>

using namespace std;

int main()

{
    double A,B,C,R1,R2;

    cin >> A >> B >> C;

    double X = (B*B)-(4*A*C);

    if(X < 0)
    {
        cout << "Impossivel calcular" <<endl;
    }




    else if(A == 0)
    {
        cout << "Impossivel calcular" << endl;
    }


    else
    {

    R1 = (-B + sqrt(X))/(A+A);

    R2 = (-B - sqrt(X))/(A+A);

    cout << fixed;

    cout << setprecision(5);

    cout << "R1 = " << R1 << endl;

    cout << "R2 = " << R2 << endl;
    }

    return 0;




}
