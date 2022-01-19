#include <iostream>
using namespace std;

int main()
{
    int a=0,b=1,c,n;
    int sum=a+b;
    cout<<"Enter the Range";
    cin>>n;
    for(int i=1;i<=n-2;i++)
    {
         
		 c=a+b;
         a=b;
         b=c;
         sum+=c;
    }
    cout<<sum;
    return 0;
}
