#include <iostreame>
using namespace std;
int main(void)
{
 int no;
 long fac;
 
 cout << "Enter a Number : ";
 cin >> no;
 
 

 fac = 1;

  for (int r=no; r >= 1; r--)
  {
    fac = fac * no;
  }

 cout << "Factorial of " << no <<" is " fac <<endl;
 
}
