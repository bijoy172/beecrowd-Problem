#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,sum=0;

    double avg, j=0;
    while(1)
    {
        cin >> n;
        if(n<0)
            break;
        sum+=n;

        j++;

    }
    cout << fixed;
    cout << setprecision(2);

    avg = sum/j;

    cout << avg << endl;

    return 0;
}
