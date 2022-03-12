# include<stdio.h>
# include<conio.h>
# include<stdlib.h>
# include<time.h>

void main(){
  int number,guess,nguess=1;

  srand(time(0));
  number=rand()%100+1;  // Generates a random between 1 and 100.
  // printf("The number is %d. \n",number);
  
  //keep running loop until the number is guessed.
  do{
    printf("Guess the number between 1 and 100: \n");
    scanf("%d",&guess);

    if(guess>number){
      printf("Lower number Please! \n");
    }
    else if(guess<number){
      printf("Higher number Please! \n");
    }
    else{
      printf("You guessed it in %d attempts! \n",nguess);
    }
    nguess++;
  }while(guess!=number);
  
  getch();
}