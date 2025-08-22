#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    printf("Enter the sentence:\n");
    scanf("%[^\n]s",str);
    
    for(int i = 0; str[i]; i++)
    {
        if(str[i] == ' ')
        {
            for(int k = i; str[k]; k++)
            {
                str[k] = str[k+1];
            }
        }
    }
    printf("%s\n",str);
    return 0;
}

/* 
OUTPUT
Enter the sentence:
i am AbiSHeck
iamAbiSHeck
*/
