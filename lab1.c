#include<stdio.h>

int main(){

    int a [] = {10, 20, 30 , 40};
    int *ptr1 = a;
    int **ptr2 = &ptr1;

    ptr2 = a;
   



    for (int i = 0; i <= 3; i++)
    {
        printf("a[%d] = %d \n", i, *(ptr2 + i));
    }

    printf("\n");


    for (int i = 3; i >= 0; i--)
    {
        printf(" %d ,", *(ptr2 + i));
    }
    

}