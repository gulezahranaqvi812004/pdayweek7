#include <iostream>
using namespace std;
void print_percentage(int range);
main()
{
   int range;
   float result;
   cout << "Enter range: ";
   cin >> range;
  print_percentage( range);
  
}

void print_percentage(int range)
{
   float bus=0;
   float truck=0;
   float train=0;
   float weight1=0;
   float weight2=0;
   float weight3=0;
   float total_weight;
   float bus_percentage;
   float truck_percentage;
   float train_percentage;
   int weight;
   float total;
   float average;
   float percentage;
   for (int count=1 ; count <= range ; count++)
   {
    
     cout << "Enter a weight: " ;
     cin >> weight;
     if(weight<=3)
     {
       weight1=weight1+weight;
       bus=weight1*200;
     }
    if(weight>3 && weight<11)
     {
       weight2=weight2+weight;
       truck=weight2*175;
     }
      if(weight>=11)
     {
       weight3=weight3+weight;
       train = weight3*120;
     }
   }
   
  total=bus+truck+train;
  total_weight=weight1+weight2+weight3;
  
  average=total/(total_weight);

  bus_percentage=(weight1/total_weight)*100;
  truck_percentage=(weight2/total_weight)*100;
  train_percentage=(weight3/total_weight)*100;
   
   cout << average << endl << bus_percentage <<  " % " <<  endl << truck_percentage <<  " % " << endl << train_percentage  <<  " % " <<  endl;

   
}
