#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<process.h>
#include<math.h>
#include<stdlib.h>
void main()
{
int gd=DETECT;
int gm,ch,x4=100,y4=100,x5=200,y5=200,x6=300,y6=400,x7,x8,x9,x10,x11,x12,x13,x14=200,y7,y8,y9,y10,y11,y12,y13,y14=300,s;
y7=y8=y9=y10=y11=y12=y13=y14,x7=x8=x9=x10=x11=x12=x13=x14,s;
float x=150,y=250,p=153,q=250,r=147,w=250,i1=155,i2=157,i3=143,i4=157,i5=143,j1=256,j2=257,j3=257,j4=243,j5=243,k1=145,k2=163,k3=137,k4=163,k5=137,l1=256,l2=263,l3=263,l4=237,l5=237;;
float x1,y1,u,a,t,deg,rad,range;
int ur=60,lr=20;  //ur and lr are upper and lower range of degrees at which  u wish to throw the ball.. change the lr and ur to adjust the range of angles
randomize();
x1=15;
a=1;
t=0 ;
deg=random(ur-lr+1)+lr;
rad=deg*3.14/180;
range=x+15;
u=sqrt(range);
y1=235;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
 int i,m,n;
 for(i=0;i<=500;i++)
 {
 m=rand()%getmaxx();
 n=rand()%getmaxy();
 putpixel(m,n,15);
 delay(5);
 }
 setcolor(RED);
 settextstyle(4,HORIZ_DIR,8);
 outtextxy(50,50,"CANNON");
 outtextxy(200,200,"COMBAT");
 settextstyle(6,HORIZ_DIR,3);
 outtextxy(330,330,"PRESS C TO CONTINUE");
 delay(3000);
 if(kbhit())
  {
     ch=getch();
     if(ch==99)
      {
       cleardevice();
	  for(i=0;i<=500;i++)
	 {
	   m=rand()%getmaxx();
	    n=rand()%getmaxy();
	    putpixel(m,n,15);
	    delay(5);
	  }
	settextstyle(6,HORIZ_DIR,5);
	outtextxy(100,100,"r-->rules");
	outtextxy(100,200,"p-->play");
	delay(3000);
      }
 if(kbhit())
 {
   ch=getch();
     if(ch==114)
      {
       cleardevice();
	 for(i=0;i<=500;i++)
	 {
	   m=rand()%getmaxx();
	    n=rand()%getmaxy();
	    putpixel(m,n,15);
	    delay(5);
	  }
       setcolor(CYAN);
	settextstyle(6,HORIZ_DIR,5);
	outtextxy(100,100,"Press d to move right");
	outtextxy(100,200,"Press a to move left");
	settextstyle(6,HORIZ_DIR,3);
	outtextxy(330,330,"press p to play and esc to exit");
	if(ch==112)
	{
	 cleardevice();
	 }
	 delay(5000);
	}
     }
 }

while(x<=500)
{
cleardevice();
u=sqrt(range);
x1=40+u*cos(rad)*t;
y1=240-u*sin(rad)*t+.5*a*t*t;

 //base part
 setcolor(YELLOW);
 line(25,250,0,275);
 line(25,250,75,250);
 line(75,250,125,275);
 line(0,275,125,275);
 setfillstyle(BKSLASH_FILL,YELLOW);
 floodfill(26,251,YELLOW);
 //head part
 setcolor(YELLOW);
 arc(50,240, 325, 217, 15);
 setfillstyle(CLOSE_DOT_FILL, YELLOW);
 floodfill(50,240,YELLOW);
 //wheels
 setcolor(YELLOW);
 circle(15,285,10);
 circle(45,285,10);
 circle(75,285,10);
 circle(105,285,10);
 //flag
 setcolor(GREEN);
 line(505,220,505,260);
 line(485,230,505,240);
 line(485,230,505,220);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(503,230,GREEN);

 delay(40);
 //user
 setcolor(GREEN);
 circle(x,y,10);
 circle(p,q,3);
circle(r,w,3);
line(i1,j1,k1,l1);
line(i2,j2,k2,l2);
line(i3,j3,k3,l3);
line(i4,j4,k4,l4);
line(i5,j5,k5,l5);
//bomb
 setcolor(YELLOW);
 circle(x1,y1,2);
 t+=3;
 delay(40);
 if(y1>270)
{ range=x+15;
  t=0;
  deg= random(ur-lr+1)+lr;
 rad=deg*3.14/180;
}

if(kbhit())
{
 for(s=75;s<1500;s=s+40)
 {
 sound(s);
 delay(1);

 }
 nosound();
 ch=getch();
 if(ch==27)
 {
  exit(0);
 }
 else if(ch==100)
 {
 x+=1;
  p+=1;r+=1;i1+=1;i2+=1;i3+=1;i4+=1;i5+=1;k1+=1;k2+=1;k3+=1;k4+=1;k5+=1;

 cleardevice();
 }
 else if(ch==97)
 {
  x-=1;
   p-=1;r-=1;i1-=1;i2-=1;i3-=1;i4-=1;i5-=1;k1-=1;k2-=1;k3-=1;k4-=1;k5-=1;
  cleardevice();
 }
 }

if( sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1))<=12)
{

 cleardevice();
 for(s=50;s<2000;s=s+100)
 {
 sound(s);
 delay(30);

 }
 nosound();
  if(x>=150 && x<=180)
 {
 outtextxy(x7,y7,"score =100");
 }
 else if(x>180 && x<=220)
 {
 outtextxy(x8,y8,"score =150");
 }
 else if(x>220 && x<=260)
 {
 outtextxy(x9,y9,"score =200");
 }
 else if (x>260 && x<=300)
 {
 outtextxy(x10,y10,"score = 250");
 }
 else if (x>300 && x<=340)
 {
 outtextxy(x11,y11,"score=300");
 }
 else if (x>340 && x<=400)
{
outtextxy(x12,y12,"score=350");
}
else if (x>400 && x<=450)
{
outtextxy(x13,y13,"score=400");
}
else if (x>450 && x<500)
{
outtextxy(x14,y14,"score=500");
}

 settextstyle(BOLD_FONT,HORIZ_DIR,4);
 setcolor(LIGHTGREEN);
 outtextxy(x4,y4,"BOOM!!");
 outtextxy(x5,y5,"GAME OVER");
 setcolor(CYAN);
 settextstyle(COMPLEX_FONT,HORIZ_DIR,2);
 outtextxy(x6,y6,"press esc to exit screen");
 delay(400000);
 if(kbhit())
 {
 ch=getch();
 if(ch==27)
 exit(0);
 }

 }
 if(x==500)
 {
   cleardevice();
   setcolor(CYAN);
   settextstyle(BOLD_FONT,HORIZ_DIR,7);
   outtextxy(x4,y4,"YOU WIN!!");
   settextstyle(6,HORIZ_DIR,6);
   outtextxy(x14,y14,"score=1000");
   delay(40000);
 }
}
getch();

closegraph();
}