  #include<stdio.h>
  int main(){

    int x , y;
    printf("enter the frist num x = ");
    scanf("%d", &x);
     printf("Enter the second num y = ");
     scanf("%d",&y);

     x = x + y;
     y = x - y;
     x = x-y;

     printf("print the sWAPE NUM %d = x , %d = y ",x,y);
     return 0;


  } 