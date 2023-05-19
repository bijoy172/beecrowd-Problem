#include<bits/stdc++.h>

using namespace std;

int main()

{
    double n,b,salary;

    char c = '%';

    int p;

    cin >> n;

    cout << fixed;
    cout << setprecision(2);

    if(n>=0.0 && n<=400.00){
         b = (n*15)/100;
        salary = n+b;
         p = 15;

    }

   else if(n>=400.01 && n<=800.00){
         b = (n*12)/100;
         salary = n+b;
         p = 12;
    }

   else if(n>=800.01 && n<=1200.00){
        b = (n*10)/100;
        salary = n+b;
         p = 10;
    }

   else if(n>=1200.01 && n<=2000.00){
         b = (n*7)/100;
         salary = n+b;
         p = 7;
    }

    else if(n>2000.00){
        b = (n*4)/100;
         salary = n+b;
         p = 4;
    }

    cout << "Novo salario: " << salary << endl;

    cout << "Reajuste ganho: " << b << endl;

    cout << "Em percentual: " << p << " " << c << endl;


    return 0;

}
