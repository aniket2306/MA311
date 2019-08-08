#include<bits/stdc++.h>

using namespace std;

int main()
{
	float a;
	double a1;
	ofstream outfile;
   	outfile.open("q3.dat");
	for(double i=0.0;i<=1;i+=(1.0/500.0))
	{
		a = pow(2.71828,-i)*(sin(2*3.14*i)+2);
		a1 = pow(2.71828,-i)*(sin(2*3.14*i)+2);
		outfile<<i <<"  "<<fabs(a-a1)/a1<<endl;
 
	}
	outfile.close();
	return 0;
}
