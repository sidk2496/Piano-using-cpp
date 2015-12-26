#include<graphics.h>
#include<iostream>
#include<fstream>
#include "class.h"
using namespace std;

struct information
{char name[20];
char aarohana[25];
char avarohana[25];
char chakra[10];
char melakartha[5];
}obj[5];

void initialise()
{strcpy(obj[0].name,"Kanakangi");
strcpy(obj[0].aarohana,"S R1 G1 M1 P D1 N1 S");
strcpy(obj[0].avarohana,"S N1 D1 P M1 G1 R1 S");
strcpy(obj[0].chakra,"Indu");
strcpy(obj[0].melakartha,"01");

strcpy(obj[1].name,"Mayamalavagowla");
strcpy(obj[1].aarohana,"S R1 G3 M1 P D1 N3 S");
strcpy(obj[1].avarohana,"S N3 D1 P M1 G3 R1 S");
strcpy(obj[1].chakra,"Agni");
strcpy(obj[1].melakartha,"15");

strcpy(obj[2].name,"Natakapriya");
strcpy(obj[2].aarohana,"S R1 G2 M1 P D2 N2 S");
strcpy(obj[2].avarohana,"S N2 D2 P M1 G2 R1 S");
strcpy(obj[2].chakra,"Netra");
strcpy(obj[2].melakartha,"10");

strcpy(obj[3].name,"Rasikapriya");
strcpy(obj[3].aarohana,"S R3 G3 M2 P D3 N3 S");
strcpy(obj[3].avarohana,"S N3 D3 P M2 G3 R3 S");
strcpy(obj[3].chakra,"Aditya");
strcpy(obj[3].melakartha,"72");

strcpy(obj[4].name,"Shankarabharana");
strcpy(obj[4].aarohana,"S R2 G3 M1 P D2 N3 S");
strcpy(obj[4].avarohana,"S N3 D2 P M1 G3 R2 S");
strcpy(obj[4].chakra,"Bana");
strcpy(obj[4].melakartha,"29");
}


void createfile()
{ofstream file;
file.open("info.dat", ios::binary);
initialise();
for(int i=0;i<5;i++)
 file.write((char *)&obj[i],sizeof(obj[i]));
file.close();
ifstream file1;
}

