#include<graphics.h>
#include<string.h>
#include<iostream>
#include<fstream>
#include "class.h"
using namespace std;

struct infor
{char name[20];
char aarohana[25];
char avarohana[25];
char chakra[10];
char melakartha[5];
}tempor;

void menu::learnkanakangi()
{
    initwindow(1020,720);
    readimagefile("Kanakangi.jpg",100,400,920,700);
    moveto(150,10);
    setcolor(14);
    settextstyle(9, HORIZ_DIR,8 );
    outtext("'KANAKANGI'");
    setcolor(10);
    settextstyle(6, HORIZ_DIR,4);
    moveto(80,110);
    outtext("CLICK ON THE KEY TO PLAY THE NOTES");
    setcolor(13);
    moveto(20,160);
    outtext("CLICK ON 'PLAY RAAGA' TO HEAR THE RAAGA");
    ifstream reader;
    reader.open("info.dat", ios::binary);
    moveto(150,10);
    for(int i=0;i<5;i++)
    {reader.read((char *)&tempor,sizeof(tempor));
    if(stricmp(tempor.name,"Kanakangi")==0)
      { settextstyle(6, HORIZ_DIR,4);
        setcolor(7);
        moveto(200,220);
        outtext("Aarohana : ");
        moveto(425,220);
        outtext(tempor.aarohana);
        setcolor(2);
        settextstyle(6, HORIZ_DIR,4);
        moveto(200,275);
        outtext("Avrohana : ");
        moveto(425,275);
        outtext(tempor.avarohana);
      }
    }
    setcolor(14);
    settextstyle(9, HORIZ_DIR, 1);
    moveto(20,680);
    outtext("BACK");
    settextstyle(9, HORIZ_DIR, 3);
    moveto(430,350);
    outtext("PLAY RAAGA");
    int x,y;
    while(1)
    {
    while(!ismouseclick(WM_LBUTTONDOWN));
    if(ismouseclick(WM_LBUTTONDOWN))
          getmouseclick(WM_LBUTTONDOWN,x,y);
          
                                         if((x>15)&&(y>680)&&(x<75)&&(y<730))
                                         raagalist();
                                         if((x>120)&&(y>580)&&(x<200)&&(y<680))
                                          PlaySound("S1.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>180)&&(y>440)&&(x<220)&&(y<530))
                                          PlaySound("R1.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>220)&&(y>580)&&(x<300)&&(y<680))
                                          PlaySound("R2.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>420)&&(y>580)&&(x<500)&&(y<680))
                                          PlaySound("M1.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>520)&&(y>580)&&(x<600)&&(y<680))
                                          PlaySound("P.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>580)&&(y>440)&&(x<620)&&(y<530))
                                          PlaySound("D1.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>620)&&(y>580)&&(x<700)&&(y<680))
                                          PlaySound("D2.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>820)&&(y>580)&&(x<900)&&(y<680))
                                          PlaySound("S2.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>430)&&(y>350)&&(x<650)&&(y<380))
                                         PlaySound("Kanakangi.WAV", NULL, SND_FILENAME | SND_ASYNC);
    };
}


void menu::learnmayamalavagowla()
{
    initwindow(1020,720);
    readimagefile("Mayamalavagowla.jpg",100,400,920,700);
    moveto(80,10);
    setcolor(14);
    settextstyle(9, HORIZ_DIR,6);
    outtext("'MAYAMALAVAGOWLA'");
    setcolor(10);
    settextstyle(6, HORIZ_DIR,4);
    moveto(80,110);
    outtext("CLICK ON THE KEY TO PLAY THE NOTES");
    setcolor(13);
    moveto(20,160);
    outtext("CLICK ON 'PLAY RAAGA' TO HEAR THE RAAGA");
    ifstream reader;
    reader.open("info.dat", ios::binary);
    moveto(150,10);
    for(int i=0;i<5;i++)
    {reader.read((char *)&tempor,sizeof(tempor));
    if(stricmp(tempor.name,"Mayamalavagowla")==0)
      { settextstyle(6, HORIZ_DIR,4);
        setcolor(7);
        moveto(200,220);
        outtext("Aarohana : ");
        moveto(425,220);
        outtext(tempor.aarohana);
        setcolor(2);
        settextstyle(6, HORIZ_DIR,4);
        moveto(200,275);
        outtext("Avrohana : ");
        moveto(425,275);
        outtext(tempor.avarohana);
      }
    }
    setcolor(14);
    settextstyle(9, HORIZ_DIR, 1);
    moveto(20,680);
    outtext("BACK");
    settextstyle(9, HORIZ_DIR, 3);
    moveto(430,350);
    outtext("PLAY RAAGA");
   
    int x,y;
    while(1)
    {
    while(!ismouseclick(WM_LBUTTONDOWN));
    if(ismouseclick(WM_LBUTTONDOWN))
          
                                         getmouseclick(WM_LBUTTONDOWN,x,y);
                                         if((x>15)&&(y>680)&&(x<75)&&(y<730))
                                         raagalist();
                                         if((x>120)&&(y>580)&&(x<200)&&(y<680))
                                          PlaySound("S1.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>180)&&(y>440)&&(x<220)&&(y<530))
                                          PlaySound("R1.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>320)&&(y>580)&&(x<400)&&(y<680))
                                          PlaySound("G3.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>420)&&(y>580)&&(x<500)&&(y<680))
                                          PlaySound("M1.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>520)&&(y>580)&&(x<600)&&(y<680))
                                          PlaySound("P.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>580)&&(y>440)&&(x<620)&&(y<530))
                                          PlaySound("D1.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>720)&&(y>580)&&(x<800)&&(y<680))
                                          PlaySound("N3.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>820)&&(y>580)&&(x<900)&&(y<680))
                                          PlaySound("S2.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>430)&&(y>350)&&(x<650)&&(y<380))
                                         PlaySound("Mayamalavagowla.WAV", NULL, SND_FILENAME | SND_ASYNC);
    };
}



void menu::learnnatakapriya()
{
    initwindow(1020,720);
    readimagefile("Natakapriya.jpg",100,400,920,700);
    moveto(100,10);
    setcolor(14);
    settextstyle(9, HORIZ_DIR,8);
    outtext("'NATAKAPRIYA'");
    setcolor(10);
    settextstyle(6, HORIZ_DIR,4);
    moveto(80,110);
    outtext("CLICK ON THE KEY TO PLAY THE NOTES");
    setcolor(13);
    moveto(20,160);
    outtext("CLICK ON 'PLAY RAAGA' TO HEAR THE RAAGA");
    ifstream reader;
    reader.open("info.dat", ios::binary);
    moveto(150,10);
    for(int i=0;i<5;i++)
    {reader.read((char *)&tempor,sizeof(tempor));
    if(stricmp(tempor.name,"Natakapriya")==0)
      { settextstyle(6, HORIZ_DIR,4);
        setcolor(7);
        moveto(200,220);
        outtext("Aarohana : ");
        moveto(425,220);
        outtext(tempor.aarohana);
        setcolor(2);
        settextstyle(6, HORIZ_DIR,4);
        moveto(200,275);
        outtext("Avrohana : ");
        moveto(425,275);
        outtext(tempor.avarohana);
      }
    }
    setcolor(14);
    settextstyle(9, HORIZ_DIR, 1);
    moveto(20,680);
    outtext("BACK");
    settextstyle(9, HORIZ_DIR, 3);
    moveto(430,350);
    outtext("PLAY RAAGA");
    int x,y;
    while(1)
    {
    while(!ismouseclick(WM_LBUTTONDOWN));
    if(ismouseclick(WM_LBUTTONDOWN))
          
                                         getmouseclick(WM_LBUTTONDOWN,x,y);
                                         if((x>15)&&(y>680)&&(x<75)&&(y<730))
                                         raagalist();
                                         if((x>120)&&(y>580)&&(x<200)&&(y<680))
                                          PlaySound("S1.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>180)&&(y>440)&&(x<230)&&(y<530))
                                          PlaySound("R1.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>280)&&(y>440)&&(x<340)&&(y<530))
                                          PlaySound("G2.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>420)&&(y>580)&&(x<500)&&(y<680))
                                          PlaySound("M1.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>520)&&(y>580)&&(x<600)&&(y<680))
                                          PlaySound("P.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>620)&&(y>580)&&(x<700)&&(y<680))
                                          PlaySound("D2.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>680)&&(y>440)&&(x<740)&&(y<530))
                                          PlaySound("N2.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>820)&&(y>580)&&(x<900)&&(y<680))
                                          PlaySound("S2.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>430)&&(y>350)&&(x<650)&&(y<380))
                                         PlaySound("Natakapriya.WAV", NULL, SND_FILENAME | SND_ASYNC);
    };
}



void menu::learnrasikapriya()
{
    initwindow(1020,720);
    readimagefile("Rasikapriya.jpg",100,400,920,700);
    moveto(110,10);
    setcolor(14);
    settextstyle(9, HORIZ_DIR,8);
    outtext("'RASIKAPRIYA'");
    setcolor(10);
    settextstyle(6, HORIZ_DIR,4);
    moveto(80,110);
    outtext("CLICK ON THE KEY TO PLAY THE NOTES");
    setcolor(13);
    moveto(20,160);
    outtext("CLICK ON 'PLAY RAAGA' TO HEAR THE RAAGA");
    ifstream reader;
    reader.open("info.dat", ios::binary);
    moveto(150,10);
    for(int i=0;i<5;i++)
    {reader.read((char *)&tempor,sizeof(tempor));
    if(stricmp(tempor.name,"Rasikapriya")==0)
      { settextstyle(6, HORIZ_DIR,4);
        setcolor(7);
        moveto(200,220);
        outtext("Aarohana : ");
        moveto(425,220);
        outtext(tempor.aarohana);
        setcolor(2);
        settextstyle(6, HORIZ_DIR,4);
        moveto(200,275);
        outtext("Avrohana : ");
        moveto(425,275);
        outtext(tempor.avarohana);
      }
    }
    setcolor(14);
    settextstyle(9, HORIZ_DIR, 1);
    moveto(20,680);
    outtext("BACK");
    settextstyle(9, HORIZ_DIR, 3);
    moveto(430,350);
    outtext("PLAY RAAGA");
    setcolor(14);
    settextstyle(9, HORIZ_DIR,3);
    moveto(470,440);
    outtext("CHECK");
    int x,y;
    while(1)
    {
    while(!ismouseclick(WM_LBUTTONDOWN));
    if(ismouseclick(WM_LBUTTONDOWN))
          
                                         getmouseclick(WM_LBUTTONDOWN,x,y);
                                         if((x>15)&&(y>680)&&(x<75)&&(y<730))
                                         raagalist();
                                         if((x>120)&&(y>580)&&(x<200)&&(y<680))
                                          PlaySound("S1.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>280)&&(y>440)&&(x<340)&&(y<530))
                                          PlaySound("G2.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>320)&&(y>580)&&(x<400)&&(y<680))
                                          PlaySound("G3.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>470)&&(y>440)&&(x<530)&&(y<530))
                                          PlaySound("M2.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>520)&&(y>580)&&(x<600)&&(y<680))
                                          PlaySound("P.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>680)&&(y>440)&&(x<740)&&(y<530))
                                          PlaySound("N2.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>720)&&(y>580)&&(x<800)&&(y<680))
                                          PlaySound("N3.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>820)&&(y>580)&&(x<900)&&(y<680))
                                          PlaySound("S2.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>430)&&(y>350)&&(x<650)&&(y<380))
                                         PlaySound("Rasikapriya.WAV", NULL, SND_FILENAME | SND_ASYNC);
    };
}



void menu::learnshankarabharana()
{
    initwindow(1020,720);
    readimagefile("Shankarabharana.jpg",100,400,920,700);
    moveto(100,10);
    setcolor(14);
    settextstyle(9, HORIZ_DIR,6);
    outtext("'SHANKARABHARANA'");
    setcolor(10);
    settextstyle(6, HORIZ_DIR,4);
    moveto(80,110);
    outtext("CLICK ON THE KEY TO PLAY THE NOTES");
    setcolor(13);
    moveto(20,160);
    outtext("CLICK ON 'PLAY RAAGA' TO HEAR THE RAAGA");
    ifstream reader;
    reader.open("info.dat", ios::binary);
    moveto(150,10);
    for(int i=0;i<5;i++)
    {reader.read((char *)&tempor,sizeof(tempor));
    if(stricmp(tempor.name,"Shankarabharana")==0)
      { settextstyle(6, HORIZ_DIR,4);
        setcolor(7);
        moveto(200,220);
        outtext("Aarohana : ");
        moveto(425,220);
        outtext(tempor.aarohana);
        setcolor(2);
        settextstyle(6, HORIZ_DIR,4);
        moveto(200,275);
        outtext("Avrohana : ");
        moveto(425,275);
        outtext(tempor.avarohana);
      }
    }
    setcolor(14);
    settextstyle(9, HORIZ_DIR, 1);
    moveto(20,680);
    outtext("BACK");
    settextstyle(9, HORIZ_DIR, 3);
    moveto(430,350);
    outtext("PLAY RAAGA");
    int x,y;
    while(1)
    {
    while(!ismouseclick(WM_LBUTTONDOWN));
    if(ismouseclick(WM_LBUTTONDOWN))
          
                                         getmouseclick(WM_LBUTTONDOWN,x,y);
                                         if((x>15)&&(y>680)&&(x<75)&&(y<730))
                                         raagalist();
                                         if((x>120)&&(y>580)&&(x<200)&&(y<680))
                                          PlaySound("S1.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>220)&&(y>580)&&(x<300)&&(y<680))
                                          PlaySound("R2.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>320)&&(y>580)&&(x<400)&&(y<680))
                                          PlaySound("G3.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>420)&&(y>580)&&(x<500)&&(y<680))
                                          PlaySound("M1.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>520)&&(y>580)&&(x<600)&&(y<680))
                                          PlaySound("P.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>620)&&(y>580)&&(x<700)&&(y<680))
                                          PlaySound("D2.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>720)&&(y>580)&&(x<800)&&(y<680))
                                          PlaySound("N3.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>820)&&(y>580)&&(x<900)&&(y<680))
                                          PlaySound("S2.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         if((x>430)&&(y>350)&&(x<650)&&(y<380))
                                         PlaySound("Shankarabharana.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         
    };
}
