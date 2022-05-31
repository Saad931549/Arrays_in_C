#include<stdio.h>
//program to read and display values in an array 
    int main()
    {
    int arr[10];
    printf("Input values in an array from index value 1 to 10\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value for index %d\n",i+1);
        scanf("%d",&arr[i]);
    }

    for (int  i = 0; i < 10; i++)
    {
        printf("The value at index place %d is %d\n",i+1,arr[i]);
    }
    
    
        return 0;
    }