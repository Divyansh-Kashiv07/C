#include <stdio.h>
int main(){
    int choice;
    float amt;
    float balance= 10000.00;
    int pin=1234,entered_pin,new_pin;

    printf("\t  WELCOME TO ATM \t");
    printf("Enter your pin Buddy!\n");
    scanf("%d",&entered_pin);

    if (entered_pin!=pin){
        printf("PIN IS INVALID BUDDY\n");
        return 0;
    }
    while(1){
        printf("\n----ATM MENU----\n");
        printf("Press 1 For BAlance check\n");
        printf("Press 2 For Cash Withdrawl\n");
        printf("Press 3 For Change pin\n"); 
        printf("Press 4 For EXIT\n");
        printf("---------------\n");
        printf("ENter your choice\n");
        scanf("%d",&choice);
        
        switch (choice){
            case 1:
                 printf("\n Tour CUrrent Balance is : %.2f\n",balance);
                 break ;

            case 2:
                 printf("\n ENTER THE AMOUNT U NEED:  \n");
                 scanf("%f",&amt);

                 if (amt<=0) {
                    printf("INVALID AMOUNT");
                }
                else if (amt>balance){
                printf  ("INSUFFICENT BALANCE");
                }
                else{
                    balance-=amt;
                    printf("PLEASE  COLLECT YOUR CASSH\n");
                    printf("remaining Balance: %.2f\n",balance);
                }
                break;
            case 3:
            printf("ENTER YOUR FOUR DIGIT PIN: ");
                 scanf("%d",&new_pin);

                 if(new_pin==pin){
                    printf("NEW PIN CANNOT BE CHANGED");
                 }
                 else{
                    pin=new_pin;
                    printf("PIN SUCCESFULLY CHANGED");
                 }
                 break;
            case 4:
            printf("\nTHANK YOU FOR USING THE ATM\n");
            return 0;
        
        default:
        printf("INVALID CHOICE .PLEASE TRY AGAIN\n");
        }
        
    }
    return 0;
    
}
