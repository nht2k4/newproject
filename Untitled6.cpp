#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int i, j, k;
	for(i = 1 ; i < n; i++)
	{
		for(j = 1; j <= n - i; j++){
			printf(" ");
		}
		for(k = 1; k <= 2*i - 1; k++)
		{
		    printf("%d", k);
		}
		for(j = n - i; j >= 1; j++){
			printf(" ");
		}
		printf("\n");
	}
}
