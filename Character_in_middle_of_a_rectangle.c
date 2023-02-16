// I want to make a pattern like this--->
/*

* * * * * * * * * 
*               *
*               *
*               *
*               *
*       N       *
*               *
*               *
*               *
*               *
* * * * * * * * *

*/

//This is (m * n) matrix--->

#include<stdio.h>

int main()

{

    int row, col, length, width;
    printf("************Plz Enter Odd number length and width plz****************\n");
    printf("Enter the length and wide for the rectangle: ");
    scanf("%d %d", &length, &width);

    while(1)
    {
       if(length%2 != 0 && width%2 != 0)
       {
         break;
       }
       else
       {
        printf("Odd number length and width plz: ");
        scanf("%d %d", &length, &width);
       }
            
        
    }

    
    
    for(row = 1; row<=width; row++)
    {
        for(col = 1; col<=length; col++)
        {
           if(row == width/2+1 && col == length/2+1)
           {
            printf("N ");
           }

            else if(row == 1 || row == width || col == 1 || col == length)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
