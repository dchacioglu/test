#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT mesaj*/
    int t;
    scanf("%d", &t);
    int i = 0;
    //
    while(i<t)
    {
            char x[100];
            scanf(" %[^\n]s", x);
            //getchar();
            int j = 0;
            int len = strlen(x);
            while(j < len)
            {
                printf("%c", x[j]);
            j += 2;
            }
            
            printf(" ");
            
            j = 1;
            while(j < len)
            {
                printf("%c", x[j]);
            j += 2;
            }
            
    printf("\n");
    i++;
    }
    return 0;
}