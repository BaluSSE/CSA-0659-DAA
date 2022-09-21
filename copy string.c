#include<stdio.h>
int main(){
	char a[10],b[10];
	int i,j,k;
	printf("enter a string");
	scanf("%s",a);
	i=0;j=0;
	while(a[i]!='\0')
	{
		b[i]=a[i];
		i++;
	}
	b[i]='\0';
	printf("copied string is %s",b);
	return 0;
}