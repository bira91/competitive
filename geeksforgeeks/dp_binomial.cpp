#include <iostream>
using namespace std;
int min(int a, int b);
int bino(int n,int k)
{
	int c[n+1][k+1];
	int i,j;

	for(i=0;i<=n;i++)
	{
		for(j=0;j<=min(i,k);j++)
		{
			if(j==0||j==i)
				c[i][j] = 1;
			else
				c[i][j] = c[i-1][j]+c[i-1][j-1];
		}
	}
	return c[n][k];
}

int min(int a, int b)
{
	return (a<b)?a:b;
}

int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	printf("%d\n",bino(n,k));
	return 0;

}