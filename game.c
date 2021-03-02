#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,nguesses=1;
    srand(time(0));
    number= rand()%100 + 1; //Generate a random number between 1 to 100.
    /*keep running the loop until the number is guessed,*/
    do{
            printf("Guess the number between 1 to 100\n");
    scanf("%d",&guess);
    if(guess>number){
            printf("Lower Number Please!\n ");}
    else if(guess<number){
            printf("Higher Number Please!\n");}
    else{
            printf("Congratulations You Guessed it in %d attempts\n",nguesses);}
    nguesses++;
    }while(guess!=number);
    getch();
    return 0;

}
