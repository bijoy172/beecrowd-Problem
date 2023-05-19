#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    int Max=0,p;

    for(int i=1; i<=100; i++){

        scanf("%d",&n);

        if(n>Max){

            Max = n;
            p = i;
        }
    }
    printf("%d\n%d\n",Max,p);

    return 0;
}
