
#include<iostream>


int primos(int,int);

int main()
{
std::cout<<primos(10,50);
}


int primos(int a, int b)
{
int contador=0;
int primo;
while (a<b)
{
a++;
primo=1;
contador=2;
while (contador<=a/2)
{
if(a%contador==0)
primo=0;
contador++;
    }
if(primo!=0)
printf(" %d ",a);
}
}


