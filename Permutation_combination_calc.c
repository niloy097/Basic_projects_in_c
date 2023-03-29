#include<stdio.h>
#include<math.h>
int main()
{
    //Finding ncr of a problem--->
    int n; //3
    int r;//3
    int npr, fact1=1, fact2=1, fact3 = 1, ncr;
    printf("Enter the object(n) and the sample or slots(r): ");
    scanf("%d %d", &n, &r);
    if(n<r)
    {
        printf("Plz enter: n>=r>=0\n");
    }
    else
    {
    
        for(int i = 1; i<=n; i++)
        {
            fact1 = fact1 * i; //3! = 3 * 2 * 1 = 6
        }
        
        for(int i = 1; i<=r; i++)
        {
            fact2 = fact2 * i;
        }
        
       for(int i = 1; i<=n-r; i++)
        {
            fact3 = fact3 * i;
        }
    }
    
    npr = (fact1)/(fact3);
    ncr = npr/fact2;
    
    printf("The permutation is(npr): %d\n", npr);
    printf("The combination is(ncr): %d\n", ncr);
}
