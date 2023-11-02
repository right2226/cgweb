/*Bresenhams Line Drawing Algorithm*/
#include<stdio.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
/* request auto detection */
int gdriver = DETECT, gmode;
int i,x,y,x1,y1,x2,y2,dx,dy,length,P0;
/* initialize graphics and local variables */
printf("Enter the starting coordinates of line");
scanf("%d%d",&x1,&y1);
printf("Enter the ending coordinates of line");
scanf("%d%d",&x2,&y2);
initgraph(&gdriver, &gmode, "");
dx=abs(x2-x1);
dy=abs(y2-y1);
if(dx>dy)
length=dx;
else
length=dy;
putpixel(x1,y1,2);
x=x1;
y=y1;
P0=2*dy-dx;
for(i=1;i<=length;i++)
{
if(P0<0)
{
x=x+1;
y=y+0;
putpixel(x,y,2);
P0=P0+2*dy;
}
else
{
x=x+1;
y=y+1;
putpixel(x,y,2);
P0=P0+2*dy-2*dx;
}
}
/* clean up */
getch();
closegraph();
return 0;
}
