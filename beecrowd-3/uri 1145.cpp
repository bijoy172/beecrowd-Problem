#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,y;
    cin >> x >> y;

    int k = y/x;
    int l = x;
    int m = 1;


        for(int i=1; i<=k; i++){
           cout << m;

           for(int j=m+1; j<=l; j++)

            cout << " " << j;
            cout << endl;
            m+=x;
            l+=x;
        }
        return 0;


}
