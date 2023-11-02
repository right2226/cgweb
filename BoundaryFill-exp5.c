#include<stdio.h>
#include<graphics.h>
void boundryfill(int x, int y,int f_color, int b_color)
{
if(getpixel(x,y)!=b_color&& getpixel(x,y)!=f_color)//getpixel(x,y) gives the color of seed pixel
{
//print("%d%d",&x,&y);    //putpixel(x,y) draws the pixel with fill color
putpixel(x,y,f_color);
delay(1);
boundryfill(x+1,y,f_color,b_color);
boundryfill(x,y+1,f_color,b_color);
boundryfill(x-1,y,f_color,b_color);
boundryfill(x,y-1,f_color,b_color);
}
}

int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
line(100,100,200,100);
line(200,100,150,150);
line(150,150,100,100);
boundryfill(150,130,4,15);
getch();
}
