#include<stdio.h>

int main()
{
	int i, n;
	
	int sonuc = 0;
	
	printf("please enter a number: ");
	
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		sonuc = sonuc + i;
	}
	
	printf("total: %d", sonuc);
	
	
	
	
	
	return 0;
}
