#include<bits/stdc++.h>
using namespace std;
int main()

{
    double n1, n2, n3, n4, e;
    cin >> n1 >> n2 >> n3 >> n4;
    cin >> e;
    cout << fixed;
    cout << setprecision(1);

    double avg1 =((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
    cout << "Media: " << avg1 << endl;

    if(avg1 >= 7.0)
    {
        cout << "Aluno aprovado." << endl;
    }
    else if(avg1 < 5.0)
    {
        cout << "Aluno reprovado." << endl;
    }
    else
    {
        cout << "Aluno em exame." << endl;
        cout << "Nota do exame: " << e << endl;

        double avg2 = (avg1+e)/2;

        if(avg2 >= 5.0)
        {
            cout << "Aluno aprovado." << endl;
        }
        else

            cout << "Aluno reprovado." << endl;
            cout << "Media final: " << avg2 << endl;
    }
    return 0;
}
