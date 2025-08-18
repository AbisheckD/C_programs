/* Problem - 11 in Hackerrank named "Students Marks Sum" in Easy Functions */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  
  int i,sum = 0;
  if(gender == 98) //ascii value of b = 98 
  {
    for(i = 0; i <= number_of_students; i+=2)
    {
        sum += marks[i];
    }
    return sum;
  }
  else 
  {
    for(i = 1; i <= number_of_students; i+=2)
    {
        sum += marks[i];
    }
    return sum;
  }
  return 0;
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}

/* OUTPUT*/
/*
STDIN INPUT
3
3
2
5
b

OUTPUT
8
*/
