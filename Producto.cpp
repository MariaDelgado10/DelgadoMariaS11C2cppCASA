
#include<iostream>

int producto( int[],  int[],int tamano);
int productopunto(int[],int[]);

int main()
    {
         int arreglo1[5]={ 1,2,3,4,5 } ;
         int arreglo2[5]={10,20,30,40,50 };
    std::cout<<"el producto de los arreglos es "<< producto(arreglo1,arreglo2,5);
    //std::cout<<"el producto punto de los dos arreglos es "<< productopunto(9);
    
    }
    
int producto( int arreglo1[],  int arreglo2[], int tamano)
   
    {
        
    int producto[5]={0};
    
    for (int i =1; i<=tamano; i++)
    {
        for (int j=1; j<=tamano; j++)
        
        {
           producto[5]+=arreglo1[i]*arreglo2[j];

        }
        
    }
    
    return producto[5];
//sd::cout<<"El factorial de "<< n <<"es"<<fac<<std::endl;
    }
    
