#include <iostream>
using namespace std;

int main()
{
    int N;
    cout<<"Enter the range";
    cin>>N;
    double sum=0.0;
    for(int i=1;i<=N;i++)
    {
    	sum+=((double)1/(i*i));
	}
	cout<<sum;
    return 0;
}
