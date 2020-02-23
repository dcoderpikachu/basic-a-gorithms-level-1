#include <iostream>

using namespace std;

int main()
{
   long long int j,i,m,n=0;
    cin>>i;
    while( i> 0)
    {
        m= i%10;
        if(m == 4)
        {
            n++;
        }
        i = i/10;
    }
    cout<<n;
    return 0;
}
