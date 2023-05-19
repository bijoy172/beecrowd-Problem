#include<bits/stdc++.h>

using namespace std;

int main()
{
    cout << fixed;
    cout << setprecision(2);
    double s=0,j=1.0;
    for(int i=1; i<=39;i+=2){

        s+=(i/j);
        j=(j+j);
    }
    cout << s << endl;
    return 0;
}

