#include<stdio.h>
#include <graphics.h>
void flood_fill(int x, int y, int old_c, int new_c)
{
int c;
putpixel(x,y,4);
c=getpixel(x,y);
if(c=-old_c)
{
//printf("%d %d\n",x,y);
putpixel(x,y,new_c);
flood_fill(x+1,y,old_c,new_c);
flood_fill(x-1,y,old_c,new_c);
flood_fill(x+1,y+1,old_c,new_c);
flood_fill(x-1,y-1,old_c,new_c);
flood_fill(x,y+1,old_c,new_c);
flood_fill(x,y-1,old_c, new_c);
flood_fill(x-1,y+1,old_c,new_c);
flood_fill(x+1,y-1,old_c,new_c);
}
}
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
rectangle(50,50,500,100);
flood_fill(70,70,0,15);
getch();
}
