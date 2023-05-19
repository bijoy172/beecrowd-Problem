#include<bits/stdc++.h>

using namespace std;

int main()
{
    double n;

    cin >> n;

    int a = n*100;

    cout << "NOTAS:" << endl;

    cout << a/10000 << " nota(s) de R$ 100.00" << endl;
    a = a%10000;

    cout << a/5000 << " nota(s) de R$ 50.00" << endl;
    a = a%5000;

    cout << a/2000 << " nota(s) de R$ 20.00" << endl;
    a = a%2000;

    cout << a/1000 << " nota(s) de R$ 10.00" << endl;
    a = a%1000;

    cout << a/500 << " nota(s) de R$ 5.00" << endl;
    a = a%500;

    cout << a/200 << " nota(s) de R$ 2.00" << endl;
    a = a%200;

    cout << "MOEDAS:" << endl;

    cout << a/100 << " moeda(s) de R$ 1.00" << endl;
    a = a%100;

    cout << a/50 << " moeda(s) de R$ 0.50" << endl;
    a =  a%50;

    cout << a/25 << " moeda(s) de R$ 0.25" << endl;
    a = a%25;

    cout << a/10 << " moeda(s) de R$ 0.10" << endl;
    a = a%10;

    cout << a/5 << " moeda(s) de R$ 0.05" << endl;
    a = a%5;

    cout << a/1 << " moeda(s) de R$ 0.01" << endl;
    a = a%1;

    return 0;



}
