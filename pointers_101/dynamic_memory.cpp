// rememb-o-matic
#include <iostream>
#include <new>
using namespace std;

int main ()
{
  int * foo;
  foo = new int [5];

  cout << (foo+1) << endl;
  cout << foo << endl;

  
}
