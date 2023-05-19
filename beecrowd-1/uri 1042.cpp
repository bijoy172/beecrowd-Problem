#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;

    cin >> a >> b >> c;

    int i = a,j = b,k = c,temp;

    if(a>b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if(a>c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if(b>c)
    {
        temp = b;
        b = c;
        c = temp;
    }

    cout << a << endl << b<< endl <<c << endl;

    cout << endl<< i << endl << j<< endl <<k << endl;

    return 0;

}


