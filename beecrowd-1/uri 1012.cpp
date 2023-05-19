#include<bits/stdc++.h>

using namespace std;

int main()

{
    double A,B,C;

    double pi = 3.14159;

    cin >> A >> B >> C;

    double triangle = (1/2.0)*A*C;

    double radius = pi*C*C;

    double trapezium = 1/2.0*(A+B)*C;

    double square = B*B;

    double rectangle = A*B;

    cout << fixed;

    cout << setprecision(3);

    cout << "TRIANGULO: " << triangle << endl;

    cout << "CIRCULO: " << radius << endl;

    cout << "TRAPEZIO: " << trapezium << endl;

    cout << "QUADRADO: " << square << endl;

    cout << "RETANGULO: " << rectangle << endl;

    return 0;


}
