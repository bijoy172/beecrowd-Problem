#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    for(int i=0; i<100; i++)
    {
        cin >> a >> b;

        if(a==b)
            break;

        else if(a>b)
            cout << "Decrescente" << endl;

        else if(a<b)
            cout << "Crescente" << endl;
    }
    return 0;
}
