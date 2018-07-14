#include <stdio.h>
#include <string.h>

#define STR_MAX		5

int gettline(char s[], int lim)
{
	int c, i = 0;

	while (--lim > 0 && (c = getchar()) != ' ' && c != '\n')
		s[i++] = c;

	s[i] = '\0';

	return i;
}

int main()
{
	char str0[STR_MAX];
	char str1[STR_MAX];

	unsigned int cnt1 = 0, cnt2 = 0;
	unsigned int i = 0, j = 0;
	unsigned int N = 0;

	j = gettline(str0, STR_MAX);
	scanf("%d\n", &N);

	while (N-- > 0)
	{
		cnt1 = cnt2 = 0;
		j = gettline(str1, STR_MAX);
		while (j-- > 0)
		{
			if (str0[j] == str1[j])
			{
				cnt1++;
				continue;
			}

			if (strchr(str0, str1[j]) != NULL)
				cnt2++;
		}
		printf("%d-%d ", cnt1, cnt2);
	}
	return 0;
}
