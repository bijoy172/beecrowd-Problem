#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;

    cin >> N;

    int h = N/3600;

        N = N%3600;

    int m = N/60;

    int s = N%60;

    cout << h << ":" << m << ":" << s << endl;

    return 0;
}
