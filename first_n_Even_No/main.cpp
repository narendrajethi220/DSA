#include <iostream>
using namespace std;
void evenDisplay(int n)
{
    if(n<=0)
        return;
    evenDisplay(n-2);
    cout<<n<<" ";
}
int main()
{
    int n;
    cout << "Enter the range of even no. displat" << endl;
    cin>>n;
    if(n%2==0)
    {
    evenDisplay(n);
}
  else
  {
  	evenDisplay(n-1);
  }
	return 0;
}
