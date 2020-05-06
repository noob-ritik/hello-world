#include <iostream>
using namespace std;
int main() {
    int arr[100];
    int n,c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i] == arr[i+1])
        {
            break;
        }
        else{
            c++;
        }
    }
    cout<<c;


    
}
