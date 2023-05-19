#include<bits/stdc++.h>

using namespace std;

int main()
{
    char name[6];

    cin >> name;

    double a,b;

    cin >> a >> b ;


    double c = (a+(b*15/100));

    cout << fixed;

    cout << setprecision(2);


    cout << "TOTAL = R$ " << c << endl;

    return 0;



}

