#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;

    float a,b,c,total;

    cin >> n;

//scanf("%d",&n);


    for( i=0; i<n; i++)
    {
        cin >> a >> b >> c;

        total = ((a*2.0)+(b*3.0)+(c*5.0))/10.0;
        cout << fixed;

        cout << setprecision(1);

        cout << total << endl;
    }
    return 0;
}
