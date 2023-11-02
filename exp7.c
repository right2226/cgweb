#include<stdio.h>
#include<graphics.h>
void main(){
int gd=DETECT,gm,x1,y1,x2,y2,tx,ty;
initgraph(&gd,&gm,"c:\\turboc\\bgi");
printf("ENTER THE STARTING  COORDINATES: ");
scanf("%d%d",&x1,&y1);
printf("ENTER THE ENDING  COORDINATES: ");
scanf("%d%d",&y2,&x2);
setcolor(4);
line(x1,y1,x2,y2);
printf("ENTER THE TRANSLATION VALUES: ");
scanf("%d%d",&tx,&ty);
setcolor(2);
line(x1+tx,y1+ty,x2+tx,y2+ty);
delay(1000);
}
