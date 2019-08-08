#include<bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <cassert>
#include<math.h>

using namespace std;

double diff(double n)
{
	double h = (sin(1.2+n)-sin(1.2))/n;
	return h;
}
int main()
{
	ofstream  fo;
  	fo.open("q2.dat");
	for(double i = pow(10.0,-20);i<1;i*=10.0)
	{	
		double absol = fabs(cos(1.2)-diff(i));
		double dis = fabs((i/2.0)*sin(1.2));
		fo<< log(i) <<"  "<<log(absol)<<"  " << log(dis)<< endl;
	}

	
	return 0;
}
