/* problem - 2 in Hackerrank named "PLAYING WITH CHARACTERS" */

#include<stdio.h>

int main()
{
    char ch, s[100], sen[100];
    
    scanf(" %c",&ch);   // Space before %c skips whitespace
    scanf("%s",s);
    scanf(" %[^\n]%*c",sen);   // Space before %[...] skips newline

    /*  "getchar() can be used inbetween"
    scanf("%c", &ch);
    getchar();  // consume newline
    scanf("%s", s);
    getchar();  // consume newline
    scanf("%[^\n]", sen);
    */
    
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen);
    
    return 0;
}

/* INPUT */
/* C
Language
Welcome To C!!  */

/* EXPECTED OUTPUT */
/* C
Language
Welcome To C!!  */

/* MY OUTPUT */
/* C
Language
Welcome To C!!  */
