#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        int a;
        int sum=0;
        cin >> a;

        for(int j=1; j<a; j++)
        {
            if(a%j==0)
            sum+=j;
        }

            if(sum==a)
                cout << a << " eh perfeito" << endl;

            else
                cout << a << " nao eh perfeito" << endl;

    }
    return 0;
}
