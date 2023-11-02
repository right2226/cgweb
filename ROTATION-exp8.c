#include<stdio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int gd=DETECT, r, gm, d, x1, y1, x2, y2, xn1, yn1, xn2, yn2;
float ra, si, co;
initgraph(&gd, &gm, "C:\\turboc3\\bgi");
printf("ENTER THE VALUE OF X1, Y1:");
scanf("%d %d",x1, y1);
printf("ENTER THE VALUE OF X2, Y2:");
scanf("%d %d",x2, y2);
line(x1, y1, x2, y2);
printf("ENTER THE DEGREE OF ROTATION:");
scanf("%d",&d);
//Starting point would be same
xn1=x1;
yn1=y1;
//Convert  Degree into radian
r=x2-x1;
ra=0.0175;
si=sin(ra);
co=cos(ra);
//second point
xn2=x1+r*co+1;
yn2=y1+r*si+1;
line(xn1,yn1,xn2,yn2);
closegraph();
} 

