#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1,s2;
    int p;
    cin>>p;
    for( ;p>0;p--)
    { 
        getline(cin,s1);
        getline(cin,s2);
        for(int i=0;i<s1.length();i++)
        {
           for(int j=0;j<s2.length();j++)
           {
             if(s1[i]==s2[j])
             {
                 cout<<"yes"<<endl;
             }
             else{
                 cout<<"NO";
             }
           }
        }       
    }
    return 0;
}