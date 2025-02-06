/**
 * 	author   : Abhishek Yadav
 * 	created  : 09-04-2024   16:31
 *	purpose  :
 * 	filename : demo
**/

#include <stdio.h>

typedef void (*operation)(int, int);

typedef struct {
	operation add;
	operation subtract;
}calculator;

void add(int, int);
void sub(int, int);

int main()
{
	// designated initializer method
	calculator var = 
	{
		.add = add,
		.subtract = sub
	};

	var.add(5,6);
	var.subtract(7,4);
	return 0;
}

void add(int a, int b)
{
	printf("addition result = %d", a+b);
}

void sub(int a, int b)
{
	printf("subtraction result = %d", a-b);
}
