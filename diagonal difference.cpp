#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int arr[50][50];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           cin>>arr[i][j];
        }
        
    }
    int sump,sums=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)//*
            {
                sump+=arr[i][j];
            }
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<n;j++)
        {
            if((i+j)==(n-1))//*
            {
                sums+=arr[i][j];
            }
        }
    }
    int absdiff=sump-sums;
    cout<<abs(absdiff);
    return 0;


}
