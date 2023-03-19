#include <stdio.h>
// ATM Machine Requirements
//Must have a pin ...1232
//Can check balance 
//Deposit : A positive amount 
// WithDraw : Only one thousand Naira notes, must have enough money.
// Perform Multiple transactions 

int main(){

    int balance = 0;
    int pin = 1231;
    int tmpPin;
    int anotherTransaction = 1; //1 do another transaction, 2 not interested

    printf("Please enter your pin");
    scanf("%d", &tmpPin);

    if(pin != tmpPin){

        printf("invalid Pin");

        return 0;
    }

    while(anotherTransaction == 1){

        int option;

    printf("What do you want to do next?: \n");
    printf("1 - Check Balance \n");
    printf("2 - Deposit \n");
    printf("3 - Withdraw \n");

    scanf("%d", &option);

    if(option == 1){

        printf("Your balance is: $%d", balance);
    }
    else if(option == 2){

        int amountDeposit;
        printf("How much do you want to deposit?: $");
        scanf("%d", &amountDeposit);

        if(amountDeposit > 0) {
            balance += amountDeposit;
        }
        else{
            printf("Invalid Amount ");
        }

    } 

    else if(option == 3){
        int amountwithDraw;
        printf("How much do you want to withdraw?: $");
        scanf("%d", &amountwithDraw);

        if(amountwithDraw <= balance && amountwithDraw % 20 == 0) {
            balance -= amountwithDraw;
        }
        else {
            if(amountwithDraw > balance){
                printf("Decline!! You don not have enough in you balance \n");
            }
            else{
                printf("You must enter an amount with 20 bill \n");
            }
        }
    }

    else{
        printf("Tnvalid Transaction");
    }

    anotherTransaction = 0;

    while(anotherTransaction != 1 && anotherTransaction != 2){
        printf("Do you want to continue to another transaction: \n");
        printf("1 - Yes, 2 - No \n");
        scanf("%d", &anotherTransaction);
    }
    

    }
    
    return 0;
}