#include <iostream>
using namespace std;
int triangle(int number);
main()
{
  int number;
  int result;
  cout << "Enter triangle: ";
  cin >> number;
  result=triangle( number);
  cout << result;
}
int triangle(int number)
{
   int final=0; 
  for(int i=number ; i>=1 ; i--)
  {
    final=final+i;
  }
  return final;

}