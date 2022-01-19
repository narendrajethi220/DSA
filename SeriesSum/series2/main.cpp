#include <iostream>
using namespace std;

int main()
{
    int N;
    cout<<"Enter the range";
    cin>>N;
    int sum=1;
    for(int i=2;i<=N;i++)
    {
        
        for(int j=1;j<=i;j++)
        {
             sum+=j;
        }

        
    }
    cout<<sum;
    return 0;
}
