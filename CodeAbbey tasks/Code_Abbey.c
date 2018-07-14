#include <stdio.h>
#include <string.h>

#define STR_SIZE		100

int main(void)
{
	char str[STR_SIZE];
	char *ptr;
	unsigned int N, i, Cnt1, Cnt2;

	scanf("%d\n", &N);
	
	for (i = 0; i < N; i++)
	{
		Cnt1 = Cnt2 = 0;
		fgets(str, STR_SIZE, stdin);
        ptr = &str[0];
        
		while(*ptr != '\n')
		{
			switch(*ptr)
			{
				case 'R':
					if (*++ptr == 'P')
						Cnt2++;
					else if (*ptr == 'S')
						Cnt1++;
				break;
				case 'P':
					if (*++ptr == 'S')
						Cnt2++;
					else if (*ptr == 'R')
						Cnt1++;
				break;
				case 'S':
					if (*++ptr == 'R')
						Cnt2++;
					else if (*ptr == 'P')
						Cnt1++;
				break;
                default : break;
			}

            while(*++ptr == ' ');
		}
        
        printf("%d ", Cnt1 > Cnt2? 1 : 2);
        memset(str, '\0', strlen(str));
	}
	return 0;
}

