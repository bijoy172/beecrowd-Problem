#include<bits/stdc++.h>
using namespace std;
int main()
{
    double A,B;
    scanf("%lf %lf",&A,&B);
    A = A*3.5;
    B = B*7.5;
    double avg = (A+B)/11;
    printf("MEDIA = %0.5lf\n",avg);
    return 0;
}
