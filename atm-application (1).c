/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float balance amount;
    int choice;
    float withdrawal_amount, deposit_amount;
    printf("enter the current account balance:");
    if
    scanf("%f", %balance)!=1)
    {
        printf("enter the invalid balance.\n");
        return 1;
        {
    printf("\nATM Menu");
    printf("1. balance enquiry\n");
    printf("2. cash withdrawal\n");
    printf("3. cash deposit\n");
    printf("enter you choice(1-3):");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:balance enquiry
        printf("current balance:%.2f\n",balance);
        break;
        case 2:cash withdrawal
        printf("enter withdrawal_amount: ");
        scanf("%f", &withdrawal_amount);
        if (withdrawal_amount<= balance)
        {
            balance -= withdrawal amount;
            printf("Transaction successful.Remaining balance:%.2f\n", balance);
        }
        else
        {
            printf("Insufficient balance\n");
        }
        break;
        case 3:Cash deposit
        printf("enter deposit amount:");
        scanf("%f", &deposit_amount);
        balance += deposit_amount;
        printf("deposit successful. Updated balance: %2f\n", balance);
        break;
        default:
        printf("invalid option\n");
        break;
    }
        return 0;
}
    
    
    









    return 0;
}