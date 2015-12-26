#include<graphics.h>
#include<conio.h>
#include<iostream>
#include<fstream>
#include "class.h"
using namespace std;


char ch[30];
void menu::compose()
{
    initwindow(1020,720);
    readimagefile("music-background.jpg",0,0,1020,720);
    moveto(150,10);
    setcolor(14);
    settextstyle(9,HORIZ_DIR,8 );
    outtext("Compose Music");
    readimagefile("01_igrand_piano_ipad_gui_choos.jpg",150,180,870,540);
    readimagefile("Symbol Red Stop.jpg",510,580,600,680);
    readimagefile("download.jpg",400,580,490,680); 
    settextstyle(9, HORIZ_DIR, 1);
    moveto(25,638);
    outtext("BACK");

    keyboard();

    //graphic_gets(ch, 90, 90, 14, 14, 10, 10);
  }

void menu::keyboard()
{
int x,y;
while(1)
{    
while (!ismouseclick(WM_LBUTTONDOWN));
if(ismouseclick(WM_LBUTTONDOWN))
getmouseclick(WM_LBUTTONDOWN,x,y);

if((x>10)&&(y>625)&&(x<97)&&(y<675))
    homepage();

if((x>400)&&(y>580)&&(x<490)&&(y<680))
 {
     setfillstyle(1,2);
     fillellipse(446,630,19,19);
    int p[10];
    p[0]=535;
    p[1]=608;
    p[2]=572;
    p[3]=608;
    p[4]=572;
    p[5]=648;
    p[6]=535;
    p[7]=648;
    p[8]=535;
    p[9]=608;
    setfillstyle(1,14);
    fillpoly(4,p);
    setcolor(10);
    outtextxy(100,125,"Enter name of the music you want to compose : ");
    graphic_gets(ch,600,125,0,11,1,20);
    char copy[30];
    int i=0;
        
while(1)
{
while (!ismouseclick(WM_LBUTTONDOWN));
    if(ismouseclick(WM_LBUTTONDOWN))
          getmouseclick(WM_LBUTTONDOWN,x,y);
          
                                         if((x>150)&&(y>420)&&(x<250)&&(y<540))
                                         {PlaySound("S1.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                          copy[i]='C';
                                          i++;
                                         }
         
                                         if((x>250)&&(y>420)&&(x<330)&&(y<540))
                                         {PlaySound("R2.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                          copy[i]='D';
                                          i++;
                                         }
     
                                         if((x>330)&&(y>420)&&(x<425)&&(y<540)) 
                                         {PlaySound("G3.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                          copy[i]='E';
                                          i++;
                                         }          
       
                                         if((x>425)&&(y>420)&&(x<510)&&(y<540)) 
                                         {PlaySound("M1.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                          copy[i]='F';
                                          i++;
                                         }
        
                                         if((x>510)&&(y>420)&&(x<600)&&(y<540)) 
                                         {PlaySound("P.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                          copy[i]='G';
                                          i++;
                                         }
   
                                         if((x>600)&&(y>420)&&(x<685)&&(y<540)) 
                                         {PlaySound("D2.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                          copy[i]='A';
                                          i++;
                                         }
   
                                         if((x>685)&&(y>420)&&(x<780)&&(y<540)) 
                                         {PlaySound("N3.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                          copy[i]='B';
                                          i++;
                                         }
       
                                         if((x>780)&&(y>420)&&(x<870)&&(y<540)) 
                                         {PlaySound("S2.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                          copy[i]='c';
                                          i++;
                                         }
  
                                         if((x>210)&&(y>215)&&(x<260)&&(y<420)) 
                                         {PlaySound("R1.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                          copy[i]='d';
                                          i++;
                                         }
       
                                         if((x>310)&&(y>215)&&(x<360)&&(y<420)) 
                                         {PlaySound("G2.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                          copy[i]='e';
                                          i++;
                                         }
    
                                         if((x>490)&&(y>215)&&(x<540)&&(y<420)) 
                                         {PlaySound("M2.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                          copy[i]='g';
                                          i++;
                                         }

                                         if((x>580)&&(y>15)&&(x<630)&&(y<420)) 
                                         {PlaySound("D1.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                          copy[i]='a';
                                          i++;
                                         }
     
                                         if((x>675)&&(y>215)&&(x<725)&&(y<420)) 
                                         {PlaySound("N2.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                          copy[i]='b';
                                          i++;
                                         }
                                         
                                         if((x>510)&&(y>580)&&(x<600)&&(y<680))
                                         {readimagefile("download.jpg",400,580,490,680);
                                          readimagefile("Symbol Red Stop.jpg",510,580,600,680);
                                          break;                                  
                                         } 
          }

    music g1;
    ofstream fwrite;
    fwrite.open("Recorded music.dat",ios::app);

    copy[i]='\0';
    strcpy(g1.name,ch);
    strcpy(g1.notes,copy);
    fwrite.write((char*)&g1,sizeof(g1));
    fwrite.close();

    
}
}
}



