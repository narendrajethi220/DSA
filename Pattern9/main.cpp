
#include <iostream>
using namespace std;

int main()
{
   int i,j;
   char c='E';
   for(int i=5;i>=1;i--)
   {
    for(int j=5;j>=i;j--)
    {
        cout<<" ";
    }
    for(int k=1;k<=2*i-1;k++)
    {

        if(k==1||k==2*i-1)
        {
        cout<<c;
        }

        else
        {
            cout<<" ";
        }


    }
c=c-1;
    cout<<endl;
   }

    return 0;
}
