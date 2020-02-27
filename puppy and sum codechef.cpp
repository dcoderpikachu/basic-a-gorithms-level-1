//https://www.codechef.com/problems/PPSUM
#include <iostream>

using namespace std;

int nsum(int N)
{
        N = N*(N+1)/2;
        return N;
}
int sum_repeat(int D,int N)
{
    while(D>0)
    {
        N = nsum(N);
        D--;
    }
    return N;
}
int main()
{
    int D,N,t,i,sum;
    cin>>t;
    for(i =0;i<t;i++)
    {
        cin>>D>>N;
        sum = sum_repeat(D,N);
        cout<<sum<<endl;
    }
    return 0;
}
