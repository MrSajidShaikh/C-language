# include <conio.h>
# include <stdio.h>

int main()
{

    //Simple interset program
    int principal, rate, time, interest;

    printf("Enter the principal: ");
    scanf("%d", &principal);

    printf("\nEnter the rate: ");
    scanf("%d", &rate);

    printf("\nEnter the time: ");
    scanf("%d", &time);

    interest = principal * rate * time / 100;
    printf("\nThe Simple interest is %d", interest);

}