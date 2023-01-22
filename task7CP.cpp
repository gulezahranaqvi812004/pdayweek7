#include <iostream>
using namespace std;
void print_percentage(int range);
main()
{
   int range;
   cout << "Enter range: ";
   cin >> range;
   print_percentage( range);
}

void print_percentage(int range)
{
   float counter_1=0;
   float counter_2=0;
   float counter_3=0;
   float p1;
   float p2;
   float p3;
   int number;

   for (int count=1 ; count <= range ; count++)
   {
     cout << "Enter a number: " ;
     cin >> number;
     if(number%2==0)
     {
        counter_1++;
     }
    if(number%3==0)
     {
       counter_2++;
     }
      if(number%4==0)
     {
       counter_3++;
     }
   }
   
   p1=(counter_1/range)*100;
   p2=(counter_2/range)*100;
   p3=(counter_3/range)*100;
   
   cout << p1 << " % "<< endl << p2 <<   " % "  << endl << p3 <<  " % "  ;
   
}
