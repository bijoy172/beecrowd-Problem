#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N[100],j=0;
    cout << fixed;
    cout << setprecision(4);
    double n;
    cin >> n;

    for(int i=0; i<100; i++)
    {
        cout << "N[" << i << "] = " << j << endl;
        j++;
        if(n==j)
            j=0;
    }
    return 0;
}
