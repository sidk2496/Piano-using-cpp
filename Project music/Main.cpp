#include<graphics.h>
#include<iostream>
#include "class.h"
using namespace std;
void compose();
void play();
int t;

void menu::homepage()
{   
    initwindow(1020,720);
    readimagefile("img4.jpg",0,0,1020,900);
    PlaySound("Music.WAV", NULL, SND_FILENAME | SND_ASYNC);
    moveto(200,10);
    setcolor(14);
    settextstyle(9, HORIZ_DIR,8 );
    outtext("'RAAGAS..!'");
    moveto(235,640);
    setcolor(11);
    settextstyle(9, HORIZ_DIR,4);
    outtext("By Siddharth.K");
    for(int i=1;i<13;i++)
    {
    moveto(30,120);
    setcolor(i);
    settextstyle(6, HORIZ_DIR,4);
    outtext("ARE YOU READY FOR AN AMAZING JOURNEY "); 
    moveto(40,150);
    setcolor(i);
    settextstyle(10, HORIZ_DIR,5);
    outtext("THROUGH THE WORLD OF CARNATIC MUSIC..?"); 
    delay(100);
}
    
    setcolor(11);
    moveto(15,300);
    settextstyle(10, HORIZ_DIR,5);
    outtext("Choose your option:");
    delay(500);
    settextstyle(10, HORIZ_DIR,4);
    setcolor(14);
    moveto(230,355);
    outtext("1.Play a Raaga");
    delay(250);
    moveto(230,405);
    outtext("2.Learn a Raaga");
    delay(250);
    moveto(230,455);
    outtext("3.Compose Music");
    delay(250);
    moveto(230,505);
    outtext("4.Play Recorded Music");
    delay(250);
    moveto(230,555);
    outtext("5.Exit");
    int x,y;
    while(1)
    {
        while (!ismouseclick(WM_LBUTTONDOWN));
              if(ismouseclick(WM_LBUTTONDOWN))
                   getmouseclick(WM_LBUTTONDOWN,x,y);
                   
                                         if((x>230)&&(y>355)&&(x<550)&&(y<380))
                                         {t=1;
                                         raagalist();
                                         }
                                        
                                         if((x>230)&&(y>405)&&(x<550)&&(y<430))
                                         {t=2;
                                         raagalist();
                                         }
                                         
                                         if((x>230)&&(y>455)&&(x<550)&&(y<480)) 
                                         compose(); 
                                         
                                         if((x>230)&&(y>505)&&(x<630)&&(y<530)) 
                                         display();
                                         
                                         if((x>230)&&(y>555)&&(x<550)&&(y<580)) 
                                         thankyou();                        
};
}



void menu::raagalist()
{
    initwindow(1020,720);
    readimagefile("img1.jpg",0,0,1020,900);
    PlaySound("The Flute Song.WAV", NULL, SND_FILENAME | SND_ASYNC);
    moveto(50,20);
    setcolor(14);
    settextstyle(9, HORIZ_DIR,5);
    outtext("RAAGA LIST :");
    settextstyle(10, HORIZ_DIR,4);
    setcolor(14);
    delay(300);
    moveto(80,100);
    outtext("1.Kanakangi");
    delay(300);
    moveto(80,150);
    outtext("2.Mayamalavagowla");
    delay(300);
    moveto(80,200);
    outtext("3.Natakapriya");
    delay(300);
    moveto(80,250);
    outtext("4.Rasikapriya");
    delay(300);
    moveto(80,300);
    outtext("5.Shankarabharana");
    settextstyle(9, HORIZ_DIR, 1);
    moveto(25,638);
    outtext("BACK");
    int x,y;
    while(1)
    {
    while(!ismouseclick(WM_LBUTTONDOWN));
         if(ismouseclick(WM_LBUTTONDOWN))
              getmouseclick(WM_LBUTTONDOWN,x,y);
                                         
                                         if((x>80)&&(y>100)&&(x<280)&&(y<125))
                                         {if(t==1)
                                         kanakangi();
                                         if(t==2);
                                         learnkanakangi();
                                         }
                                         if((x>80)&&(y>150)&&(x<280)&&(y<175))
                                         {if(t==1)
                                         mayamalavagowla();
                                         if(t==2);
                                         learnmayamalavagowla();
                                         }
                                         
                                         if((x>80)&&(y>200)&&(x<280)&&(y<225))
                                         {if(t==1)
                                         natakapriya(); 
                                         if(t==2);
                                         learnnatakapriya(); 
                                         }                                       
                                         if((x>80)&&(y>250)&&(x<280)&&(y<275))
                                         {if(t==1)
                                         rasikapriya();
                                         if(t==2);
                                         learnrasikapriya();
                                         }
                                         if((x>80)&&(y>300)&&(x<280)&&(y<325)) 
                                         {if(t==1)
                                         shankarabharana();   
                                         if(t==2);
                                         learnshankarabharana();   
                                         } 
                                         if((x>10)&&(y>625)&&(x<97)&&(y<675))
                                         homepage();
    };
}


void menu::thankyou()
{
    initwindow(1020,720);
    readimagefile("ThankYou.jpg",0,0,1020,900);
    for(int i=1;i<16;i++)
    {moveto(380,10);
    setcolor(i); 
    settextstyle(9, HORIZ_DIR, 4); 
    outtext("THANK YOU..!");
    moveto(235,680);
    settextstyle(9, HORIZ_DIR,4);
    outtext("By Samrudh.J and Siddharth.K");
    delay(200);
    }
    PlaySound("APPLAUS.WAV", NULL, SND_FILENAME | SND_ASYNC);
}

void createfile();

int main()
{createfile();
menu m1;
m1.homepage();
system("pause");
}
