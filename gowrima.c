#include <stdio.h>

int main(void) {
	int n,m,a[20],i;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",a[m-1]);
	return 0;
}
