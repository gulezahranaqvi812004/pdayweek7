#include <iostream>
using namespace std;
void symbol(int rows);
main ()
{
    int rows;
    cout << "Enter desired rows: ";
    cin >> rows;
    symbol(rows);
 
}
void symbol(int rows)
{
   for(int i=rows ; i>=1 ; i--)
    {
        for(int c=i ; c>=1 ; c--)
        {
            cout << "*" ;
        }
      cout << endl;
    }

}