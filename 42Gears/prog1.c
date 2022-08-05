#include<stdio.h>

// int print2largest(int arr1[]);

int print2largest(int arr1[],int n)
{
    //int n=sizeof(arr1);
    int max=arr1[0];
    for(int i = 1; i< n; i++)
    {
        if (arr1[i]>max){
            max=arr1[i];
        }
    }
    printf("%d",max);
}


int main()
{
    int arr1[6] = {12, 35, 1, 10, 34, 1};
    // int arr2[] = {12, 12, 12, 12, 12, 12};
    // int arr3[] = {12, 34, 1, 10, 35, 1};
    // int arr4[] = {1, 2, 3, 5, 8, 13};
    // int arr5[] = {100, 90, 80, 70};
    // int arr6[] = {42, 2, 50, 10};

print2largest(arr1,6);
}

