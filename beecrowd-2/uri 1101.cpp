#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,a,b,temp,sum=0;

    for(int i=1; i<=100; i++)
    {
        scanf("%d %d",&a,&b);

        if(a<=0 || b<=0)
            break;

        if(a>b)
        {
            temp = a;
            a = b;
            b = temp;
        }

        for(int j=a; j<=b; j++)
        {
            printf("%d ",j);
            sum+=j;
        }
        printf("Sum=%d\n",sum);
        sum = 0;
    }
    return 0;

}

