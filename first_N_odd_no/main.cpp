#include <iostream>
using namespace std;
void oddDisplay(int n)
{
    if(n<=0)
    {
        return;
    }
    oddDisplay(n-2);
    cout<<n<<" ";


}

int main()
{
    int n;
    cout << "Enter the range of odd no." << endl;
    cin>>n;
    if(n%2==0)
    {
        oddDisplay(n-1);
    }
    else
    {
        oddDisplay(n);
    }

    return 0;
}
