/* for loop */
#include <stdio.h>
int main() {
    printf("For Loop Example:\n");
    for(int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    return 0;
}

/* OUTPUT
For Loop Example:
1 2 3 4 5
*/

/* while loop */
#include <stdio.h>
int main() {
    printf("While Loop Example:\n");
    int i = 1;
    while(i <= 5) {
        printf("%d ", i);
        i++;
    }
    return 0;
}

/* OUTPUT
While Loop Example:
1 2 3 4 5
*/

/* do while loop */
#include <stdio.h>
int main() {
    printf("Do-While Loop Example:\n");
    int i = 1;
    do {
        printf("%d ", i);
        i++;
    } while(i <= 5);

    return 0;
}

/* OUTPUT
Do-While Loop Example:
1 2 3 4 5
*/
