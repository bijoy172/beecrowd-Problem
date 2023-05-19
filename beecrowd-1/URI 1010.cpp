
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a1,b1;
    double c1;

    cin >> a1 >> b1>> c1;

    int a2,b2;
    double c2;

    cin >> a2 >> b2>> c2;

    double amount = (b1*c1)+(b2*c2);

    cout << fixed;

    cout << setprecision(2);

    cout << "VALOR A PAGAR: R$ " << amount << endl;

    return 0;
}
