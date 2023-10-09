#include<stdio.h>
#include<conio.h>
int main(){
    int dividend,divisor,quoitent,remender;
    printf("Enter the Dividend");
    scanf("%d",&dividend);
    printf("Enter the Divisor");
    scanf("%d",&divisor);
    //compute the Quoitent
    quoitent = dividend/divisor;
    //compute the Remender
    remender = dividend % divisor;
    printf("Quoitent=%d\n",quoitent);
    printf("Remender=%d",remender);

        //printf(er);
        return 0;



}