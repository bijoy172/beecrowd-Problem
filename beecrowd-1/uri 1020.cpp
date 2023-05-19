#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n;

    cin >> n;

    int a= n/365;

    n= n%365;

    int b= n/30;

    int c = n%30;

    cout << a << " ano(s)"<< endl << b << " mes(es)" << endl << c << " dia(s)"<< endl;
    return 0;
}


