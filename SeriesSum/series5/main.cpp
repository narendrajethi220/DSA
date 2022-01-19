#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"Enter the range";
    cin>>n;
    int a=1,b=2;
    int sum=a+b;
    for(int i=3;i<=n;i++)
    {
        if(i%2==0)
        {

            b=b*3;
            sum+=b;
        }
        else
        {
            a=a*3;
            sum+=a;
        }

    }
    cout<<sum;
}
