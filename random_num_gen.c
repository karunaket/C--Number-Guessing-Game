# include<stdio.h>
# include<conio.h>
# include<stdlib.h>
# include<time.h>

void main(){
  
  int number;

  srand(time(0));
  number=rand()%100+1;  // Generates a random between 1 and 100.
  printf("The number is %d. \n",number);
  
  getch();
}