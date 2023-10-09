#include<stdio.h>
 int main(){
    int a = 10,b = 20,c;
    c = a+b;
    printf("%d+%d=%d\n",a,b,c);
    c = a-b;
    printf("%d-%d=%d\n",a,b,c);
    c = a*b;
    printf("%d*%d=%d\n",a,b,c);
    c = a/b;
    printf("%d/%d =%d\n",a,b,c);
    c = b%a;
    printf("%d %d =%d\n",a,b,c);
 }