#include <iostream>
using namespace std;

int main()
{

   int n;
   cin>>n;
   int count=0;
for(int i=0;i<n;i++)
   {
       double l,b,r;
       cin>>l>>b;
       if(l>b)
       {
         r=l/b;
         if(r>=1.6 && r<=1.7)
         {
             count++;
         }
       }
       else if(l<b)
       {

           r=b/l;
           if(r>=1.6 && r<=1.7)
           {

               count++;
           }
       }

   }
   cout<<count;
    return 0;
}
