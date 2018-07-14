#include <stdio.h>
#include <math.h>

#define MAX_NUMBER          500000

int main(void)
{
    unsigned long arr[MAX_NUMBER], arr2[MAX_NUMBER];
    unsigned long p = 2, i, p_sqr;
    unsigned int j, N;

    // scanf("%d", &N);
    // unsigned int index[N];
    // for (i = 0; i < N; i++)
    //     scanf("%d", index[i]);
    
    for (i = 1; i <= MAX_NUMBER; i++)
        arr[i] = i;
    
    p_sqr = p * p;
    
    while (p_sqr <= MAX_NUMBER)
    {	
       for (i = p_sqr; i <= MAX_NUMBER; i+=p)
           arr[i] = 0;
            
        for (i = p+1; i < MAX_NUMBER; i++)
        {
            if (arr[i] != 0)
            {
                p = arr[i];
                p_sqr = p * p;
                break;
            }
        }
    }
	
    i = j = 1;
    while (i <= MAX_NUMBER)
    {
        if (arr[i] != 0)
            arr2[j++] = arr[i++];
        i++;
    }

    printf("j = %d\n", j);

    // for (i = 1; i < j; i++)
    //     printf("%d ", arr2[i]);

    // unsigned int k;
    // for (i = 0; i < N; i++)
    // {
    //     k = index[i];
    //     printf("%d ", arr2[k]);
    // }

    return 0;
}