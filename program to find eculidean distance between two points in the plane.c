#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2,D;
    printf("Enter points p (x1,y1):\n");
    scanf("%f%f",&x1,&y1);
    printf("Enter points q (x2,y2):\n");
    scanf("%f%f",&x2,&y2);
    D = sqrt ( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    printf("Distance between two points (%f,%f) and (%f,%f) is %f",x1,y1,x2,y2,D);

}
