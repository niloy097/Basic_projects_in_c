#include<stdio.h>
int main()
{
    int l_psw = 7098;
    int psw;
    int attempt = 1;
    printf("Enter the psw: ");
    scanf("%d", &psw);
    while(1)
    {
        if(psw == l_psw)
        {
            printf("Your password is correct.\n");
            break;
        }
        else
        {
            if(attempt<3)
            {
                printf("Wrong psw\nAttempt-%d\nEnter again\n", attempt);
                printf("Enter the psw: ");
                scanf("%d", &psw);
            }
            else
            {
                printf("Maximum Attempt reached!\nSystem blocked\n");
                break;
            }
             
        }
        attempt++;
    }
}
