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
   for(int i=1 ; i<=rows ; i++)
    {
        for(int c=1 ; c<=i ; c++)
        {
            cout << "*" ;
        }
      cout << endl;
    }
}