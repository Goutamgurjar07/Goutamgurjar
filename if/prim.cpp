#include<iostream>
using namespace std;
void check_prime(int);

void check_prime(int n)

{
      int i, fact=0;
     for(i=1; i<=n; i++)
     {
          if(n%i==0)
          {
               fact++;
          }
     }
     if (fact==2)
     {
          cout<<" is a prime number",n;
     }
     else
     {
          cout<<" is not a prime number",n;
     }
}
int main()
{
     check_prime(8);
     return 0;
}
