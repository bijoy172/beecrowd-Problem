#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,sum=0;
    while(1)
    {
       cin >> x;

       if(x==0)
        break;

       if(x%2!=0)
            x++;

        for(int j=0; j<5; j++)
        {
          sum+=x;
          x+=2;
        }
        cout << sum << endl;
        sum=0;
    }
    return 0;
}


