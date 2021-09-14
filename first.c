#include <stdio.h>
#include "fun.h"
#include <locale.h>

#include <stdio.h>

int* inputArray(int N)
{
    int * a = (int*)malloc(N*sizeof(int));


    for(int i = 0; i < N; i++)
    {

        a[i]=rand()%100-50;

    }
    return a;
}

void outputArray(int *a, int n)
{

    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);


    }
}
void func(void)
{
setlocale(LC_ALL,"rus");
     int N;
     printf("Введите число элементов масива: ");
    scanf("%d",&N);
    int * myArray = inputArray(N);

    outputArray(myArray,N);

    int min=myArray[0];
    for(int i=1; i<N; i++)
    {
        if(myArray[i]<min)
        {
            min=myArray[i];
        }
    }

    printf("\nМинимум: %d\n",min);
}