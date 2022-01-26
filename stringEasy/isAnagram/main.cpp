#include<iostream>
#include<string>
using namespace std;
bool isAnagram(string str1,string str2)
{
    if(str1.length()!=str2.length())
    {
        return false;
    }
    int s1[256]={0};
    int s2[256]={0};
    for(int i=0;i<str1.length();i++)
    {
        s1[str1[i]]++;

    }

    for(int j=0;j<str2.length();j++)
    {
        s2[str2[j]]++;
    }
    for(int k=0;k<str2.length();k++)
    {

        if(s2[str2[k]]!=s1[str2[k]])  //aaaa 4-97  aaab
        {
            return false;

        }

    }

    return true;

}
int main()
{
    string str1;
    string str2;
    cout<<"Enter first String ";
    getline(cin,str1);
    cout<<"Enter second String ";
    getline(cin,str2);
    if(isAnagram(str1,str2)==true)
    {
        cout<<"Strings are Anagram";
    }
    else
    {
        cout<<"Not an Anagram";
    }
    return 0;
}
