#include <iostream>
using namespace std;
void amplify (int higher_bound);
main()
{
   
    int higher_bound;
    cout << "Enter a number: ";
    cin >> higher_bound;
    amplify (higher_bound);
}
void amplify (int higher_bound)
{
    for(int i=1 ; i<= higher_bound ; i++)
    {
        if(i%4==0)
        {
           cout<< i*10 << " , ";
        }
        else
        {
          cout  << i << " ,";
        }
    }
}