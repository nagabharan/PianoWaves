/***************************************************************************

				CAPSULE MAN
				VERSION 2.0

/**************************************************************************/
			      //HEADER FILES\\
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <iostream.h>


	int color,maxcolor,x,y,chh;
	void *bitmap1,*bitmap2,*bitmap3,*bitmap4;
	char c;
/**************************************************************************/

void exit();
void menu();
void ing()								//INITIALISING GRAPHICS FUNCTION
{
	/* request auto detection */
	int n,m,gdriver = DETECT, gmode, errorcode;
	/* initialize graphics mode */
	initgraph(&gdriver, &gmode, "e:\\tc\\bgi");
}

void bodr(int p,int q)							//BORDER FUNCTION
{
	int g,h;
	for(g=315;g>=5;g-=10)
	{
		setcolor(p);
		circle(g,5,10);
		setcolor(q);
		circle(640-g,5,10);
		delay(50);
		p=p+q;
		q=p-q;
		p=p-q;
	}
	for(h=5;h<=475;h+=10)
	{
		setcolor(q);
		circle(5,h,10);
		setcolor(p);
		circle(635,h,10);
		delay(50);
		p=p+q;
		q=p-q;
		p=p-q;
	}
	for(g=5,h=645;g<=305,h>=325;g+=10,h-=10)
	{
		setcolor(q);
		circle(g,475,10);
		setcolor(p);
		circle(h,475,10);
		delay(50);
		p=p+q;
		q=p-q;
		p=p-q;
	}
}
void credits()                             			//CREDITS FUNCTION
{
	setbkcolor(0);
	settextstyle(3, HORIZ_DIR,3);
	for(int z=480;!kbhit();z--)
	{
		if(z==-500)z=480;
		cleardevice();
		settextstyle(4,0,2);
		outtextxy(100,z,"~~~~~~~~DIGI SURFERS~~~~~~~~");
		outtextxy(200,z+30,"NAGABHARAN N");
		outtextxy(200,z+60,"VINAY A IYER");
		outtextxy(100,z+90,"~~~~~~~~~PROJECT DEVELOPERS~~~~~~~~~");
		outtextxy(200,z+120,"NAGABHARAN N");
		outtextxy(100,z+150,"~~~~~~~~~~~LOGIC~~~~~~~~~~~");
		outtextxy(200,z+180,"VINAY A IYER");
		outtextxy(100,z+210,"~~~~~~~~~HELPERS~~~~~~~~~~~");
		outtextxy(200,z+240,"KAVITHA MA'AM");
		outtextxy(200,z+270,"FRIENDS");
		delay(20);
	}
	getch();
	exit();
}

void help();

void cartoon(int x,int y,int z,int a,int l)					//CARTOON FUNCTION
{
   setcolor(15);
   //neck
   setfillstyle(1,6);
   fillellipse(320,110,10,15);
   //face
   setfillstyle(1,6);
   fillellipse(320,50,30,50);
   //eyes
   setfillstyle(1,15);
   fillellipse(330,30,7,l+5);
   setfillstyle(1,15);
   fillellipse(310,30,7,l+5);
   setfillstyle(1,0);
   fillellipse(310,30,5,l+3);
   setfillstyle(1,0);
   fillellipse(330,30,5,l+3);
   setfillstyle(1,1);
   fillellipse(310,30,2,l);
   setfillstyle(1,1);
   fillellipse(330,30,2,l);
   setcolor(15);
   setfillstyle(1,4);
   fillellipse(320,55,7,10);
   setcolor(15);
   arc(320,70,180,360,10);
   //thighs
   setfillstyle(1,6);
   fillellipse(280,280,10,40);
   setfillstyle(1,6);
   fillellipse(360,280,10,40);
   //body
   setfillstyle(1,15);
   bar(260,210,380,260);
   rectangle(260,210,380,260);
   setfillstyle(1,4);
   sector(320,110,180,360,100,125);
   setfillstyle(1,15);
   sector(320,110,180,360,50,75);
   //leg
   setfillstyle(1,6);
   fillellipse(280,350,10,40);
   setfillstyle(1,6);
   fillellipse(360,350,10,40);
   //knee
   setfillstyle(1,6);
   fillellipse(280,320,10,10);
   setfillstyle(1,6);
   fillellipse(360,320,10,10);
   //toe
   setfillstyle(1,15);
   fillellipse(280,400,10,10);
   setfillstyle(1,15);
   fillellipse(360,400,10,10);
   //hand
   setfillstyle(1,6);
   fillellipse(425,200,10,50);
   setfillstyle(1,6);
   fillellipse(x,y,z,a);
   //toe
   setfillstyle(1,15);
   fillellipse(215,150,10,10);
   setfillstyle(1,15);
   fillellipse(425,150,10,10);
}
void cartoonfn()									//CARTOON ANIM FUNCTION
{
	cartoon(175,150,50,10,2);
	bitmap1=malloc(imagesize(100,80,238,250));
	getimage(100,80,238,250,bitmap1);
	putimage(100,80,bitmap1,XOR_PUT);
	bitmap3=malloc(imagesize(300,10,350,50));
	getimage(300,10,350,50,bitmap3);
	putimage(300,10,bitmap3,XOR_PUT);
	cartoon(215,200,10,50,0);
	bitmap2=malloc(imagesize(100,80,238,250));
	getimage(100,80,238,250,bitmap2);
	putimage(100,80,bitmap2,XOR_PUT);
	bitmap4=malloc(imagesize(300,10,350,50));
	getimage(300,10,350,50,bitmap4);
	putimage(300,10,bitmap4,XOR_PUT);

	while(!kbhit())
	{
		int i=100;
		putimage(i,80,bitmap1,OR_PUT);
		putimage(300,10,bitmap3,XOR_PUT);
		delay(350);
		putimage(i,80,bitmap1,XOR_PUT);
		putimage(300,10,bitmap3,XOR_PUT);
		putimage(i,80,bitmap2,OR_PUT);
		putimage(300,10,bitmap4,XOR_PUT);
		delay(350);
		putimage(i,80,bitmap2,XOR_PUT);
		putimage(300,10,bitmap4,XOR_PUT);
	}
	putimage(100,80,bitmap2,XOR_PUT);
	putimage(300,10,bitmap4,XOR_PUT);
	getch();
	fflush(stdin);
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n Do you want to do again??(0-exit/1-continue)";
	cin>>chh;

	switch(chh)
	{
	case 0: exit();
			break;
	case 1: menu();
			break;
	default:cout<<endl<<"Invalid option";
	}
	closegraph();
}

void contr()											//CONTRIBUTIONS FUNCTION
{
	ing();
	setcolor(14);
	settextstyle(5, HORIZ_DIR,6);
	outtextxy(175,40,"CONTRIBUTIONS");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\nNagabharan - Instrumental in the conception of the initial ideas that \nform the backbone of the present project.Also acts as the center for programming logic in the group and with his spatial powers has developed the waves project and the animations performed by him";
	cout<<"\nVinay -The logic  and creativty behind the project was given by him\nhis intellectual powers we developed the waves project ";	getch();
	cout<<"\n\n\n\n\n\n\n\n\n\n\nDo you want to do again?(0-exit/1-continue)";
	cin>>chh;

	switch(chh)
	{
	case 0: exit();
			break;
	case 1: menu();
			break;
	default:cout<<endl<<"Invalid option";
	}
}

void welcome()											//WELCOME FUNCTION
{
	bodr(14,4);
	for(int i=1;!kbhit();i++)
	{
	if(i==15)i=1;
	setcolor(i+4);
	settextstyle(GOTHIC_FONT, HORIZ_DIR, 9);
	outtextxy(100,160,"WELCOME");
	delay(300);
	}
	getch();

}

void exit()											//EXIT FUNCTION
{
	ing();
	for(int i=0;i<16;i++)
	{
	setcolor(i+5);
	settextstyle(1, HORIZ_DIR, 9);
	outtextxy(60,120,"THANK YOU");
	delay(100);
	}
	exit(0);

}

void menu()											//MENU FUCNTION
{
	do
	{
		cleardevice();
		bodr(4,15);
		setcolor(14);
		settextstyle(5, HORIZ_DIR,6);
		outtextxy(175,20,"MAIN MENU");
		setcolor(9);
		settextstyle(1, HORIZ_DIR,4);
		delay(500);
		outtextxy(150,100,"1. CARTOON");
		delay(500);
		outtextxy(150,150,"2. HELP");
		delay(500);
		outtextxy(150,200,"3. CONTRIBUTIONS");
		delay(500);
		outtextxy(150,250,"4. CREDITS");
		delay(500);
		outtextxy(150,300,"5. EXIT");
		delay(500);
		setcolor(15);
		delay(250);
		settextstyle(1, HORIZ_DIR,4);
		outtextxy(100,400,"Enter your choice:");
		int n=getch();
		switch(n)
		{

			case '1': 	cleardevice();
						fflush(stdin);
						cartoonfn();
						break;
			case '2':	cleardevice();
						fflush(stdin);
						help();
						closegraph();
						break ;
			case '5':	closegraph();
						exit();
						break;
			case '3':	closegraph();
						fflush(stdin);
						contr();
						break;
			case '4': 	closegraph();
						fflush(stdin);
						credits();
						break;
			default:	cout<<"\n\tInvalid option";

	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n Do you want to do again??(0-exit/1-continue)";
	cin>>chh;

	switch(chh)
	{
	case 0: exit();
			break;
	case 1: menu();
			break;
	default:cout<<endl<<"Invalid option";
			}
	}
  }while(chh==1);
}

void help()												//HELP FUNCTION
{
	ing();
	cleardevice();
	setcolor(14);
	settextstyle(5, HORIZ_DIR,6);
	outtextxy(175,40,"HELP");
	cout<<"\n\n\n\n\n\n\n\n";
	cout<<"\n	  Type the respective numbers to take you to the screen";
	cout<<"\n	  of your choice.The screens have information based on";
	cout<<"\n	  		the selection made.";
	cout<<"\n	  Your suggestions and ideas will be of great assistance";
	cout<<"\n	  	for us to do our project better in future.";
	cout<<"\nIn the main menu ";
	cout<<"\nPress 1 to view cartoon";
	cout<<"\nPress 2 to get help";
	cout<<"\nPress 3 to view contributions";
	cout<<"\nPress 4 to view credits";
	cout<<"\nPress 5 to exit";
	cout<<"\nElse where press any key to navigate";
	getch();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n Do you want to do again??(0-exit/1-continue)";
	cin>>chh;

	switch(chh)
	{
	case 0: exit();
			break;
	case 1: menu();
			break;
	default:cout<<endl<<"Invalid option";
	}
}

void main()												//MAIN FUNCTION
{
	ing();
	welcome();
	menu();
	fflush(stdin);

}