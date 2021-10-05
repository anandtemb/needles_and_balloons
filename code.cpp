Needle & ballons.

#include<dos.h>
#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
union REGS in,o;

circ()
{
	int i;
	for(i=0;i<15;i++)
		circle(320,240,i*10);
	rectangle(240,160,400,320);
}

int welcome()
{
	printf('Welcome fors good time');
	for(int i=0;i<16;i++)
		printf('%d',i);
	return 0;
}

bulb()
{
	int i=1,c=1;
	randomize();
	while(!kbhit())
	{
		if((i%2)==0)
			setcolor(c++);
		setfillstyle(1,getcolor());
		circle(320,240,i*20);
		putpixel(320-i+2,240-i+2,1);
		floodfill(320-i+2,240-i+2,getcolor());
		delay(1000);
		i++;
		if(i>=5)
			i=1;
	}
}

dot()
{
	int i,j,of=40,wid=5;
	setcolor(8);
	setfillstyle(1,getcolor());
	for(i=of;i<getmaxx();i+=of)
		bar(i,0,i+wid,getmaxy());

	for(i=of;i<getmaxy();i+=of)
		bar(0,i,getmaxx(),i+wid);

	for(i=of;i<getmaxx();i+=of)
		for(j=of;j<getmaxy();j+=of)
		{
			setcolor(15);
			setfillstyle(1,getcolor());
			circle(i+2,j+2,4);
			floodfill(i+2,j+2,getcolor());
		}
	 int i,a,r;
 clrscr();
 gotoxy(30,12);
 printf("Welcome You!

			IN THE JARGON OF A NUMBER..");
 printf("







					 Press any key to continue....");
 getch();
 clrscr();
 gotoxy(15,8);
 printf("Just think a number between 1 to 63 in your mind");
 printf("

				  Think on one

			");
 printf("Do not enter that number");
 printf("

		    I will find that number on your mind....");
 printf("






						 Press any key to continue...");
 getch();
 clrscr();
 gotoxy(20,7);
 printf("By Just answering few questions....");
 printf("



	If your number is present in the numbers");
 printf(" shown on your screen,

		Then press P and if not present");
 printf(" then press N


	");
 printf(" But please be honest while entering the answer...");
 printf("




						Press any key to continue...");
 getch();
 clrscr();
 r=generate();
 if(r==0)
 {
  gotoxy(20,11);
  printf("You didn't think of any number between 1 to 63");
  printf("


				 So try again...");
 }
 else
 {
 gotoxy(30,11);
 printf("Your number is %d",r);
 printf("


Surprised! But friends it is not a magic,");
 printf(" it just involves some mathematical computation....");
 printf(" so guys just try to find out the method.


				");
 printf(" Thank You!

							");
 getch();
}

int generate()
{
 int a,i,j,f,num[6],n,r=0;
 char ch[6];
 for(j=0;j<=5;j++)
 {
  gotoxy(1,7);
  f=fun(j);
  for(i=1;i<=63;i++)
  {
   //f=fun(j);
   //printf("%d",f);
   a=i & f;
   if(a==f)
   //gotoxy(5,10);
   printf("	%d",i);

  }
  printf("



  Let me remind you if the number is present then");
  printf(" press P otherwise press N");
  printf("


		 Enter your answer:	");

  ch[j]=getche();
  printf("


						Press any key to continue....");
  //clrscr();
  if(ch[j]=='p' || ch[j]=='P')
  {
   num[j]=1;
   n=fun(j);
   r=r+n;
  }

}

void main()
{
	int x=0,y=10,gd=DETECT,gm,i;
	initgraph(&gd,&gm,"c:\tc\bgi");
	setcolor(YELLOW);
	settextstyle(1,0,6);
	outtextxy(0,240,"Count the black dots.....");
	sleep(4);
	cleardevice();
	dot();
	getch();
	cleardevice();
	setcolor(YELLOW);
	settextstyle(1,0,4);
	outtextxy(0,240,"I bet the lines of rectangle are straight.....");
	sleep(4);
	getch();
	cleardevice();
	circ();
	getch();
	closegraph();
}
