#include<bits/stdc++.h>

using namespace std;

int main()

{
    int a,b;

    int d = 24;

    cin >> a >> b;

    if(a>b)
    {
        int s = (d-a)+b;
        cout << "O JOGO DUROU " << s << " HORA(S)" << endl;
    }

    else if(a<b)
    {
        int s1 = b-a;
        cout << "O JOGO DUROU " << s1 << " HORA(S)" << endl;
    }

    else if(a==b)
    {
        int s2 = d;
        cout << "O JOGO DUROU " << d << " HORA(S)" << endl;
    }
    return 0;
}
