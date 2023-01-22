#include <iostream>
using namespace std;
main()
{
    int days=0;
    int treated_patients=0;
    int untreated_patients=0;
    int patients=0;
    int doctor=7;
    int result1=0;
    int result2=0;
    
    cout << "Enter days: ";
    cin >> days;
    
    for(int i=1 ; i<=days; i++)
    {
      cout << "Enter patients: ";
      cin >> patients;
      

         if(( i %3 ==0) && (treated_patients<=untreated_patients))
         {
            doctor++;  
         }
         if ( patients>doctor)
         {
            treated_patients= doctor;
            untreated_patients=patients-doctor;
            result1 = treated_patients +result1;
            result2 = untreated_patients + result2;
         }
         else 
         {
            treated_patients = patients;
            untreated_patients =0;
            result1 = treated_patients +result1;
            result2 = untreated_patients + result2;
         }  
      }  
       cout << result1 << endl << result2 ;


}