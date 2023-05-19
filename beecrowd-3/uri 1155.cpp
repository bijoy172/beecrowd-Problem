#include<bits/stdc++.h>

using namespace std;

int main()
{
    cout << fixed;
    cout << setprecision(2);
    double s=0,j=1.0;
    for(int i=1; i<=100;i++){

        s+=(1/j);
        j++;
    }
    cout << s << endl;
    return 0;
}
