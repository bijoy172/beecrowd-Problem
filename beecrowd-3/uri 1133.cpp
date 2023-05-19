#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,temp;

    cin >> x >> y;//10,18;

    if(x>y){
        temp = x;
        x = y;
        y = temp;
    }
    x++;//11;

    for(int i=x; i<y; i++)

        if(i%5==2 || i%5==3)

           cout << i << endl;

   return 0;
}
