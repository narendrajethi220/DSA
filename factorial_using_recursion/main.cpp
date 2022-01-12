#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact;
    if(n==1)
    {
       return 1;
    }
    fact=n*factorial(n-1);
    return fact;
}
int main()
{
    int num;
    cout << "Enter the no. of which you want the recursion" << endl;
    cin>>num;
    cout<<factorial(num);
    return 0;
}
