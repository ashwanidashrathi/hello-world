#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
 int gd=DETECT,gm,i;
 initgraph(&gd,&gm,"C://TURBOC3//BGI");
 for(i=0;i<600;i++)
 {
 setcolor(WHITE);
 line(50+i,50,100+i,50);
 line(50+i,50,0+i,100);
 line(100+i,50,150+i,100);
 line(0+i,100,150+i,100);
 circle(40+i,100,10);
 circle(110+i,100,10);
 setcolor(BLACK);
 line(30+i,100,50+i,100);
 setcolor(BLACK);
 line(100+i,100,120+i,100);
 setcolor(WHITE);
 rectangle(300,50,310,100);

 delay(25);
 cleardevice();
 floodfill(301,51,
 }
 getch();
 }