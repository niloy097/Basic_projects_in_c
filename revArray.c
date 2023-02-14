#include<stdio.h>

void revArr(int arr[], int x)
{
    for(int i = 0; i<(x/2); i++)
    {
        int temp = arr[i];
        arr[i] = arr[x - 1 - i];
        arr[x - 1 - i] = temp;
    }
}


int main()

{

    //Writting a function for reversing a arr--->
    int size;
    int i;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the array value according to the size: ");
    for(i = 0; i<size; i++)
    {
       scanf("%d", &arr[i]);
    }
    revArr(arr, size);
    
    printf("The rev array is: ");
    printf("arr[] = {");
    for( i = 0; i<size; i++)
    {
        printf("%d", arr[i]);
        if(i<size-1)
        {
        printf(", "); 
        }
    }
    printf("}");

    return 0;
}
