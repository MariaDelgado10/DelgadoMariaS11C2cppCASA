
#include<iostream>

double factorial(double);

int main()
	{
	std::cout<<"el factorial es "<< factorial(7);
	
	}
	
double factorial(double n)	
	//int n=77;
	{
	double fac=1;
	

//std::cout<<"numero"<<std::endl;
	//std::cin>>n;
	for (double i =1; i<=n; i++)
	{
	fac*=i;
	}
	return fac;
//sd::cout<<"El factorial de "<< n <<"es"<<fac<<std::endl;
	}
	


