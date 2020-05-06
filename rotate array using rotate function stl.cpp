#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int T;
    cin>>T;
    int N,D,arr[100];
    for( ;T>0;T--)
    {
        cin>>N>>D;
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        rotate(arr,arr+D,arr+N);
        for(int i=0;i<N;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

	return 0;
}