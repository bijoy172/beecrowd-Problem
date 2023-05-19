#include<bits/stdc++.h>

using namespace std;

int main()

{
    int a,b,temp,x=0;

    cin >> a >> b;

    if(a>b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if(a%2==0)
        a--;
    a+=2;
    for(int j=a; j<b; j+=2){
        x+=j;
    }
    cout << x << endl;
    x = 0;
    return 0;
}
