  #include<stdio.h>
  int main(){

    int year;
    printf(" Enter the year:");
    scanf("%d",&year);

if ( year%400 == 0){
    printf(" %d is leap year\n",year);
}
else if(year%100 == 0){
    printf(" %d is non leap year",year);
}


  }