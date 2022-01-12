#include <iostream>
using namespace std;

int main()
{
 int n;
 cout<<"Enter the range of pattern";
 cin>>n;
 for(int i=0;i<n;i++)
 {
 	for(int j=n-1-i;j>0;j--)
 	{
     cout<<" ";
	 }
	 for(int k=1;k<i;k++)
	 {
	 	cout<<"*";
	 }
	 
	 for(int l=0;l<i;l++)
	 {
	 	cout<<"*";
	 }
	 cout<<endl;
}	
    return 0;
}
