/* if statement */
#include <stdio.h>
int main() {
    int age = 20;

    if(age >= 18) {
        printf("You are eligible to vote.\n");
    }

    return 0;
}

/* if-else statement */
#include <stdio.h>
int main() {
    int num = 5;

    if(num % 2 == 0) {
        printf("Even number\n");
    } else {
        printf("Odd number\n");
    }

    return 0;
}

/* if-else ladder */
#include <stdio.h>
int main() {
    int marks = 72;

    if(marks >= 90) {
        printf("Grade: A\n");
    } else if(marks >= 75) {
        printf("Grade: B\n");
    } else if(marks >= 50) {
        printf("Grade: C\n");
    } else {
        printf("Grade: Fail\n");
    }

    return 0;
}
 /* Nested if statement */
#include <stdio.h>
int main() {
    int num = 15;

    if(num > 0) {
        if(num % 2 == 0) {
            printf("Positive Even number\n");
        } else {
            printf("Positive Odd number\n");
        }
    } else {
        printf("Number is not positive\n");
    }

    return 0;
}

/* switch statement */
#include <stdio.h>
int main() {
    int day = 3;

    switch(day) {
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
        case 7: printf("Sunday\n"); break;
        default: printf("Invalid day number\n");
    }

    return 0;
}
