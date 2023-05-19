#include<bits/stdc++.h>

using namespace std;

int main()

{
    double n, avg, sum = 0;

    int cunt = 0;

    for (int i= 0; i<6; i++)
    {

        cin >> n;

        if(n > 0)
        {
            sum = sum+n;

            cunt++;

        }
    }
    cout << fixed;

    cout << setprecision(1);

    avg = sum / cunt;

    cout << cunt << " valores positivos" << endl;

    cout << avg << endl;

    return 0;

}

