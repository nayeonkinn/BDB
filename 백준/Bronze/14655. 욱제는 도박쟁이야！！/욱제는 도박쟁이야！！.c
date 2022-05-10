#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num, i, sum1, sum2;
	int round1[10000], round2[10000];

	sum1 = 0;
	sum2 = 0;
	scanf("%d", &num);
	i = -1;
	while (++i < num)
	{
		scanf("%d", &round1[i]);
		sum1 += abs(round1[i]);
	}
	i = -1;
	while (++i < num)
	{
		scanf("%d", &round2[i]);
		sum2 += abs(round2[i]);
	}
	printf("%d", sum1 + sum2);
}