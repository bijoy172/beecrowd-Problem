#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,first=0,second=1,fibo;
    cin >> n;
    cout << "0";


    for(int i=1; i<n; i++)
    {
        if(i<=1)
        {
            fibo=i;
        }
        else
        {
            fibo=first+second;
            first=second;
            second=fibo;
        }
        cout  << " " << fibo;

    }
    return 0;
}

