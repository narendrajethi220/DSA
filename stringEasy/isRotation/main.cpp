#include<iostream>
#include<string>
using namespace std;
bool isAnagram(string str1,string str2)
{
    int A[256]={0};
    int B[256]={0};
    for(int i=0;i<str1.length();i++)
    {
        A[str1[i]]++;
    }
    for(int j=0;j<str2.length();j++)
    {
        B[str2[j]]++;
    }
    for(int k=0;k<str1.length();k++)
    {
        if(B[str2[k]]!=A[str2[k]])
        {

            return false;
        }
    }
    return true;
}
bool isRotation(string str1,string str2)
{
    int i,j;
    char temp;
    for(i=0;i<str1.length();i++)
    {
        temp=str1[0];
        for(j=0;j<str1.length()-1;j++)
        {
            str1[j]=str1[j+1];
        }
        str1[j]=temp;
        if(str1==str2)
        {
            return true;
        }
    }
    return false;
}
int main()
{
   string str1;
   string str2;
   cout<<"Enter first String";
   getline(cin,str1);
   cout<<"Enter second String";
   getline(cin,str2);
   if(isAnagram(str1,str2)==true)
   {

       if(isRotation(str1,str2)==true)
       {
           cout<<"It's a Rotation";
       }
       else{
        cout<<"Not a rotation";
       }
   }

   return 0;
}
