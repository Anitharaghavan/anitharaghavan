#include <stdio.h>
void prime(int a,int b)
{
	int i,count,j;
	for(i=a;i<=b;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf("%d ",i);
		}
	}
}
int main(void) 
{
	int a,b;
	scanf("%d %d",&a,&b);
	prime(a,b);
	return 0;
}
