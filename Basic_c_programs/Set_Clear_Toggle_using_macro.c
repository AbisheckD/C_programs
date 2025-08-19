#include<stdio.h>

#define CLEAR(NUM, POS) (NUM & ~(1 << POS)) 
#define SET(NUM, POS) (NUM | (1 << POS))
#define TOGGLE(NUM, POS) (NUM ^ (1 << POS))

int main(){
    int num, pos;
    printf("Enter the number and position:\n");
    scanf("%d%d",&num,&pos);
    
    printf("Before set :-> number : %d\n",num);
    printf("After set :-> number : %d\n",SET(num,pos));
    
    printf("Before clear :-> number : %d\n",num);
    printf("After clear :-> number : %d\n",CLEAR(num,pos));
    
    printf("Before toggle :-> number : %d\n",num);
    printf("After toggle :-> number : %d\n",TOGGLE(num,pos));
    
    return 0;
}

/* OUTPUT */
/*
Enter the number and position:
10
2
Before set :-> number : 10
After set :-> number : 14
Before clear :-> number : 10
After clear :-> number : 10
Before toggle :-> number : 10
After toggle :-> number : 14
  */
