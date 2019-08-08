#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <cassert>
#include<math.h>
 
 
//This part of code generates  a dat file on ASCII format of the function
 
using namespace std;
double f(double &x)
{
 
 double fun=( sin(x));
return fun;
}
 
 
int main()
 
{
int grid_n=101;
double x[grid_n];
double h=7.0/(grid_n-1);
for (unsigned int i=0;i<grid_n;i++)
  {
     x[i]=0.0+i*h;
      
  }
 std::ofstream  fo;
   fo.open("values.dat");
 
for (unsigned int j=0;j<grid_n;j++)
  {
   for (unsigned int i=0;i<grid_n;i++)
    {
 
  fo<<x[i]<<" "<<f(x[i])<<std::endl;
    }
  fo<<" "<<" "<<" "<<std::endl;
  }
 
 
 
 
return 0;
}

