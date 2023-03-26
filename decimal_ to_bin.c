#include<stdio.h>


void printbin(int arr[], int count)
{
   printf("The bin number is: ");
    for(int i = 0; i<count; i++)
    {
        printf("%d", arr[i]);
    }
}
void revarray(int arr[], int count)
{
    for( int i = 0; i<(count/2); i++)
    {
        int temp = arr[i];
        arr[i] = arr[count - 1 - i];
        arr[count - 1 - i] = temp;
    }

    printbin(arr, count);
}
void Decimal_to_Binary(int decimal)

{
    int bin;
    int i;
    int count = 0;
    int arr[1000];
    
    for(i = 0; true; i++)
    {
        bin = decimal % 2;
        arr[i] = bin;
        count++;
        decimal =  decimal/2;
        if(decimal == 0)
        {
            break;
        }
    }
    revarray(arr, count);

   

    

}
int main()
{
    int decimal;
    printf("Enter any decimal number: ");
    scanf("%d", &decimal);
    Decimal_to_Binary(decimal);
}
