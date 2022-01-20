#include <iostream>
#include<math.h>
using namespace std;
int fact(int b)
{
	int n;
	if (b==1)
	 return 1;
	n=b*fact(b-1);
	return n;
}
int main(int argc, char** argv) {
	int x,n;
	cout<<"Enter a term";
	cin>>x;
	cout<<"Enter the  limit";
	cin>>n;
	double sum=0.0;
	int a=1;
	sum+=a;
	int b=2;
	for(int i=2;i<=n;i++)
	{
		if(i%2==0)
		{
			sum-=((double)pow(x,b)/fact(b));
			b=b*2;
		}
		else
		{
			sum+=((double)pow(x,b)/fact(b));
			b=b*2;
		}
	}
	cout<<sum;
	return 0;
}
