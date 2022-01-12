#include <iostream>
using namespace std;

void show(int n)
{
    if(n==0)

       return;

    show(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    cout << "Enter the range of Natural number" << endl;
    cin>>n;
    show(n);
    return 0;
}
