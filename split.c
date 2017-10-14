//输入一个3位正整数，求出该数各个位上的数字，并以间隔2个空格的形式逆序输出数字。如，输入123，则输出3  2  1
#include "stdio.h"
#include "stdlib.h"
void main(){
	int number=0;
	scanf("%d",&number);
	while(number>9){
		printf("%d  ",number%10);
		number=number/10;
	}
	printf("%d",number);
}
