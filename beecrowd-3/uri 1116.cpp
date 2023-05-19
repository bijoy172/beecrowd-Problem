#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,ans;
    cin >> n;
    float x,y;
    cout << fixed;
    cout << setprecision(1);
    for(int i=0; i<n; i++)
    {
        cin >> x >> y;


        if(y==0)
            cout << "divisao impossivel" << endl;
            else
                cout << x/y << endl;

    }
}
