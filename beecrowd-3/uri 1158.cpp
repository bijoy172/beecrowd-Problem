#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,sum=0;
    cin >> n;

    for(int i=0; i<n; i++){
        int x,y;
        cin >> x >> y;

         if(x%2==0)
            x++;

        for(int j=0; j<y; j++)
        {
          sum+=x;
          x+=2;
        }
        cout << sum << endl;
        sum=0;
    }
    return 0;
}
