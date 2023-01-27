#include <stdio.h>
int cycle(int num){
	return (num%10 + num/10)%10+num%10*10;
}
int main(){
	int original, i=1, num;
	scanf("%d", &original);
	for(num=original;(num=cycle(num))!=original;i++);
	printf("%d", i); 
}
