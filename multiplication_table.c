#include <stdio.h>

int main()
{
    int i, j;
    
    printf("* 구구단 *\n");
    for(i = 2; i <= 9; i++) {
        printf("- %d 단 -\n", i);
        for(j = 1; j <= 9; j++) {
            printf("%d * %d = %d\n", i, j, i*j);
        }
        printf("\n");
    }
}