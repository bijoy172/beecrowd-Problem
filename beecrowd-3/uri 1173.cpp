#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N[10],x;
    cin >> x;

    for(int i=0; i<10; i++){

        cout << "N[" << i << "] = " << x << endl;

        x+=x;
    }
    return 0;

}
