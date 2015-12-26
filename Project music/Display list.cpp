#include<graphics.h>
#include<iostream>
#include<fstream>
#include "class.h"
extern char nam[30];
void menu::display()
{
     initwindow(1020,720);
     readimagefile("bg.jpg",0,0,1020,720);
     setcolor(11);
     settextstyle(9,HORIZ_DIR,6);
     outtextxy(160,10,"List of composed music");
     settextstyle(9, HORIZ_DIR, 1);
     moveto(25,638);
     setcolor(14);
     outtext("BACK");
     settextstyle(9, HORIZ_DIR, 4);
     setcolor(10);
     outtextxy(450,100,"Show list");
     int x,y;
     while(1)
{
     while (!ismouseclick(WM_LBUTTONDOWN));
     if(ismouseclick(WM_LBUTTONDOWN))
     getmouseclick(WM_LBUTTONDOWN,x,y);
     if((x>10)&&(y>625)&&(x<97)&&(y<675))
     homepage();
     else if((x>450)&&(y>100)&&(x<615)&&(y<125));
     list();
     }
    
    }
                
void menu::list()
{
     ifstream disp;
     music d;
     disp.open("Recorded music.dat",ios::binary); 
     int i=0;
     setcolor(12);
     settextstyle(9,HORIZ_DIR,2 );
     while(disp.read((char*)&d,sizeof(music)))
     {
                delay(500);
                outtextxy(450,150+i,d.name);
                i+=30;
                }
                disp.close();
    setcolor(14);
    settextstyle(9,HORIZ_DIR,4 );
    delay(500);
    outtextxy(200,500,"Which one would you like to hear ?");
    graphic_gets(nam,350,550,0,11,0,20);
    play();
}
