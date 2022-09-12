#include<stdio.h>
float addition(float,float);
float subtraction(float,float);
float multiplication(float,float);
float division(float,float);

float addition(float x, float y) {
	return x + y;
}
float subtraction(float x, float y) {
	return x - y;
}
float multiplication(float x, float y) {
	return x * y;
}
float division(float x, float y) {
	return x / y;
}
int main(){
	int character;
	float x, y, result;
	printf("######\t CALCULATOR \t######\n");
	printf("Please select which operation you want to perform");
printf("\nEnter 1: for addition\n 2: for subtarction\n 3: for multiplication\n 4: for division\n");
	scanf("%d", &character);
	printf("\nEnter the value of x:\t");
	scanf("%f",&x);
	printf("\nEnter the value of y:\t");
	scanf("%f",&y);

	switch(character) {

		case 1: result= addition(x,y);
		printf("addition of %.2f and %.2f is %.2f", x,y, result);
		break;
		case 2: result= subtraction(x,y);
		printf("subtraction of %.2f and %.2f is %.2f", x,y, result);
		break;

case 3: result= multiplication(x,y);
printf("multiplication of %.2f and %.2f is %.2f", x,y, result);
		break;

		case 4: result= division(x,y);
if(y==0)
			printf("result= OOPS Divide by zero\n");
		else
			printf("division of %.2f and %.2f is %.2f", x,y, result);
			break;
		default:
		printf("Invalid Operator");
	}
	return 0;
}
