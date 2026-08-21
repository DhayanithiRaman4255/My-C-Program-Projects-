#include <stdio.h>
int main() {
int ch, qty;
char order='y';
float bill=0;
printf("********** SRI SEETHA'S RESTAURANT**********\n");
printf("MENU CARD\n");
printf("1)chicke fried rice\n2)mutton biryani\n");
printf("3)chicken biryani\n4)chicken full grill\n");
printf("5)egg rice\n");

do{
    printf("Enter your order:");
    scanf("%d",&ch);
    switch(ch) {
        case 1:
            printf("Enter the quantity:");
            scanf("%d",&qty);
            bill+=(qty*120);
            break;
        case 2:
            printf("Enter the quantity:");
            scanf("%d",&qty);
            bill+=(qty*290);
            break;
        case 3:
            printf("Enter the quantity:");
            scanf("%d",&qty);
            bill+=(qty*150);
            break;
        case 4:
            printf("Enter the quantity:");
            scanf("%d",&qty);
            bill+=(qty*200);
            break;
        case 5:    
            printf("Enter the quantity:");
            scanf("%d",&qty);
            bill+=(qty*100);
            break;
        default:
            printf("Your order is invalid");
            break;
}

    printf("\nDo you want to order again Y/N:");
    scanf("%s",&order);
}while(order=='y' || order=='Y');

printf("\nYour total bill=%f",bill);

printf("\n*******THANK YOU**********");

return 0;
}