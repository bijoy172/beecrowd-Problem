#include<bits/stdc++.h>

using namespace std;

int main()

{
    double R;

    cin >> R;

    double pi = 3.14159;

    double Sphere = (4/3.0) * pi * R * R * R;

    cout << fixed;

    cout << setprecision(3);

    cout << "VOLUME = " << Sphere << endl;

    return 0;
}
