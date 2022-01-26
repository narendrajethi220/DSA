#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    int max=-1;
    char s;
    int A[256]={0};
    cout<<"Enter the name of your string"<<endl;
    getline(cin,name);
    for(int i=0;i<name.length();i++)
    {
        A[name[i]]++;
    }
    for(int j=0;j<name.length();j++)
    {
        if(max<A[name[j]])
        {
            max=A[name[j]];
            s=name[j];
        }

    }

    cout<<"Maximum Occuring character is "<<s;

    return 0;
}
