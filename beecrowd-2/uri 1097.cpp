#include<bits/stdc++.h>

using namespace std;

int main()

{
    int k=7;
    for(int i=1; i<=9; i+=2)
    {
        for(int j=0; j<3; j++)
        {
            cout << "I=" <<  i << " J=" << k << endl;
            k--;
        }
        k+=5;
    }
    return 0;
}
