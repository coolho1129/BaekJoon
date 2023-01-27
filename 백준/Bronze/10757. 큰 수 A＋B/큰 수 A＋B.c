#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include<string.h>



void reverse(char a[], int len) {

	for (int i = len; i > 0; i--) {
		if ('1' <= a[i] && a[i] <= '9')	break;
		else
			a[i] = 'a';
	}
	for (int i = len; i >= 0; i--) {
		if (a[i] != 'a')
			printf("%c", a[i]);
	}
}

void add(char num1[], char num2[], int len1, int len2,char addition[]) {
	int sum = 0, carry = 0;
	for (int i = 0; i <= len1; i++) {

		if (len2 - i - 1 >= 0)
			sum = (num1[len1 - i - 1] - '0') + (num2[len2 - i - 1] - '0') + carry;
		else if (len1 - i - 1 >= 0)
			sum = (num1[len1 - i - 1] - '0') + carry;
		else if (((len1 - 1 - i) < 0))
			sum = carry;

		if (sum > 9) {
			carry = 1;

		}
		else
			carry = 0;

		addition[i] = (sum % 10) + '0';

	}
}

void swap(char num1[], char num2[]){
	int len1 = strlen(num1), len2 = strlen(num2);
	char temp[10001] = { 0 };

	if (len1 < len2){
	
		strcpy(temp, num1);
		strcpy(num1, num2);
		strcpy(num2, temp);

	}
	
}




int main()
{
	
	char num1[10001] = { 0 };
	char num2[10001] = { 0 };
	char addition[10001] = { 0 };
	int len1 = 0, len2 = 0, carry = 0, sum = 0, addlen = 0;

	scanf("%s %s", num1, num2);
	swap(num1, num2);
	
	
	len1 = strlen(num1);
	len2 = strlen(num2);

	
	add(num1, num2, len1, len2, addition);
	addlen = strlen(addition);
	reverse(addition, addlen);





}