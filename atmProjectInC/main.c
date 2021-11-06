#include <stdio.h>

int main()
{
    int pin,choice,amount=200500,withdraw,k;
    char transaction;
     while(pin != 1122)
     {

        printf("ENTER YOUR PIN:");
        scanf("%d",&pin);
        if(pin != 1122)
        printf("PLEASE ENTER VALID PIN\n");
     }
     do
     {

        printf("                                          **WELCOME TO OUR ATM SERVICE**\n\n\n");
        printf("                                                 1.CHECK BALANCE\n\n");
        printf("                                                 2.WITHDRAW CASH\n\n");
        printf("                                                 3.QUIT\n");
        printf("ENTER YOUR CHOICE:");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            printf("                                        YOUR BALANCE IS:%dTAKA\n\n\n",amount);
            break;
        case 2:
            printf("                                         ENTER AMOUNT TO WITHDRAW:");
            scanf("%d",&withdraw);

			if (withdraw < 500)
                {
                   printf("                                 PLEASE ENTER MORE THEN 500 TAKA\n\n");
				}
                else if (withdraw > amount)
                {
                printf("                                             INSUFFICENT BALANCE\n\n");
                }
                else
                {
                    amount = amount - withdraw;
                printf("                                             PLEASE COLLECT CASH\n\n");
                printf("                                       YOUR CURRENT BALANCE IS:%dTAKA\n", amount);
            break;
          case 3:
            printf("                                             THANK YOU FOR USING OUR ATM\n\n");
            break;
          default:
            printf("                                                INVALID CHOICE\n\n");
            }
            printf("DO YOU WANT ANOTHER TRANSACTION?(y/n):\n");
            scanf("%c",&transaction);
        }
        if(transaction == 'y')
        {
            k=1;
        }
        else
        break;
        printf("DO YOU WANT ANOTHER TRANSACTION?(y/n):\n");
        scanf("%c",&transaction);
     }
     while(k!=0);
     printf("                                                     ***THANKS FOR USING OUT ATM SERVICE***");

}
