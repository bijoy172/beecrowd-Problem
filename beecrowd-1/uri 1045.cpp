#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,temp;
    cin >> a >> b >> c;

    if(a<b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if(a < c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if(b < c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    double i = a*a;
    double j = b*b;
    double k = c*c;

    if(a >= b+c)
        cout << "NAO FORMA TRIANGULO" << endl;
    else
    {
        if(i == j+k)
            cout << "TRIANGULO RETANGULO" << endl;
        if(i > j+k)
            cout << "TRIANGULO OBTUSANGULO" << endl;
        if(i < j+k)
            cout << "TRIANGULO ACUTANGULO" << endl;
        if(a==b&& b==c)
            cout << "TRIANGULO EQUILATERO" << endl;
        else if(a==b || b==c || c==a)
            cout << "TRIANGULO ISOSCELES" << endl;
    }
    return 0;
}





