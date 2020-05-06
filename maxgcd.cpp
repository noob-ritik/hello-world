#include <iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}
void maxgcd(int arr[],int N)
{
    int mgcd=0;
    for(int i=0;i<N;i++)
    {
       int value=gcd(arr[i],arr[i+1]);
       if(value>mgcd)
       {
          mgcd=value;
       }
    }
    cout<<mgcd<<endl;
}
int main()
{
    int arr[]={9,1,4,5,7,8,0,5};
    int N=sizeof(arr)/sizeof(int);
    maxgcd(arr,N);
    return 0;
}
