/*	Exercise 4 - Odd or Even

Start
	Declare N as integer
	Display("Enter a number: ")
	Read(N)
	if(N mod 2 = 0) Then
		Display("The number is even: ")
		ElseIf
			Display("The number is odd: ")
	EndIf
*/
#include <stdio.h>
int main() {
	int N;
	printf("Enter a number: ");
	scanf("%d", &N);
	if(N % 2 == 0) {
		printf("The number is even\n");
	}else{
		printf("The number is odd\n");
	}

return 0;

}