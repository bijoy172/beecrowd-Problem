#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    cin >> n;

    int a, cunt=0, cunt1=0;

    for(int i=0; i<n; i++)
    {
        cin >> a;
        if(a>=10 && a<=20)
            cunt++;
        else
            cunt1++;
    }

    cout << cunt << " in" << endl;

    cout << cunt1 << " out" << endl;

    return 0;
}

