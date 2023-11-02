#include <stdio.h>
#include <graphics.h>
void main() {
 int gd=DETECT,gm,x1,y1,x2,y2,tx,ty;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 
 printf("Enter the Starting coordinates:");
 scanf("%d %d",&x1,&y1);
 
 printf("Enter the Ending Coordinates:");
 scanf("%d %d", &x2,&y2);
 
 setcolor(4);
 line(x1,y1,x2,y2);
 
 printf("Enter the translation values:");
 scanf("%d %d", &tx,&ty);
 
 setcolor(2);
 line(x1+tx,y1+ty,x2+tx,y2+ty);
 
 getch();
}
