#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    cout<<"Enter the name of string"<<endl;
    getline(cin,name);
    int A[256]={0};
    string raw;
    for(int i=0;i<name.length();i++)
    {
       if(A[name[i]]==0)
       {
           cout<<name[i];
           A[name[i]]++;
       }
    }

    return 0;
}
