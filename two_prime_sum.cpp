/*CPP PROGRAM TO EXPRESS A NUMBER IN SUMMATION OF TWO PRIME NUMBERS*/

#include <iostream>
using namespace std;
char cont_run = 'y';

int prime(int p)
{
    for(int i=2; i<=p/2; i++)
    {
        if (p%i==0)
            return 1;
    }
    return 0;
}

int main()
{
    while (cont_run='y')
    {
        int n;
        cout<<"\nEnter a positive integer: ";
        cin>>n;

        for(int i=2; i<=n/2; i++)
        {
            if (prime(i)==0 && prime(n-i)==0)
            {
                cout<<n<<" = "<<i<<" + "<<n-i<<endl;
            }
        }
            cout<<"Press 'y' to continue running: ";
            cin>>cont_run;
    }
    return 0;
}
