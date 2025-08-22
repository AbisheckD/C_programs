#include<stdio.h>
#include<string.h>

int main()
{
    int i, k;
    char str[50];
    printf("Enter the sentence:\n");
    scanf("%[^\n]s",str);
    
    for(i = 0; str[i]; i++)
    {
        if((str[i] == ' ') && (str[i+1] == ' '))
        {
            for(k = i; str[k]; k++)
            {
                str[k] = str[k+1];
            }
            i--;
        }
    }
    printf("%s\n",str);
    return 0;
}

/*
OUTPUT
Enter the sentence:
I    am    Abisheck   Coding   C   program
I am Abisheck Coding C program
*/
