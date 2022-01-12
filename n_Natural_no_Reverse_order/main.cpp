#include <iostream>
using namespace std;
void show(int n)
{
    if(n==0)
        return;
    cout<<n<<" ";
    show(n-1);
}
int main()
{
    int n;
    cout << "Enter the range " << endl;
    cin>>n;
    show(n);
    return 0;
}
