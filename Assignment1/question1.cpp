#include<bits/stdc++.h>

using namespace std;



double fact1(double n)
{ 	
	double a = sqrt(2*3.14*n);
	return(a*pow(n/2.71828,n));
}

double fact2(double n)
{
	if(n == 1)
		return 1;

	return n*fact2(n-1);
}
int main()
{
	ofstream outfile;
   	outfile.open("q1.dat");
	for(int i =1;i<11;i++)
	{
		double abso = abs(fact1(i)-fact2(i));
		double rel = abso/fact2(i);
		outfile<<i<<"   ||  "<<fact2(i)<<"  ||  "<<fact1(i)<<"  ||  "<<abso<<"  ||  "<<rel<<endl;

	}
	outfile.close();
	return 0;
}
