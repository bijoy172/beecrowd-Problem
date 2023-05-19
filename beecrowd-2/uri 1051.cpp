#include<bits/stdc++.h>

using namespace std;

int main()
{
    float n;
    cin >> n;

    cout << fixed;

    cout << setprecision(2);

    if(n>=0.0 && n<=2000.00)
        cout << "Isento" << endl;

    else if(n>2000.00 && n<=3000.00){

        n = n-2000.00;
        n = (n*8)/100;
        cout << "R$ " << n << endl;

    }

        else if(n>3000.00 && n<=4500.00){

        n = n-3000.00;
        n = (n*18)/100;
        cout << "R$ " << n+80 << endl;

    }

        else if(n>4500.00){

        n = n-4500.00;
        n = (n*28)/100;
        cout << "R$ " << n+80+270 << endl;

    }
     return 0;
}
