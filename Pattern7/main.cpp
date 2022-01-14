
#include <iostream>

using namespace std;

int main()
{

    
    for(int i=0;i<=5;i++)
    {
        int b=5;
        for(int j=0;j<=i;j++)
        {
            
            cout<<b<<" ";
            b=b-1;
        }
       
        cout<<endl;
    }
    for(int i=1;i<=5;i++)
       {
        for(int k=5;k>=i;k--)
        {
            cout<<k<<" ";
            
        }
        cout<<endl;
}
    return 0;
}

