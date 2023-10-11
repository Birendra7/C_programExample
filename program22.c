#include<stdio.h>
int main(){
    
    double num ;
    printf("Enter a number: ");
    scanf("%lf",&num);

    if ( num <= 0.0 ){
        if (num == 0.0)
        printf(" You Entered 0.");
    else
        printf("You entered a negative");

    }
    else
    printf(" You entered a possitive number ");
}