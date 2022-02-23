#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int n,guess,nguesses=1;
    srand(time(0));
    n = rand() % 100 + 1; // Generates a random number between 1 and 100
    //printf("The number is %d\n",n);
    // Keep running the loop until the number is guessed
    do
    {
        printf("Guess the number between 1 and 100\n");
        scanf("%d",&guess);
        if(guess>n)
        {
            printf("Lower number please\n");
        }
        else if(guess<n)
        {
            printf("Higher number please\n");
        }
        else
        {
            printf("You guessed in %d attempts\n",nguesses);
        }
        nguesses++;
    } while (guess!=n);
}