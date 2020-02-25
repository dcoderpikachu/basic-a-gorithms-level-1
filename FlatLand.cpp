//https://www.codechef.com/problems/ICL1902

#include <iostream>
#include <math.h>
using namespace std;


int main()
{

    int i,n,t,m;
    cin>> t;
    for(i = 0;i<t;i++)
    {
        int temp=0;
        cin>>n;
        while(n!=0)
    {
        m = int(sqrt(n));
        n -= m*m;
        temp++;
    }
    cout<<temp<<endl;

    }

    return 0;
}
/*

while(n!=0)
{
    m = int(sqrt(n));
    n -= m*m
    temp++;
}

*/
