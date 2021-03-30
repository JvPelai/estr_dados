#include <cstdio>
#include <iostream>
using namespace std;

int main(){
  int myvar = 25;
  int *foo = &myvar;
  int bar = myvar;
  int baz = *foo;
  
  cout << myvar << endl;
  cout << foo << endl;
  cout << bar << endl;
  cout << baz << endl;

}