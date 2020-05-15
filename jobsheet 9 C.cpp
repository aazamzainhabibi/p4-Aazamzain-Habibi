#include<stdio.h>
int main (){
	int i;
	char
	nama[5]={'A','Z','A','M','\0'};
	char nama2 [5]="AZAM";
	printf("Array per karakter = ");
	for(i=0;i<=4;i++)
	{
		printf("%c",nama[i]);
	}
	printf("\n");
	printf("Array string  = %s\n\n",nama2);
	return 0;
}
