#include <iostream>
using namespace std;
void symbol1(int rows);

main ()
{
    int rows=0;
    cout << "Enter desired rows: ";
    cin >> rows;
    symbol1( rows);
}
void symbol1(int rows)
{    
  
      for(int i=1 ; i<=rows ; i++)
      {
        for(int j=1; j<=i ; j++)
        {
          cout << "*";
        }
        for ( int k=i ; k<rows ; k++)
        {
          cout << " ";
        }
        for ( int m=i ; m<rows ; m++ )
        {
          cout << " ";
        }
        for ( int n=1 ; n<=i ; n++)
        {
          cout << "*";
        }
        
        cout << endl;
      }
}
      
      
     
        
    

 

 



