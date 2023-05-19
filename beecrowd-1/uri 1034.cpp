#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a=0,g=0,d=0;
    cout << "MUITO OBRIGADO" << endl;

    while(1)
    {
        cin >> n;
        if(n>0 && n<4)
        {
            if(n==1)
                a++;
            else if(n==2)
                g++;
            else
                d++;
        }
        else if(n==4)
            break;
    }
    cout << "Alcool: " << a << endl;
    cout << "Gasolina: " << g << endl;
    cout << "Diesel: " << d << endl;

    return 0;
}
