#include <stdio.h>
#include<string.h>
int main() {
    char nm[10],nm2[10];
    printf("\nEnter a string:");
    scanf("%s",nm);
    for(int i=strlen(nm)-1, j=0;i>=0;i--,j++)
        nm2[j]=nm[i];
    (strcmp(nm2, nm)==0)?printf("it is a palindrome"):printf("it is not a palindrome");
    return 0;
}
