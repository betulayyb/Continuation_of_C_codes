#include<stdio.h>
main()
{
	int i;
	int eb=30;
	for(i=1;i<=30;--i){
	scanf("%d\n",&i);
	if (i>eb)
	i=eb;
}
	printf("eb=%d",eb);
}

