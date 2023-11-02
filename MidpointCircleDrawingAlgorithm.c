/Midpoint Circle Drawing Algorithm*/
# include &lt;stdio.h&gt;
# include &lt;conio.h&gt;
# include &lt;graphics.h&gt;
void main()
{
int xc,yc,r,p,x,y;
int gd=DETECT,gm;
initgraph(&amp;gd,&amp;gm,&quot;C:\\TURBOC3\\BGI&quot;);
clrscr();
printf(&quot;\n\n\tEnter the co-ordinates of center : &quot;);
scanf(&quot;%d %d&quot;,&amp;xc,&amp;yc);
printf(&quot;\n\n\tEnter the radius: &quot;);
scanf(&quot;%d&quot;,&amp;r);
x = 0;
y = r;
p=(1-r);
for(x=0;x&lt;=y;x++)
{
if(p &lt; 0)
{

else
{

}

x=x+1;
y=y;
p = p + (2 * x)+1;
}

x=x+1;
y=y-1;
p = p + 2 *(x) - 2*(y)+1;

putpixel(xc+x,yc-y,WHITE);
putpixel(xc-x,yc-y,WHITE);
putpixel(xc+x,yc+y,WHITE);
putpixel(xc-x,yc+y,WHITE);
putpixel(xc+y,yc-x,WHITE);
putpixel(xc-y,yc-x,WHITE);
putpixel(xc+y,yc+x,WHITE);
putpixel(xc-y,yc+x,WHITE);
}
getch();
closegraph();
}
