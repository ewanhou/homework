/*
   A simple calculator
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//#define DEBUG
#define RET_ERR (-1)

void OP_ADD(float num_1, float num_2, float *result)
{
	*result = num_1 + num_2;
	return;
}
void OP_SUBTRACT(float num_1, float num_2, float *result)
{
	*result = num_1 - num_2;
	return;
}
void OP_DIVIDER(float num_1, float num_2, float *result)
{
	*result = num_1 / num_2;
	return;
}

int main(int argc, char *argv[])
{
	printf("\nPlease finish all functions..\n");
	
	float num_1 = 0.0;
	float num_2 = 0.0;
	char operator = 0x0;
	float result = 0.0;

	if(argc != 4) {
		printf("Parameters number is incorrect!\n");	
		return RET_ERR;
	}

#ifdef DEBUG
	for (int i = 1; i < argc; i++) {
		printf("argv[%d] = %s\n", i, argv[i]);
	}	
#endif

	//ToDo: check argv[1] and argv[3] are digit, or not?
	num_1 = atof(argv[1]);
	num_2 = atof(argv[3]);

	if(strlen(argv[2]) != 1) {
		printf("Operator %s is incorrect\n", argv[2]);
		return RET_ERR;
	}
		
	sscanf(argv[2], "%c", &operator);
	
	switch(operator)
	{
		case '+':
			OP_ADD(num_1, num_2, &result);
			break;
		case '-':
			OP_SUBTRACT(num_1, num_2, &result);
			break;
		case 'x':

			break;
		case '/':
			OP_DIVIDER(num_1, num_2, &result);
			printf("\ndarcy 2014 07 15 AM 11:00 \n");
			printf("\ndarcy 2014 07 15 AM 11:05 \n");
			break;	
		default:
			printf("Operator [%c] is incorrect\n", operator);
			return RET_ERR;
	}

	printf("\nResult is %f\n", result);

	return 0;
}
