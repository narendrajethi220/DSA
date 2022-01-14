
#include <iostream>
using namespace std;

int main()
{
    int i,j,r;
    r=5;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=r-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++)
        {
            if(k==1||k==2*i-1)
            {
                cout<<i;
            }
            else
            {
                cout<<" ";

            }
        }
        cout<<endl;
    }
    for(int i=r-1;i>=1;i--)
    {
        for(int j=4;j>=i;j--)
        {
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++)
        {
            if(k==1||k==2*i-1)
            {
                cout<<i;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
