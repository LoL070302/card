#include <stdio.h>
#include <string.h>
void first()
{
	int s, ac, bc, n, j, i, a, b, A[100], B[100];
	char answer[1000];
	scanf("%d", &n);
	for(s = 0; s < n; s++)
	{
		scanf("%d", &a);
		for(i = 0; i < a; i++)
		{
			scanf("%d ", &A[i]);
		}
		scanf("%d", &b);
		for(i = 0; i < b; i++)
		{
			scanf("%d", &B[i]);
		}
		for(i = 4; i > 0; i--)
		{
			ac = 0;
			bc = 0;
			for(j = 0; j < a; j++)
			{
				if(A[j] == i)
				{
					ac++;
				}
			}
			for(j = 0; j < b; j++)
			{
				if(B[j] == i)
				{
					bc++;
				}
			}
			if(ac > bc)
			{
				answer[s] = 'A';
				//printf("A\n");
				break;
			}
			else if(bc > ac)
			{
				answer[s] = 'B';
				//printf("B\n");
				break;
			}
		}
		if(i < 1) answer[s] = 'D';       //printf("D\n");
	}
	for(s = 0; s < n; s++)
	{
		printf("%c\n", answer[s]);
	}
}
void second()
{
	int t, i, j, k, n, a[3], min = 1000, tmp;
	scanf("%d %d %d %d", &a[0], &a[1], &a[2], &n);
	for(i = 0; i < 3; i++)
	{
		if(a[i] < min)
		{
			min = a[i];
		}
	}
	tmp = n / min;
	t = n % min;
	for(i = 0; i < 3; i++)
	{
		for(i = 0; i < tmp; i++)
		{
			if(n % (min*tmp + t) == 0)
			{
				printf("1\n");
				return;
			}
			tmp -= min;
			tmp += a[i];
		}
	}
	
		
}
void third()
{
	char g[50];
	int i, t, j, num;
	scanf("%d", &t);
	int code[t];
	for(i = 0; i < t; i++)
	{
		num = 0;
		scanf("%s", g);
		for(j = 0; j < strlen(g); j++)
		{
			if(g[j] == '(')
			{
				num++;
			}
			else if(g[j] == ')')
			{
				num--;
			}
		}
		if(num == 0)
		{
			code[i] = 1;
		}
		else
		{
			code[i] = 0;
		}
	}
	for(i = 0; i < t; i++)
	{
		if(code[i] == 0)
		{
			printf("NO\n");
		}
		else
		{
			printf("YES\n");
		}
	}
}
void four()
{
	int n, m, i ,list[5000], j = 0, k, t[3];
	scanf("%d %d", &n, &m);
	for(i = 0; i < n; i++)
	{
		list[i] = i+1;
	}
	for(i = 0; i < n; i++)
	{
		for(k = 0; k < 3; k++)
		{
			j = (j + 1)%n;
			if(list[j] == 0)
			{
				continue;
			}
			printf("%d ", list[j]);
		}
	}
}
int main()
{
	four();
}
