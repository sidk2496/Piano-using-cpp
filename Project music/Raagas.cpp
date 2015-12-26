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
}tempo;

void menu::kanakangi()
{
    initwindow(1020,720);
    readimagefile("Kanakangi.jpg",100,400,920,700);
    moveto(150,10);
    setcolor(14);
    settextstyle(9, HORIZ_DIR,8 );
    outtext("'KANAKANGI'");
    ifstream fileread;
    fileread.open("info.dat", ios::binary);
    moveto(150,10);
    for(int i=0;i<5;i++)
    {fileread.read((char *)&tempo,sizeof(tempo));
    if(stricmp(tempo.name,"Kanakangi")==0)
      { setcolor(11);
        settextstyle(6, HORIZ_DIR,5);
        moveto(275,100);
        outtext("Melakartha No  :  ");
        moveto(725,100);
        outtext(tempo.melakartha);
        setcolor(10);
        moveto(350,150);
        outtext("Chakra  :  ");
        moveto(600,150);
        outtext(tempo.chakra);
        settextstyle(6, HORIZ_DIR,4);
        setcolor(7);
        moveto(200,220);
        outtext("Aarohana : ");
        moveto(425,220);
        outtext(tempo.aarohana);
        setcolor(2);
        settextstyle(6, HORIZ_DIR,4);
        moveto(200,275);
        outtext("Avrohana : ");
        moveto(425,275);
        outtext(tempo.avarohana);
      }
    }

    PlaySound("Kanakangi.WAV", NULL, SND_FILENAME | SND_ASYNC);
    setcolor(14);
    settextstyle(9, HORIZ_DIR, 1);
    moveto(20,680);
    outtext("BACK");
    settextstyle(9, HORIZ_DIR, 3);
    moveto(430,350);
    outtext("PLAY AGAIN");
    int x,y;
    while(1)
    {
    while(!ismouseclick(WM_LBUTTONDOWN));
    if(ismouseclick(WM_LBUTTONDOWN))
          
                                         getmouseclick(WM_LBUTTONDOWN,x,y);
                                         if((x>15)&&(y>680)&&(x<75)&&(y<730))
                                         raagalist();
                                         if((x>430)&&(y>350)&&(x<650)&&(y<380))
                                         PlaySound("Kanakangi.WAV", NULL, SND_FILENAME | SND_ASYNC);
    };
}


void menu::mayamalavagowla()
{
    initwindow(1020,720);
    readimagefile("Mayamalavagowla.jpg",100,400,920,700);
    moveto(80,10);
    setcolor(14);
    settextstyle(9, HORIZ_DIR,6);
    outtext("'MAYAMALAVAGOWLA'");
    ifstream fileread;
    fileread.open("info.dat", ios::binary);
    moveto(150,10);
    for(int i=0;i<5;i++)
    {fileread.read((char *)&tempo,sizeof(tempo));
    if(stricmp(tempo.name,"Mayamalavagowla")==0)
      { setcolor(11);
        settextstyle(6, HORIZ_DIR,5);
        moveto(275,100);
        outtext("Melakartha No  :  ");
        moveto(725,100);
        outtext(tempo.melakartha);
        setcolor(10);
        moveto(350,150);
        outtext("Chakra  :  ");
        moveto(600,150);
        outtext(tempo.chakra);
        settextstyle(6, HORIZ_DIR,4);
        setcolor(7);
        moveto(200,220);
        outtext("Aarohana : ");
        moveto(425,220);
        outtext(tempo.aarohana);
        setcolor(2);
        settextstyle(6, HORIZ_DIR,4);
        moveto(200,275);
        outtext("Avrohana : ");
        moveto(425,275);
        outtext(tempo.avarohana);
      }
    }
    PlaySound("Mayamalavagowla.WAV", NULL, SND_FILENAME | SND_ASYNC);
    setcolor(14);
    settextstyle(9, HORIZ_DIR, 1);
    moveto(20,680);
    outtext("BACK");
    settextstyle(9, HORIZ_DIR, 3);
    moveto(430,350);
    outtext("PLAY AGAIN");
    int x,y;
    while(1)
    {
    while(!ismouseclick(WM_LBUTTONDOWN));
    if(ismouseclick(WM_LBUTTONDOWN))
          
                                         getmouseclick(WM_LBUTTONDOWN,x,y);
                                         if((x>15)&&(y>680)&&(x<75)&&(y<730))
                                         raagalist();
                                         if((x>430)&&(y>350)&&(x<650)&&(y<380))
                                         PlaySound("Mayamalavagowla.WAV", NULL, SND_FILENAME | SND_ASYNC);
    };
}



void menu::natakapriya()
{
    initwindow(1020,720);
    readimagefile("Natakapriya.jpg",100,400,920,700);
    moveto(100,10);
    setcolor(14);
    settextstyle(9, HORIZ_DIR,8);
    outtext("'NATAKAPRIYA'");
        ifstream fileread;
    fileread.open("info.dat", ios::binary);
    moveto(150,10);
    for(int i=0;i<5;i++)
    {fileread.read((char *)&tempo,sizeof(tempo));
    if(stricmp(tempo.name,"Natakapriya")==0)
      { setcolor(11);
        settextstyle(6, HORIZ_DIR,5);
        moveto(275,100);
        outtext("Melakartha No  :  ");
        moveto(725,100);
        outtext(tempo.melakartha);
        setcolor(10);
        moveto(350,150);
        outtext("Chakra  :  ");
        moveto(600,150);
        outtext(tempo.chakra);
        settextstyle(6, HORIZ_DIR,4);
        setcolor(7);
        moveto(200,220);
        outtext("Aarohana : ");
        moveto(425,220);
        outtext(tempo.aarohana);
        setcolor(2);
        settextstyle(6, HORIZ_DIR,4);
        moveto(200,275);
        outtext("Avrohana : ");
        moveto(425,275);
        outtext(tempo.avarohana);
      }
    }
    PlaySound("Natakapriya.WAV", NULL, SND_FILENAME | SND_ASYNC);
    setcolor(14);
    settextstyle(9, HORIZ_DIR, 1);
    moveto(20,680);
    outtext("BACK");
       settextstyle(9, HORIZ_DIR, 3);
    moveto(430,350);
    outtext("PLAY AGAIN");
    int x,y;
    while(1)
    {
    while(!ismouseclick(WM_LBUTTONDOWN));
    if(ismouseclick(WM_LBUTTONDOWN))
          
                                         getmouseclick(WM_LBUTTONDOWN,x,y);
                                         if((x>15)&&(y>680)&&(x<75)&&(y<730))
                                         raagalist();
                                         if((x>430)&&(y>350)&&(x<650)&&(y<380))
                                         PlaySound("Natakapriya.WAV", NULL, SND_FILENAME | SND_ASYNC);
    };
}



void menu::rasikapriya()
{
    initwindow(1020,720);
    readimagefile("Rasikapriya.jpg",100,400,920,700);
    moveto(110,10);
    setcolor(14);
    settextstyle(9, HORIZ_DIR,8);
    outtext("'RASIKAPRIYA'");
        ifstream fileread;
    fileread.open("info.dat", ios::binary);
    moveto(150,10);
    for(int i=0;i<5;i++)
    {fileread.read((char *)&tempo,sizeof(tempo));
    if(stricmp(tempo.name,"Rasikapriya")==0)
      { setcolor(11);
        settextstyle(6, HORIZ_DIR,5);
        moveto(275,100);
        outtext("Melakartha No  :  ");
        moveto(725,100);
        outtext(tempo.melakartha);
        setcolor(10);
        moveto(350,150);
        outtext("Chakra  :  ");
        moveto(600,150);
        outtext(tempo.chakra);
        settextstyle(6, HORIZ_DIR,4);
        setcolor(7);
        moveto(200,220);
        outtext("Aarohana : ");
        moveto(425,220);
        outtext(tempo.aarohana);
        setcolor(2);
        settextstyle(6, HORIZ_DIR,4);
        moveto(200,275);
        outtext("Avrohana : ");
        moveto(425,275);
        outtext(tempo.avarohana);
      }
    }
    PlaySound("Rasikapriya.WAV", NULL, SND_FILENAME | SND_ASYNC);
    setcolor(14);
    settextstyle(9, HORIZ_DIR, 1);
    moveto(20,680);
    outtext("BACK");
    settextstyle(9, HORIZ_DIR, 3);
    moveto(430,350);
    outtext("PLAY AGAIN");
    int x,y;
    while(1)
    {
    while(!ismouseclick(WM_LBUTTONDOWN));
    if(ismouseclick(WM_LBUTTONDOWN))
          
                                         getmouseclick(WM_LBUTTONDOWN,x,y);
                                         if((x>15)&&(y>680)&&(x<75)&&(y<730))
                                         raagalist();
                                         if((x>430)&&(y>350)&&(x<650)&&(y<380))
                                         PlaySound("Rasikapriya.WAV", NULL, SND_FILENAME | SND_ASYNC);
    };
}



void menu::shankarabharana()
{
    initwindow(1020,720);
    readimagefile("Shankarabharana.jpg",100,400,920,700);
    moveto(100,10);
    setcolor(14);
    settextstyle(9, HORIZ_DIR,6);
    outtext("'SHANKARABHARANA'");
        ifstream fileread;
    fileread.open("info.dat", ios::binary);
    moveto(150,10);
    for(int i=0;i<5;i++)
    {fileread.read((char *)&tempo,sizeof(tempo));
    if(stricmp(tempo.name,"Shankarabharana")==0)
      { setcolor(11);
        settextstyle(6, HORIZ_DIR,5);
        moveto(275,100);
        outtext("Melakartha No  :  ");
        moveto(725,100);
        outtext(tempo.melakartha);
        setcolor(10);
        moveto(350,150);
        outtext("Chakra  :  ");
        moveto(600,150);
        outtext(tempo.chakra);
        settextstyle(6, HORIZ_DIR,4);
        setcolor(7);
        moveto(200,220);
        outtext("Aarohana : ");
        moveto(425,220);
        outtext(tempo.aarohana);
        setcolor(2);
        settextstyle(6, HORIZ_DIR,4);
        moveto(200,275);
        outtext("Avrohana : ");
        moveto(425,275);
        outtext(tempo.avarohana);
      }
    }
    PlaySound("Shankarabharana.WAV", NULL, SND_FILENAME | SND_ASYNC);
    setcolor(14);
    settextstyle(9, HORIZ_DIR, 1);
    moveto(20,680);
    outtext("BACK");
       settextstyle(9, HORIZ_DIR, 3);
    moveto(430,350);
    outtext("PLAY AGAIN");
    int x,y;
    while(1)
    {
    while(!ismouseclick(WM_LBUTTONDOWN));
    if(ismouseclick(WM_LBUTTONDOWN))
          
                                         getmouseclick(WM_LBUTTONDOWN,x,y);
                                         if((x>15)&&(y>680)&&(x<75)&&(y<730))
                                         raagalist();
                                         if((x>430)&&(y>350)&&(x<650)&&(y<380))
                                         PlaySound("Shankarabharana.WAV", NULL, SND_FILENAME | SND_ASYNC);
                                         
    };
}
