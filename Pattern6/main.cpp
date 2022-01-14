#include <iostream>
using namespace std;

int main()
{
    int m=1;
 int n;
 cin>>n;
    for(int i=1;i<=5;i++)
    {
        for(int j=n-1;j>=i;j--)
        {
            cout<<" ";
        }
        for(int k=m;k>=1;k--)
        {
            cout<<k<<" ";
        }
        m=m+2;
        cout<<endl;
    }

    return 0;
}
