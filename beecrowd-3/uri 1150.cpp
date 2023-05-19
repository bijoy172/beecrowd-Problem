#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,z;
    int cunt=1, sum=0;
    scanf("%d %d",&x,&z);

    while(z<=x)
        scanf("%d",&z);
    for(int i=x; i<=z; i++)
    {
        sum+=i;
        if(sum>z)
            break;
        cunt++;
    }
    printf("%d\n",cunt);
    return 0;
}
