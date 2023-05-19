#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int cunt=0;
        int a;
        cin >> a;
        if(a<4)
            cout << a << " eh primo" << endl;

        else
        {

            for(int j=2; j<a; j++)
            {
                if(a%j==0)
                {
                    cunt++;
                    break;
                }


            }
        }
        if(cunt==1)
            cout << a << " nao eh primo" << endl;
        else
            cout << a << " eh primo" << endl;

    }


    return 0;
}
