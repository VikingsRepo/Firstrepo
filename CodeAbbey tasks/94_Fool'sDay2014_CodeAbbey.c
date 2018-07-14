#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_SIZE        100

int atoi_mod(char *ptr);

int main(void)
{
    unsigned int N, i;
    unsigned int val, sum = 0;
    char str[MAX_SIZE];

    scanf("%d\n", &N);
    
    for (i = 0; i < N; i++)
    {
        fgets(str, MAX_SIZE, stdin);
        printf("%d ", atoi_mod(&str[0]));
    }
    
    return 0;
}

int atoi_mod(char *ptr)
{
    unsigned int n = 0;
    unsigned int res = 0;

    while (*ptr != '\0')
    {
        for (n = 0; isdigit(*ptr); *ptr++)
            n = 10 * n + (*ptr - '0');
        
        res += n * n;
        printf("res = %d\n", res);

        if (isspace(*ptr))
            *ptr++;
        else if (*ptr == '\n' || *ptr == '\0')
            return res;

    }

    return res;
}
