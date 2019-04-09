
#include<iostream>


int primos(int,int);

int main()
{
std::cout<<primos(10,50);
}


int primos(int a, int b)
{
int cont=0;
int primo;
while (a<b)
{
a++;
primo=1;
cont=2;
while (cont<=a/2)
{
if(a%cont==0)
primo=0;
cont++;
    }
if(primo!=0)
printf(" %d ",a);
}
}


