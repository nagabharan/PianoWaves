//
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<process.h>
#include<iostream.h>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void home();
void end();
int reflection();
int refraction();
int diffraction();
int inter();
void prop()
{

	fflush(stdin);
	cleardevice();
	setbkcolor(BLACK);
	settextstyle(1,0,5);
	outtextxy(100,30,"Properties of Waves");
	settextstyle(3,0,1);
	outtextxy(10,100,"Waves exibit various characteristic properties during interaction ");
	outtextxy(13,120,"with different types of media.These are called phase relationships");
	outtextxy(0,140,"These are shown by all waves that are'nt standing(static and cancelling)");
	rectangle(20,180,200,210);
	rectangle(20+400,180,200+400,210);
	rectangle(20,180+50,200,210+50);
	rectangle(20+400,180+50,200+400,210+50);
	outtextxy(75,180,"Reflection");
	outtextxy(75+400,180,"Refraction");
	outtextxy(75,180+50,"Diffraction");
	outtextxy(75+400-5,180+50,"Interference");
	//setviewport(0, 265, getmaxx(), getmaxy(), 0);
	//char b=getch();
	int chq=reflection();
	char gg=getch();
	if(gg==0)
		gg=getch();
	if(gg==71)
		home();
	else if(gg==79)
		end();

}
int reflection()
{

	setcolor(2);
	rectangle(20,180,200,210);

	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nAn intervention of a wave by a fixed boundary that causes it to reverse direction with respect to the normal is reflection. When a wave strikes a fixed object, some of the energy is absorbed and converted into thermal energy. However, some of the original energy reflects off of the surface.  In reflection,the angle of incidence is always equal to the angle of reflection.";
	line(200,getmaxy()-50,400,getmaxy()-50);
	line(400,getmaxy()-70,400,getmaxy()-30);
	for(int lop=210;lop<=390;lop+=10)
	{
		setcolor(0);
		ellipse(lop-10,getmaxy()-50,0,180,5,20);
		line(lop-5,getmaxy()-50,lop+5,getmaxy()-50);
		setcolor(2);
		line(lop-15,getmaxy()-50,lop-5,getmaxy()-50);
		ellipse(lop,getmaxy()-50 , 0, 180,5, 20);
		delay(200);
	}
	setcolor(0);
	ellipse(400-10,getmaxy()-50,0,180,5,20);
	setcolor(2);
	line(400-15,getmaxy()-50,400-5,getmaxy()-50);
	for( lop=380;lop>=210;lop-=10)
	{
		setcolor(0);
		ellipse(lop+10,getmaxy()-50,180,0,5,10);
		line(lop+5,getmaxy()-50,lop-5,getmaxy()-50);
		setcolor(2);
		line(lop+15,getmaxy()-50,lop+5,getmaxy()-50);
		ellipse(lop,getmaxy()-50 ,  180,0,5, 10);
		delay(200);
	}
	char a=getch();
	setcolor(15);
	rectangle(20,180,200,210);
	if(a==0)
	{
	a=getch();
	if(a==77)
	{
		fflush(stdin);
		gotoxy(1,1);
		setviewport(0,265,getmaxx(),getmaxy(),0);clearviewport();setviewport(0,0,getmaxx(),getmaxy(),0);
		refraction();
	}
	else if(a==80)
	{
		fflush(stdin);
		gotoxy(1,1);
		setviewport(0,265,getmaxx(),getmaxy(),0);clearviewport();setviewport(0,0,getmaxx(),getmaxy(),0);
		diffraction();
	}
	else if(a==71)
	home();
	else
	end();
	}

	else
	return 0;

}
int refraction()
{

	setcolor(2);
	rectangle(20+400,180,200+400,210);
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nWhen a wave hits a medium, some of the energy becomes thermal energy, and some of the energy continues to travel through the medium. Once it enters a medium, the direction is slightly altered since there is a change in velocity. The velocity depends on the optical density of the medium. If the medium is more dense it will take longer for the wave to travel through it. ";
	setcolor(15);
	line(getmaxx()/2,390,getmaxx()/2,480);
	setcolor(2);
	for(int lop=10;lop<=getmaxx()/2;lop+=10)
	{
	setcolor(0);
	line(lop-10,410,lop-10,460);
	setcolor(2);
	line(lop,410,lop,460);
	delay(100);
	}
	setcolor(0);
	line(lop-10,410,lop-10,460);
	setcolor(15);
	line(getmaxx()/2,390,getmaxx()/2,480);
	for( lop=getmaxx()/2+20;lop<=getmaxx()-10;lop+=10)
	{
	setcolor(0);
	line(lop-10,430,lop-10,460);
	line(lop-10,430,lop-3,410);
	setcolor(2);
	line(lop,430,lop,460);
	line(lop,430,lop+7,410);
	delay(300);
	}


	char a=getch();
	setcolor(15);
	rectangle(20+400,180,200+400,210);
	if(a==0)
	{
	a=getch();
	if(a==75)
	{
		fflush(stdin);
		gotoxy(1,1);
		setviewport(0,265,getmaxx(),getmaxy(),0);clearviewport();setviewport(0,0,getmaxx(),getmaxy(),0);
		reflection();
	}
	else if(a==80)
	{
		fflush(stdin);
		gotoxy(1,1);
		setviewport(0,265,getmaxx(),getmaxy(),0);clearviewport();setviewport(0,0,getmaxx(),getmaxy(),0);
		inter();
	}
	else if(a==71)
	home();
	else
	end();
	}
	else
	return 0;
}
int diffraction()
{

	setcolor(2);
	rectangle(20,180+50,200,210+50);
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nImagine a straight water wave approaching a small gap between two objects.When the water goes through the gap, it spreads out into a cone, where the gap is the point of the cone. The smaller the gap , the more noticeable the spread. This is diffraction. If the gap is small, there will be no noticeable diffraction, though there is diffraction";
	setcolor(15);
	line(getmaxx()/2,390,getmaxx()/2,480);
	setcolor(0);
	line(getmaxx()/2,425,getmaxx()/2,445);
	setcolor(2);
	for(int lop=10;lop<=getmaxx()/2;lop+=10)
	{
	setcolor(0);
	line(lop-10,410,lop-10,460);
	setcolor(2);
	line(lop,410,lop,460);
	delay(100);
	}
	setcolor(0);
	line(lop-10,410,lop-10,460);
	for( lop=getmaxx()/2+20;lop<=getmaxx()-10;lop+=10)
		{
		setcolor(0);
		arc(lop-10,435,270,90,5);
		setcolor(2);
		arc(lop,435,270,90,5);
		delay(100);
		}
	char a=getch();
	setcolor(15);
	rectangle(20,180+50,200,210+50);
	if(a==0)
	{
	a=getch();
	if(a==72)
	{
		fflush(stdin);
		gotoxy(1,1);
		setviewport(0,265,getmaxx(),getmaxy(),0);clearviewport();setviewport(0,0,getmaxx(),getmaxy(),0);
		reflection();
	}
	else if(a==77)
	{
		fflush(stdin);
		gotoxy(1,1);
		setviewport(0,265,getmaxx(),getmaxy(),0);clearviewport();setviewport(0,0,getmaxx(),getmaxy(),0);
		inter();
	}
	else if(a==71)
	home();
	else
	end();
	}
	else
	return 0;
}
int inter()
{
	setcolor(2);
	rectangle(20+400,180+50,200+400,210+50);
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nInterference is when a propagating wave encounters another object that may alter its path or change the amplitude in the medium. There are two types of interference: constructive and destructive. Two or more waves cross paths but do not interrupt the separate wave structure and as a result they either create a larger displacement or cancel each other; this is called the superposition of waves.";
	for(int lo=0;lo<=180;lo++)
	{
	for(int i=20+lo-1;i<=220+lo-1;i+=80)
	{
		setcolor(0);
		ellipse(i, 400, 0, 180,20, 30);
		ellipse(i+40,400,180,360,20,30);
	}
	for(i=380-lo+1;i<=580-lo+1;i+=80)
	{
		setcolor(0);
		ellipse(i, 400, 0, 180,20, 30);
		ellipse(i+40,400,180,360,20,30);
	}
	for( i=20+lo;i<=220+lo;i+=80)
	{
		setcolor(1);
		ellipse(i, 400, 0, 180,20, 30);
		ellipse(i+40,400,180,360,20,30);
	}
	for(i=380-lo;i<=580-lo;i+=80)
	{
		setcolor(YELLOW);
		ellipse(i, 400, 0, 180,20, 30);
		ellipse(i+40,400,180,360,20,30);
	}
	delay(2);
	}
	delay(100);
	for(int i=20+20;i<=580;i+=80)
	{
		setcolor(0);
		ellipse(i, 400, 0, 180,20, 30);
		ellipse(i+40,400,180,360,20,30);
	}
	for( i=20+20;i<=580;i+=80)
	{
		setcolor(0);
		ellipse(i, 400, 0, 180,20, 30);
		ellipse(i+40,400,180,360,20,30);
	}
	for(i=160+40;i<=580-220;i+=80)
	{
		setcolor(2);
		ellipse(i, 400+20, 0, 180,20, 30+20);
		ellipse(i+40,400+20,180,360,20,30+20);
	}
	char a=getch();
	setcolor(15);
	rectangle(20+400,180+50,200+400,210+50);
	if(a==0)
	{
	a=getch();
	if(a==72)
	{
		fflush(stdin);
		gotoxy(1,1);
		setviewport(0,265,getmaxx(),getmaxy(),0);clearviewport();setviewport(0,0,getmaxx(),getmaxy(),0);
		refraction();
	}
	else if(a==75)
	{
		fflush(stdin);
		gotoxy(1,1);
		setviewport(0,265,getmaxx(),getmaxy(),0);clearviewport();setviewport(0,0,getmaxx(),getmaxy(),0);
		diffraction();
	}
	else if(a==71)
	home();
	else
	end();
	}
	else
	return 0;
}


void types()
{
	cleardevice();
	setbkcolor(0);
	settextstyle(1,0,5);
	outtextxy(140,30,"Types of Waves");
	settextstyle(3,0,1);
	outtextxy(35,95,"When the particles of the medium are displaced parallel to the");
	outtextxy(5,115,"direction of the propagation of the wave,it is called a longitudinal wave.");
	for(int i=0;i<=640;i+=10)
			for(int j=170;j<=200;j+=5)
				putpixel(i,j,15);
	for( i=320;i<=360;i+=10)
		for( j=170;j<=200;j+=5)
			putpixel(i,j,4);
	delay(700);

	for(int loop=1;loop<=15;loop++)
	{
		for( i=0;i<=64*loop;i+=10)
			for(int j=160+10;j<=190+10;j+=5)
				putpixel(i,j,0);

		if(loop%2==0)
		{
		for( i=-3;i<=64*loop;i+=10)
			for(int j=160+10;j<=190+10;j+=5)
				putpixel(i,j,0);
		for( i=3;i<=64*loop;i+=10)
			for( j=160+10;j<=190+10;j+=5)
				{
				if(i>=323&&i<=363)
				putpixel(i,j,4);
				else
				putpixel(i,j,15);
				}
		}
		if(loop%2==1)
		{
		for( i=3;i<=64*loop;i+=10)
			for(int j=160+10;j<=190+10;j+=5)
				putpixel(i,j,0);
		for( i=-3;i<=64*loop;i+=10)
			for( j=160+10;j<=190+10;j+=5)
				{
				if(i>=317&&i<=357)
				putpixel(i,j,4);
				else
				putpixel(i,j,15);
				}
		}
		delay(700);
	}
	delay(2000);
	outtextxy(15,245,"When the particles of the medium are displaced perpendicular to the ");
	outtextxy(5,265,"direction of the propagation of the wave,it is called a transverse wave.");
	outtextxy(15,285,"It is usually represented as a sinusoidal wave in the form of SHM");
	for(i=5;i<635;i+=10)
		circle(i,375,3);
	for( loop=1;loop<=33;loop++)
	{
		delay(200);
		setcolor(0);
		for(i=5;i<20*loop;i+=10)
		circle(i,375,3);
		setcolor(15);
		for(i=5;i<20*loop;i+=10)
		circle(i,375-20,3);
		delay(200);
		setcolor(0);
		for(i=5;i<20*loop;i+=10)
		circle(i,375-20,3);
		setcolor(15);
		for(i=5;i<20*loop;i+=10)
		circle(i,375+20,3);
		delay(200);
		setcolor(0);
		for(i=5;i<20*loop;i+=10)
		circle(i,375+20,3);
		setcolor(15);
		for(i=5;i<20*loop;i+=10)
		circle(i,375-20,3);
		}
	outtextxy(3,395,"Another type is water waves which are a combination of both types");
	outtextxy(3,415,"Electromagnetic waves(eg: Light) unlike mechanical don't need a medium");
	outtextxy(197,445,"Press F10 to continue");
	char gg;
	gg=getch();
		if(gg==0)
		gg=getch();
	if(gg==71)
		home();
	else if(gg!=68)
		end();
	/*if(a==0)
	{
		a=getch();
		if(a==68)*/
	cleardevice();
	setbkcolor(0);
	settextstyle(1,0,5);
	outtextxy(140,30,"Types of Waves");
	settextstyle(3,0,1);
	outtextxy(2,95,"Light has partial wave character and is considered electromagnetic with parallel");
	outtextxy(5,115,"perpendicular electric and magnetic fields. It's speed is 3 X 10^8 m/s");
	outtextxy(4,139,"Diffraction and dispersion(splitting into wavelengths) are its properties");
	for(int lin=105;lin>0;lin--)
	{
	line(200,190,305-lin,190);
	delay(50);
	}
	int col[]={0,1,9,3,2,14,6,4};
	delay(200);
	for(int h=1;h<=7;h++)
	{
	setcolor(col[h]);
	line(305,190,390,190+h*10);
	delay(200);
	}
	setcolor(15);
	outtextxy(0,295,"Sound is a mechanical wave with compressions & rarifactions in medium");
	outtextxy(25,315,"It's speed in air is 330 m/s and shows properties like echos");
	sound(261);
	for( loop=1;loop<=640&&loop>0;loop++)
	{
	setcolor(0);
	line(450-15*27+loop-1,80+15*20,470-15*27+loop-1,100+15*20);
	line(465-15*27+loop-1,80+15*20,482-15*27+loop-1,97+15*20);
	line(450-15*27+loop-1,80+15*20,465-15*27+loop-1,80+15*20);
	fillellipse(470-15*27+loop-1,100+15*20,3,3);
	fillellipse(482-15*27+loop-1,97+15*20,3,3);
	setcolor(15);
	line(450-15*27+loop,80+15*20,470-15*27+loop,100+15*20);
	line(465-15*27+loop,80+15*20,482-15*27+loop,97+15*20);
	line(450-15*27+loop,80+15*20,465-15*27+loop,80+15*20);
	fillellipse(470-15*27+loop,100+15*20,3,3);
	fillellipse(482-15*27+loop,97+15*20,3,3);
	delay(8);
	}
	nosound();
	setcolor(0);
	line(450-15*27+640-1,80+15*20,470-15*27+640-1,100+15*20);
	line(465-15*27+640-1,80+15*20,482-15*27+640-1,97+15*20);
	line(450-15*27+640-1,80+15*20,465-15*27+640-1,80+15*20);
	fillellipse(470-15*27+640-1,100+15*20,3,3);
	fillellipse(482-15*27+640-1,97+15*20,3,3);
	setcolor(15);
	line(450-15*27+270,80+15*20,470-15*27+270,100+15*20);
	line(465-15*27+270,80+15*20,482-15*27+270,97+15*20);
	line(450-15*27+270,80+15*20,465-15*27+270,80+15*20);
	fillellipse(470-15*27+270,100+15*20,3,3);
	fillellipse(482-15*27+270,97+15*20,3,3);
		gg=getch();
		if(gg==0)
		gg=getch();
	if(gg==71)
		home();
	else if(gg=79)
		end();

}
void charec()
{
	cleardevice();
	setbkcolor(0);
	settextstyle(1,0,5);
	outtextxy(45,30,"Characteristics of Waves");
	settextstyle(3,0,1);
	outtextxy(3,100,"One of the simplest formulae for representing sinusoidal waves is:");
	delay(1000);
	outtextxy(230,140,"y=a.sin(kx-wt+@)");

	rectangle(200,137,400,167);
	delay(700);
	outtextxy(3,185,"This defines many wave characteristics shown in this SHM diagram ");
	delay(500);
	for(int i=240;i<=340;i+=80)
	{
		ellipse(i, 300, 0, 180,20, 50);
		ellipse(i+40,300,180,360,20,50);
	}
	line(220,300,400,300);
	line(220,240,220,350);
	delay(700);

	outtextxy(20,380,"1.Amplitude\t\t\t2.Frequency\t\t\t3.Wavelength\t\t\t4.Speed");
	char a;
	a=getch();
	while(a!=0)
	{
		switch(a)
		{
			case '1':
			setlinestyle(1, 0, 1);
			line(320,300,320,250);
			outtextxy(350,250,"Amplitude");
			delay(2000);
			setcolor(0);
			line(320,300,320,250);
			outtextxy(350,250,"Amplitude");
			setcolor(15);
			break;
			case '2':
			setcolor(2);
			ellipse(320, 300, 0, 180,20, 50);
			ellipse(320+40,300,180,360,20,50);
			setcolor(15);
			outtextxy(350,220,"Frequency=1/Time for this path");
			delay(3000);
			setcolor(15);
			ellipse(320, 300, 0, 180,20, 50);
			ellipse(320+40,300,180,360,20,50);
			setcolor(0);
			outtextxy(350,220,"Frequency=1/Time for this path");

			break;
			case '3':
			setlinestyle(1, 0, 1);
			line(240,250,320,250);
			outtextxy(350,250,"Wavelength");
			delay(2000);
			setcolor(0);
			line(240,250,320,250);
			outtextxy(350,250,"Wavelength");
			setcolor(15);
			break;
			case '4':
			setcolor(2);
			ellipse(320, 300, 0, 180,20, 50);
			ellipse(320+40,300,180,360,20,50);
			setcolor(15);
			outtextxy(350,220,"Wave Velocity=Path x frequency");
			delay(3000);
			setcolor(15);
			ellipse(320, 300, 0, 180,20, 50);
			ellipse(320+40,300,180,360,20,50);
			setcolor(0);
			outtextxy(350,220,"Wave Velocity=Path x frequency");
			break;
		}
		a=getch();
	}
	setlinestyle(0, 0, 1);
	if(a==0)
		a=getch();

	if(a==71)
		home();
		else if(a==79)
		end();

	getch();
}
void wavemenu()
{
	cleardevice();
	setbkcolor(0);
	settextstyle(1,0,5);
	outtextxy(229,40,"Waves");
	settextstyle(3,0,1);
	outtextxy(7,90,"Waves are disturbances caused in a medium due to simple harmonic ");
	outtextxy(11,110,"motion(SHM).They cause energy pulses without molecular movement.");
	outtextxy(17,135,"They are of utmost importance since sound,light etc are waves");
	outtextxy(15,160,"You can browse through this project for more importance:");
	for(int i=240;i<=340;i+=80)
	{
		ellipse(i, 300-40, 0, 180,20, 50);
		ellipse(i+40,300-40,180,360,20,50);
	}
	line(220,300-40,400,300-40);
	line(220,240-40,220,350-40);
	delay(500);
	outtextxy(0,360,"1.Characteristics\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t2.Types");
	outtextxy(260,390,"3.Properties");
	setcolor(15);
	char choi=getch();
	if(choi=='1')
		charec();
	else if(choi=='2')
		types();
	else if(choi=='3')
		prop();
	else if(choi==0)
	choi=getch();
	if(choi==71)
		home();
	else
		end();
	cleardevice();
}


int open()
{

	settextstyle(4, 0, 6);
	setbkcolor(0);
	for(int i=20;i<=580;i+=80)
	{
		ellipse(i, 400, 0, 180,20, 30);
		delay(500);
		ellipse(i+40,400,180,360,20,30);
		delay(500);
	}
	fillellipse(50,50,50,50);
	for(int j=1;j<=15;j++)
	{
		if(j==8)
			continue;
		setcolor(j);
		setfillstyle(1,j);
		fillellipse(50,50,50,50);
		delay(300);
		for(int l=0;l<=16;l++)
			{
			line(85,85+l,100,100+l);
			delay(300);
			line(100,100+l,210,210+l);
			}
		delay(500);
		setcolor(j);
		outtextxy(220,200,"W");
		delay(400);
		setcolor(j);
		outtextxy(256,200,"A");delay(400);
		setcolor(j);
		outtextxy(294,200,"V");delay(400);
		setcolor(j);
		outtextxy(326,200,"E");delay(400);
		setcolor(j);
		outtextxy(358,200,"S");
		settextstyle(1, 0, 1);
		outtextxy(294,265,"Press enter to continue");

		for(int o=0;o<=4;o++)
		{
		sound(500);
		setcolor(j);
		setfillstyle(1,j);
		line(450-o*20,80+o*20,470-o*20,100+o*20);
		line(465-o*20,80+o*20,482-o*20,97+o*20);
		line(450-o*20,80+o*20,465-o*20,80+o*20);
		fillellipse(470-o*20,100+o*20,3,3);
		fillellipse(482-o*20,97+o*20,3,3);
		setcolor(j);
		line(552,52,580,80);
		arc(545,45,225,45,10);
		delay(300);
		setcolor(0);
		arc(545,45,225,45,10);
		setcolor(j);
		arc(545,45,205,25,10);
		delay(300);
		setcolor(0);
		arc(545,45,205,25,10);
		setcolor(j);
		arc(545,45,225,45,10);
		delay(300);
		setcolor(0);
		arc(545,45,225,45,10);
		setcolor(j);
		arc(545,45,245,65,10);
		delay(300);
		setcolor(0);
		arc(545,45,245,65,10);
		setcolor(j);
		line(552,52,580,80);
		arc(545,45,225,45,10);
		setcolor(0);
		setfillstyle(1,0);
		line(450-o*20,80+o*20,470-o*20,100+o*20);
		line(465-o*20,80+o*20,482-o*20,97+o*20);
		line(450-o*20,80+o*20,465-o*20,80+o*20);
		fillellipse(470-o*20,100+o*20,3,3);
		fillellipse(482-o*20,97+o*20,3,3);
		nosound();
		}
		setcolor(j);
		setfillstyle(1,j);
		line(450,80,470,100);
		line(465,80,482,97);
		line(450,80,465,80);
		fillellipse(470,100,3,3);
		fillellipse(482,97,3,3);

		settextstyle(4, 0, 6);

		for(int  k=0;k<=580;k+=80)
		{


			fillellipse(k,400,5,5);
			delay(300);
			setcolor(0);
			setfillstyle(1,0);
			fillellipse(k,400,5,5);
			setcolor(15);
			for(i=20;i<=580;i+=80)
			{
				ellipse(i,400,0,180,20,30);
				ellipse(i+40,400,180,360,20,30);
			}
			setfillstyle(1,j);
			fillellipse(k+20,370,5,5);
			delay(300);
			setcolor(0);
			setfillstyle(1,0);
			fillellipse(k+20,370,5,5);
			setcolor(15);
			for(i=20;i<=580;i+=80)
			{
				ellipse(i,400,0,180,20,30);
				ellipse(i+40,400,180,360,20,30);
			}
			setfillstyle(1,j);
			fillellipse(k+40,400,5,5);
			delay(300);
			setcolor(0);
			setfillstyle(1,0);
			fillellipse(k+40,400,5,5);
			setcolor(15);
			for(i=20;i<=580;i+=80)
			{
				ellipse(i,400,0,180,20,30);
				ellipse(i+40,400,180,360,20,30);
			}
			setfillstyle(1,j);
			fillellipse(k+60,430,5,5);
			delay(300);
			setcolor(0);
			setfillstyle(1,0);
			fillellipse(k+60,430,5,5);
			setcolor(15);
			for(i=20;i<=580;i+=80)
			{
				ellipse(i,400,0,180,20,30);
				ellipse(i+40,400,180,360,20,30);
			}
			setfillstyle(1,j);
		}
		if(j==15)
			j=1;
		if(kbhit())
			{
			char ww=getch();
			cleardevice();
			return(1);
			}
	}



}

void help()
{
	cleardevice();
	setbkcolor(0);
	setcolor(15);
	settextstyle(1,0,5);
	outtextxy(238,30,"Help");
	arc(343,50,270,90,20+500);
	line(343,70+500,343,100+500);
	circle(343,115+500,2);
	char gg=getch();
	if(gg==0)
		gg=getch();
	if(gg==71)
		home();
	else if(gg=79)
		end();

}
void credit()
{
	cleardevice();
	setbkcolor(0);
	setcolor(15);
	settextstyle(1,0,5);
	outtextxy(238,30,"Credits");

	gotoxy(1,10);
	cout<<"Creation: "<<(char)1<<" Vinay "<<char(1);
	gotoxy(1,20);
	cout<<"Conception: "<<(char)1<<" Nagabharan "<<(char)1;
	gotoxy(1,30);
	cout<<"Our gracious thanks to "<<(char)1<<" Kavita ma'am "<<(char)1<<" and our "<<(char)1<<" dear friends "<<(char)1;
	setcolor(BROWN);
	line(320+200,220,320+200,260);
	circle(320+200,210,10);
	line(320+200,250,330+200,260);
	line(320+200,250,310+200,260);
	line(320+200,230,330+200,240);

	circle(316+200,207,1);
	circle(324+200,207,1);
	line(320+200,211,320+200,213);
	while(!kbhit())
	{
	line(320+200,230,310+200,240);
	delay(300);
	setcolor(0);
	line(320+200,230,310+200,240);
	setcolor(BROWN);
	line(320+200,230,306+200,230);
	delay(300);
	setcolor(0);
	line(319+200,230,306+200,230);
	setcolor(BROWN);

	line(320+200,230,310+200,240);
	delay(300);
	}
	char gg=getch();
		if(gg==0)
		gg=getch();
	if(gg==71)
		home();
	else if(gg=79)
		end();

}
void end()
{
	setcolor(4);
	cleardevice();
	setbkcolor(0);
	settextstyle(1,0,8);
	char ch[18][1]={"T","\0","H","\0","A","\0","N","\0","K","\0"," ","\0","Y","\0","O","\0","U","\0"};
	randomize();
	settextstyle(0, 0, 1);
	for(int loopn=1;loopn<=80;loopn++)
	{

		setcolor(random(15));
		outtextxy(random(getmaxx()),random(getmaxy()),"*");

	}
	for(int i=0;i<19;i++)
	{
		if(i%2==0)
		{
		for(int j=1;j<=8;j++)
		{
		setcolor(0);
		settextstyle(1,0,j-1);
		outtextxy(2+35*i,200,ch[i]);
		setcolor((i%14==0)?(i+9)%14:i%14);
		settextstyle(1,0,j);
		outtextxy(2+35*i,200,ch[i]);
		delay(200);
		}
		delay(100);
		}

	}
	setviewport(getmaxx()/2-50,350-50,getmaxx()/2-50,350+50,0);
	clearviewport();
	setviewport(0,0,getmaxx(),getmaxy(),0);
	setcolor(BROWN);
	circle(getmaxx()/2,350,40);
	circle(getmaxx()/2-18,330,2);
	circle(getmaxx()/2+18,330,2);
	line(getmaxx()/2,345,getmaxx()/2,355);
	for(int smil=45;smil>=0;smil--)
	{
	arc(getmaxx()/2,350,225+smil,315-smil,25);
	delay(125);
	}

	delay(1000);
	exit(0);


}
void piano()
{
	cleardevice();
	int n;
	char alpha;
	settextstyle(1,0,5);
	outtextxy(238,30,"Piano");
	cout<<"\n\n\n\n\n\n\n\n\n\n\nPress alphabets or numbers and 0 to stop piano"<<endl;
	alpha=getch();fflush(stdin);
	setcolor(3);
	line(getmaxx()/2-100,400,getmaxx()/2-100,350);
	line(getmaxx()/2+100,400,getmaxx()/2+100,350);

	while(alpha!='0')
	{

	for(int i=99;i>=0;i--)
	{
	setcolor(0);
	line(getmaxx()/2-i-1,400,getmaxx()/2-i-1,350);
	line(getmaxx()/2+i+1,400,getmaxx()/2+i+1,350);
	setcolor(3);
	line(getmaxx()/2-i,400,getmaxx()/2-i,350);
	line(getmaxx()/2+i,400,getmaxx()/2+i,350);
	delay(((int)alpha*10-5)/100);
	}
	setcolor(0);
	 line(getmaxx()/2,400,getmaxx()/2,350);
		setcolor(3);
	line(getmaxx()/2-100,400,getmaxx()/2-100,350);
	line(getmaxx()/2+100,400,getmaxx()/2+100,350);
	  switch(alpha)
	  {


	  case '1':sound((int)alpha*10-5);
			 while(!kbhit);


			 break;
	  case '2':sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case '3':sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case '4':sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case '5':sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case '6':sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case '7':sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case '8':sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case '9':sound((int)alpha*10-5);
			 while(!kbhit);

			 break;


	  case 'q':sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'w':sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'e':sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'r':sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 't':sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'y':sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'u':sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'i':sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'o':sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'p':sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'a':sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 's':sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'd':sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'f':sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'g':sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'h':sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'j':sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'k':sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'l':sound((int)alpha*10-5);
			 while(!kbhit);

			 break;

	  case 'z':sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'x':sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'c':sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'v':sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'b':sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'n':sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'm':sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'Q': sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'W': sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'E':  sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'R':  sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'T':  sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'Y':  sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'U':  sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'I':  sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'O':  sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'P':  sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'A':  sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'S':  sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'D':  sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'F':  sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'G':  sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'H':  sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'J':  sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'K':  sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'L':  sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'Z':  sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'X':  sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'C':  sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'V':  sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'B':  sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'N':  sound((int)alpha*10-5);
			 while(!kbhit);

			 break;
	  case 'M':  sound((int)alpha*10-5);
			 while(!kbhit);

			 break;


	  default:    sound(0);
			 while(!kbhit);


			 break;
	  }
	  gotoxy(15,15);
	  cout<<"Frequency = "<<(int)alpha*10-5<<"Hz";
	  gotoxy(15,16);
	  float a=(float)alpha*10.0-5.0;
	  cout<<"Wavelength ="<<330.0/a <<"m";
	  alpha=getch();
	  fflush(stdin);

	}
	nosound();
		char a=getch();
		if(a==0)
		a=getch();
		if(a==59)
		wavemenu();
		else if(a==60)
		credit();
		else if(a==62)
		help();
		else
		end();

	closegraph();

}
void home()
{
	cleardevice();
	setcolor(15);
	settextstyle(3,0,5);
	setbkcolor(0);
	outtextxy(getmaxx()/2-75,getmaxy()/2-15,"Waves");
	int x[]={0,90,230,370, 460};
	int y[]={280,145,10,145,280};
	int col=0;
	do
	{
	for(int i=0;i<5;i++)
	{

		setcolor(0);
		lineto(50+x[i],50+y[i]);
		setcolor(15);
		lineto(100+x[i],50+y[i]);
		lineto(140+x[i],70+y[i]);
		lineto(140+x[i],120+y[i]);
		lineto(100+x[i],140+y[i]);
		lineto(50+x[i],140+y[i]);
		lineto(10+x[i],120+y[i]);
		lineto(10+x[i],70+y[i]);
		lineto(50+x[i],50+y[i]);
		}
		settextstyle(1,0,3);
		setcolor((col%15==7||col%15==8)?col%15+4:col%15);
		outtextxy(40,344,"Music");
		outtextxy(57,373,"F3");
		setcolor((col%15+1==7||col%15+1==8)?col%15+5:col%15+1);
		outtextxy(130,214,"Credits ");
		outtextxy(147,240,"F2");
		setcolor((col%15+2==7||col%15+2==8)?col%15+6:col%15+2);
		outtextxy(265,80,"Project ");
		outtextxy(290,115,"F1");
		setcolor((col%15+3==7)?col%15+7:col%15+3);
		outtextxy(420,214,"Help ");
		outtextxy(425,240,"F4");
		setcolor((col%15+4==7)?col%15+8:col%15+4);
		outtextxy(509,344,"Exit ");
		outtextxy(511,373,"End");
		col++;
		delay(600);
		}while(!kbhit());
		setcolor(15);
		char a=getch();
		if(a==0)
		a=getch();
		if(a==59)
		wavemenu();
		else if(a==60)
		credit();
		else if(a==61)
		piano();
		else if(a==62)
		help();
		else if(a==79)
		end();

}

