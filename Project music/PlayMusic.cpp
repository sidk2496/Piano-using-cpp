#include<graphics.h>
#include<conio.h>
#include<iostream>
#include<fstream>
#include<string.h>
#include "class.h"
using namespace std;
char nam[30];
void menu::play()
{
     int flag=0;
     initwindow(1020,720);
     readimagefile("play_wallpap.jpg",0,0,1020,900);
     readimagefile("play2.jpg",400,300,600,500);
     setcolor(1);
     int t[6];
                     t[0]=472;
                     t[1]=352;
                     t[2]=472;
                     t[3]=445;
                     t[4]=554;
                     t[5]=396;
                     setfillstyle(1,1);
                     fillpoly(3,t);           
     settextstyle(9,HORIZ_DIR,1);
     moveto(25,638);
     setcolor(14);
     outtext("BACK");

     ifstream f;
     f.open("Recorded music.dat",ios::binary);
     music g2;
     int x,y;
    
     while(f)
     {
                 f.read((char*)&g2,sizeof(g2));
                 if(strcmp(g2.name,nam)==0)
     {
                 flag=1;
                 while(1)
     {
                 while (!ismouseclick(WM_LBUTTONDOWN));
                 if(ismouseclick(WM_LBUTTONDOWN))
                  getmouseclick(WM_LBUTTONDOWN,x,y);
          if((x>400)&&(y>300)&&(x<600)&&(y<500))
          {
                 setcolor(14);
                 int i=0;
                 int j=0;
   
                 setfillstyle(1,14);
                 fillpoly(3,t); 
                 while(g2.notes[i])
                 {
                
                 if(g2.notes[i]=='C')
                 {
                      PlaySound("S1.WAV", NULL, SND_FILENAME | SND_ASYNC);
                      outtextxy(10+j,10+j,"S1");
                      }
                 else if(g2.notes[i]=='D')
                 {
                      PlaySound("R2.WAV", NULL, SND_FILENAME | SND_ASYNC);
                      outtextxy(10+j,10+j,"R2");
                      }
                 else if(g2.notes[i]=='E')
                 {
                      PlaySound("G3.WAV", NULL, SND_FILENAME | SND_ASYNC);
                      outtextxy(10+j,10+j,"G3");
                      }
                 else if(g2.notes[i]=='F')
                 {
                      PlaySound("M1.WAV", NULL, SND_FILENAME | SND_ASYNC);
                      outtextxy(10+j,10+j,"M1");
                      }
                 else if(g2.notes[i]=='G')
                 {
                      PlaySound("P.WAV", NULL, SND_FILENAME | SND_ASYNC);
                      outtextxy(10+j,10+j,"P");
                      }
                 else if(g2.notes[i]=='A')
                 {
                      PlaySound("D2.WAV", NULL, SND_FILENAME | SND_ASYNC);
                      outtextxy(10+j,10+j,"D2");
                      }
                 else if(g2.notes[i]=='B')
                 {
                      PlaySound("N3.WAV", NULL, SND_FILENAME | SND_ASYNC);
                      outtextxy(10+j,10+j,"N3");
                      }
                 else if(g2.notes[i]=='c')
                 {
                      PlaySound("S2.WAV", NULL, SND_FILENAME | SND_ASYNC);
                      outtextxy(10+j,10+j,"S2");
                      }
                 else if(g2.notes[i]=='d')
                 {
                      PlaySound("R1.WAV", NULL, SND_FILENAME | SND_ASYNC);
                      outtextxy(10+j,10+j,"R1");
                      }
                 else if(g2.notes[i]=='e')
                 {
                      PlaySound("G2.WAV", NULL, SND_FILENAME | SND_ASYNC);
                      outtextxy(10+j,10+j,"G2");
                      }
                 else if(g2.notes[i]=='g')
                 {
                      PlaySound("M2.WAV", NULL, SND_FILENAME | SND_ASYNC);
                      outtextxy(10+j,10+j,"M2");
                      }
                 else if(g2.notes[i]=='a')
                 {
                      PlaySound("D1.WAV", NULL, SND_FILENAME | SND_ASYNC);
                      outtextxy(10+j,10+j,"D1");
                      }
                 else if(g2.notes[i]=='b')
                 {
                      PlaySound("N2.WAV", NULL, SND_FILENAME | SND_ASYNC);
                      outtextxy(10+j,10+j,"N2");
                      }
                      i++;j=j+50;
                      delay(1000);
                 }//while(g2.notes[i])
                  setcolor(1);
                  setfillstyle(1,1);
                  fillpoly(3,t);  
                 }//if
                 if((x>10)&&(y>625)&&(x<97)&&(y<675))
                 display();
                 }//while(1)
                 }
                 }
                 f.close();
                 if(flag==0)
                 outtextxy(350,250,"Sorry! Music could not be found");
                 }
