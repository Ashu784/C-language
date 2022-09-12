#include<stdio.h>
int main()
{
    int ar, perimeter,num1,num2,side,sq_ar,sq_perimeter;
    float r,ar_circle,perimeter_circle;

      printf("Enter the length and breadth of rectangle:\n");
      scanf("%d%d",&num1,&num2);
      ar=num1*num2;
      perimeter=2*num1+2*num2;
      printf("area of rectangle is %d\n and perimeter of rectangle is %d\n",ar,perimeter);

      printf("\nEnter the sides of square:\n");
      scanf("%d",&side);
      sq_ar=side*side;
      sq_perimeter=4*side;
      printf("area of square is : %d\n and perimeter of square is: %d\n",sq_ar,sq_perimeter);

      printf("\nEnter the radius of circle:\n");
      scanf("%f",&r);
      ar_circle=3.14*r;
      perimeter_circle=2*3.14*r;
      printf("area of circle is :%f\n and perimeter of circle is :%f\n",ar_circle,perimeter_circle);



}
