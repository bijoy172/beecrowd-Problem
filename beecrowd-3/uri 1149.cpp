#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n;
    int sum=0;
    scanf("%d %d",&a,&n);

    while(n<=0)
    {
        scanf("%d",&n);
    }
    for(int i=0; i<n; i++)
    {
        sum = sum+i+a;
    }

    printf("%d\n",sum);

    return 0;
}
