#include<graphics.h>
#include<conio.h>
#include<iostream>
#include<fstream>
#include<string.h>
#include "class.h"

void menu::graphic_gets(char buffer[], int x, int y, int type, int fore, int back, int limit)
{
    int width  = 18, height = 20, cursor = x, i = 0;
    char ch;
    settextstyle(0,0,2);
    buffer[0] = '\0'; 
    setcolor(fore);
    setfillstyle(1, back);
    while(1)
    {
        while(!kbhit()) 
        {
            setcolor(fore);
            line(cursor, y + height, cursor + width, y + height);
            delay(50);
            //clear out a rectangle of width X height
            setcolor(back);
            setfillstyle(1, back);
            int a[8];
            a[0] = cursor;
            a[1] = y;
            a[2] = cursor + width;
            a[3] = y;
            a[4] = cursor + width;
            a[5] = y + height + 1;
            a[6] = cursor;
            a[7] = y + height + 1;
            fillpoly(4, a);
            delay(50);
        }
        ch = getch();
        if(ch==32)
        {
             buffer[i++] = ch;
                buffer[i]   = '\0';
                char tempstr[2] = {ch,'\0'};
                //clear out a rectangle of width X height
                setcolor(back);
                setfillstyle(1, back);
                int a[8];
                a[0] = cursor;
                a[1] = y;
                a[2] = cursor + width;
                a[3] = y;
                a[4] = cursor + width;
                a[5] = y + height + 1;
                a[6] = cursor;
                a[7] = y + height + 1;
                fillpoly(4, a);
                setcolor(fore);
                if (type == 0)
                   outtextxy(cursor, y, tempstr);
                else
                   outtextxy(cursor, y, "*");                            
                cursor += width;
             }
       else if (isprint(ch))
        {
            if (i < limit)
            {
                
                buffer[i++] = ch;
                buffer[i]   = '\0';
                char tempstr[2] = {ch,'\0'};
                //clear out a rectangle of width X height
                setcolor(back);
                setfillstyle(1, back);
                int a[8];
                a[0] = cursor;
                a[1] = y;
                a[2] = cursor + width;
                a[3] = y;
                a[4] = cursor + width;
                a[5] = y + height + 1;
                a[6] = cursor;
                a[7] = y + height + 1;
                fillpoly(4, a);
                setcolor(fore);
                if (type == 0)
                   outtextxy(cursor, y, tempstr);
                else
                   outtextxy(cursor, y, "*");                            
                cursor += width;
            }
        }
        
             
        else if(ch == 8)        //code for Backspace
        {
            if(i > 0)
            {
                buffer[--i] =  '\0';
                cursor      -= width;
                //clear out a rectangle of width X height
                setcolor(back);
                setfillstyle(1, back);
                int a[8];
                a[0] = cursor;
                a[1] = y;
                a[2] = cursor + width;
                a[3] = y;
                a[4] = cursor + width;
                a[5] = y + height + 1;
                a[6] = cursor;
                a[7] = y + height + 1;
                fillpoly(4, a);  
                setcolor(fore);
            }  
        }
        else if(ch == 13)       //The Enter key was pressed.
            break;
    }
    setcolor(fore);
}
