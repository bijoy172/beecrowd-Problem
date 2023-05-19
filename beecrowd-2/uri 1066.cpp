#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int c=0,u=0,e=0,t=0;

    for(int i=0; i<5; i++)

    {
        cin >> n;

        if(n%2==0)
            c++;
        else
            u++;
        if(n>0)
            e++;
        else if(n<0)
            t++;
    }

    cout << c << " valor(es) par(es)" << endl;

    cout << u << " valor(es) impar(es)" << endl;

    cout << e << " valor(es) positivo(s)" << endl;

    cout << t << " valor(es) negativo(s)" << endl;

    return 0;
}
