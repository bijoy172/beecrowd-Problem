#include<bits/stdc++.h>
using namespace std;
int main()
{
    double arr[3],avg;
    int j=0;
    while(1)
    {
        double n;

        scanf("%lf",&n);

        if(n>=0 && n<=10.0){
            arr[j] = n;
            j++;
        }
        else
            printf("nota invalida\n");
            if(j>1)
                break;

    }
    avg = (arr[0]+arr[1])/2.0;
    printf("media = %0.2lf\n",avg);

    return 0;
}
