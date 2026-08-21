#include<stdio.h>
#include<string.h>
struct Payment {
   int transactionID;
   char name[30];
   float amount;
   
   int type;
union{
   char upiID[30];
   char cardNumber[20];
   float cashAmount;
}payment;
};
int main(){
   struct Payment p;
   
   printf("**********Smart payment wallet********\n\n");
   
   printf("Enter the transaction ID:");
   scanf("%d",&p.transactionID);
   
   printf("Enter the Customer name:");
   scanf("%s",&p.name);
   
   printf("Enter the amount:");
   scanf("%f",&p.amount);
   
   printf("\n====Select the Payment method====\n");
   printf("1. UPI\n");
   printf("2. Card\n");
   printf("3. Cash\n");
   
   printf("Enter the choice:");
   scanf("%d",&p.type);
   
   switch(p.type){
      case 1:
         printf("Enter the UPI ID:");
         scanf("%s",&p.payment.upiID);
         break;
      case 2:
         printf("Enter the Card number:");
         scanf("%d",&p.payment.cardNumber);
         break;
      case 3:
         p.payment.cashAmount =p.amount;
         break;
      default:
         printf("\nUr payment method is invalid!!!!\n***Please check the menu properly***\n");  
         break; 
   }
   printf("\n=====Payment Receipt=====\n");
   printf("Transaction ID: %d\n",p.transactionID);
   printf("Customer Name:%s\n",p.name);
   printf("Amount:%.2f\n",p.amount);
   
   switch(p.type){
     case 1:
        printf("Payment Type:UPI\n");
        printf("UPI ID:%s\n",p.payment.upiID);
        break;
     case 2:
        printf("Payment Type:CARD\n");  
        printf("cardNumber:%s\n",p.payment.cardNumber); 
        break ;
     case 3:
        printf("Payment Type:CASH\n"); 
        printf("Cash Amount:%2.f\n",p.payment.cashAmount); 
        break ;
   }
}