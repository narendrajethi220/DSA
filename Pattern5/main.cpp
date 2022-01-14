#include <iostream>
using namespace std;

int main(int argc, char** argv) {
         
       int n;
       cout<<"Enter the range of Pattern";
       cin>>n;
       for(int i=0;i<n;i++)
       {
       	
       	for(int j=n;j>i;j--)
       	{
       		cout<<" ";
		}
       	for(int k=0;k<i;k++)
       	{
       		cout<<"*";
		}
		  cout<<endl;
          
           
       }
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<i;j++)
          {
          cout<<" ";
          }
         for(int k=n;k>i;k--)
       {
          cout<<"*";
         }
      cout<<endl;
      }
      
       
	return 0;
}

