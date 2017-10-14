#include "stdio.h"
void main(){
	int a=33;
	char b='B';
	float c=211.5;
	double d=211.5;
	printf("%d %c %f %lf ",a,b,c,d);
	printf("%d %d %d %d",a+(int)b,a-b,a*b,a/b);
}
