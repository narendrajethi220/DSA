#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the string you want to reverse";
    getline(cin,str);
    char temp;
    for(int i=0,j=str.length()-1;i<j;i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    cout<<str;
    return 0;
}
