#include<iostream>
#include<graphics.h>
using namespace std;

int icecream();
int teddy();
int abstract_1();
int abstract_2();
int scenario();

int main()
{

    int design;

    cout << "\n----------------------------------------------------------------"
         " \n                        Name : Mumtahena Mehjabin"
         "\n                        ID : CSE2001019101"
         //"\n----------------------------------------------------------------"
         "\n\n\n      Select any option to display"
         "\n              1) Icecream"
         "\n              2) Teddy Face"
         "\n              3) Abstract Drawing-1"
         "\n              4) Abstract Drawing-2"
         "\n              5) Scenario"
         "\n----------------------------------------------------------------"

         "\n\n      Make a choice: ";
    cin >> design;
    cout <<"\n------------------------------\n";

    switch (design)
    {
    case 1:
        icecream();
        break;
    case 2:
        teddy();
        break;
    case 3:
        abstract_1();
        break;
    case 4:
        abstract_2();
        break;
    case 5:
        scenario();
    default:
        cout <<"\n  Something is wrong..!!"
             "\n  Try again & make a choice according to given list....\n\n";
        break;
    }
}

int icecream()
{
    int gd=DETECT,gm;

    initgraph(&gd,&gm,"");
    initwindow(1270,825,"Icecream");

    //MUMTAHENA
    //M
    line(70,100,70,160);
    line(110,100,110,160);
    line(70,100,90,130);
    line(110,100,90,130);

    //U
    line(120,100,120,150);
    line(160,100,160,150);
    arc(141,145,180,360,20);

    //M
    line(170,100,170,160);
    line(210,100,210,160);
    line(170,100,190,130);
    line(210,100,190,130);

    //T
    line(220,100,260,100);
    line(240,100,240,160);

    //A
    line(260,160,280,100);
    line(280,100,300,160);
    line(270,130,290,130);

    //H
    line(310,100,310,160);
    line(350,100,350,160);
    line(310,130,350,130);

    //E
    line(360,102,360,157);
    line(360,102,390,102);
    line(360,130,380,130);
    line(360,157,390,157);

    //N
    line(400,100,400,160);
    line(440,100,440,160);
    line(400,100,440,160);

    //A
    line(450,160,470,100);
    line(470,100,490,160);
    line(460,130,480,130);

    //MEHJABIN
    //M
    line(530,100,530,160);
    line(570,100,570,160);
    line(530,100,550,130);
    line(570,100,550,130);

    //E
    line(580,102,580,157);
    line(580,102,610,102);
    line(580,130,600,130);
    line(580,157,610,157);

    //H
    line(620,100,620,160);
    line(660,100,660,160);
    line(620,130,660,130);

    //J
    line(690,100,690,150);
    arc(672,145,270,358,20);

    //A
    line(700,160,720,100);
    line(720,100,740,160);
    line(710,130,730,130);

    //B
    line(750,100,750,160);
    ellipse(750,117,270,90,25,15);
    ellipse(750,145,270,78,24,15);

    //I
    line(785,100,785,160);

    //N
    line(795,100,795,160);
    line(835,100,835,160);
    line(795,100,835,160);

    //CSE001019101
    //C
    ellipse(87,220,77,280,27,30);

    //S
    line(110,210,140,235);
    ellipse(130,229,35,150,22,40);
    ellipse(125,214,220,325,22,40);

    //E
    line(160,190,160,247);
    line(160,190,190,190);
    line(160,220,180,220);
    line(160,247,190,247);

    //2
    line(200,250,240,250);
    line(200,250,232,208);
    ellipse(216,232,35,150,23,40);

    //0
    ellipse(265,225,0,360,20,30);

    //0
    ellipse(310,225,0,360,20,30);

    //1
    line(350,200,350,255);
    line(350,200,340,210);

    //0
    ellipse(380,225,0,360,20,30);

    //1
    line(420,200,420,255);
    line(420,200,410,210);

    //9
    ellipse(450,215,0,360,15,15);
    ellipse(448,230,265,90,20,30);

    //1
    line(490,200,490,255);
    line(490,200,480,210);

    //0
    ellipse(520,225,0,360,20,30);

    //1
    line(560,200,560,255);
    line(560,200,550,210);


    //------------------------------Ice cream-----------------------

    //upper part
    setcolor(YELLOW);
    line(399,362,420,300);
    line(419,387,440,320);
    line(420,300,440,320);


    line(420,300,430,350);
    line(409,325,420,387);
    line(399,350,420,387);
    setfillstyle(SOLID_FILL,MAGENTA);
    floodfill(430,340,YELLOW);
    setfillstyle(SOLID_FILL,RED);
    floodfill(428,352,YELLOW);
    setfillstyle(SOLID_FILL,MAGENTA);
    floodfill(405,353,YELLOW);

    //face
    setcolor(RED);
    setfillstyle(SOLID_FILL,CYAN);
    ellipse(350,428,306,234,80,90);
    line(290,500,410,500);
    floodfill(350,432,RED);

    //eye
    setcolor(BLACK);
    circle(320,435,15);
    circle(318,436,8);

    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(318,436,BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(330,435,BLACK);

    circle(380,435,15);
    circle(378,436,8);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(378,436,BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(390,435,BLACK);

    //blush
    setcolor(LIGHTRED);
    circle(308,463,8);
    setfillstyle(SOLID_FILL,LIGHTRED);
    floodfill(308,463,LIGHTRED);

    setcolor(LIGHTRED);
    circle(392,463,8);
    setfillstyle(SOLID_FILL,LIGHTRED);
    floodfill(392,463,LIGHTRED);

    //lip
    setcolor(BLACK);
    arc(350,440,240,300,20);

    //lower part
    setcolor(BROWN);
    line(290,501,410,501);
    line(350,630,300,500);
    line(350,630,400,500);
    setfillstyle(BKSLASH_FILL,YELLOW);
    floodfill(340,503,BROWN);


    getch();
    closegraph();

    return 0;
}

int teddy()
{
    int gd=DETECT,gm;

    initgraph(&gd,&gm,"");
    initwindow(1270,825,"Teddy");

    //MUMTAHENA
    //M
    line(70,100,70,160);
    line(110,100,110,160);
    line(70,100,90,130);
    line(110,100,90,130);

    //U
    line(120,100,120,150);
    line(160,100,160,150);
    arc(141,145,180,360,20);

    //M
    line(170,100,170,160);
    line(210,100,210,160);
    line(170,100,190,130);
    line(210,100,190,130);

    //T
    line(220,100,260,100);
    line(240,100,240,160);

    //A
    line(260,160,280,100);
    line(280,100,300,160);
    line(270,130,290,130);

    //H
    line(310,100,310,160);
    line(350,100,350,160);
    line(310,130,350,130);

    //E
    line(360,102,360,157);
    line(360,102,390,102);
    line(360,130,380,130);
    line(360,157,390,157);

    //N
    line(400,100,400,160);
    line(440,100,440,160);
    line(400,100,440,160);

    //A
    line(450,160,470,100);
    line(470,100,490,160);
    line(460,130,480,130);

    //MEHJABIN
    //M
    line(530,100,530,160);
    line(570,100,570,160);
    line(530,100,550,130);
    line(570,100,550,130);

    //E
    line(580,102,580,157);
    line(580,102,610,102);
    line(580,130,600,130);
    line(580,157,610,157);

    //H
    line(620,100,620,160);
    line(660,100,660,160);
    line(620,130,660,130);

    //J
    line(690,100,690,150);
    arc(672,145,270,358,20);

    //A
    line(700,160,720,100);
    line(720,100,740,160);
    line(710,130,730,130);

    //B
    line(750,100,750,160);
    ellipse(750,117,270,90,25,15);
    ellipse(750,145,270,78,24,15);

    //I
    line(785,100,785,160);

    //N
    line(795,100,795,160);
    line(835,100,835,160);
    line(795,100,835,160);

    //CSE001019101
    //C
    ellipse(87,220,77,280,27,30);

    //S
    line(110,210,140,235);
    ellipse(130,229,35,150,22,40);
    ellipse(125,214,220,325,22,40);

    //E
    line(160,190,160,247);
    line(160,190,190,190);
    line(160,220,180,220);
    line(160,247,190,247);

    //2
    line(200,250,240,250);
    line(200,250,232,208);
    ellipse(216,232,35,150,23,40);

    //0
    ellipse(265,225,0,360,20,30);

    //0
    ellipse(310,225,0,360,20,30);

    //1
    line(350,200,350,255);
    line(350,200,340,210);

    //0
    ellipse(380,225,0,360,20,30);

    //1
    line(420,200,420,255);
    line(420,200,410,210);

    //9
    ellipse(450,215,0,360,15,15);
    ellipse(448,230,265,90,20,30);

    //1
    line(490,200,490,255);
    line(490,200,480,210);

    //0
    ellipse(520,225,0,360,20,30);

    //1
    line(560,200,560,255);
    line(560,200,550,210);

    //------------------------------Teddy-----------------------


    setcolor(BLUE);
    rectangle(180,370,500,720);

    //teddy_face
    setcolor(BLUE);
    //face
    ellipse(335,540,280,280,85,70);


    //ear
    ellipse(290,470,348,211,25,55);
    ellipse(390,470,315,190,25,55);
    setfillstyle(SOLID_FILL,LIGHTMAGENTA);
    floodfill(290,472,BLUE);
    setfillstyle(SOLID_FILL,LIGHTMAGENTA);
    floodfill(390,472,BLUE);
    setfillstyle(SOLID_FILL,LIGHTMAGENTA);
    floodfill(335,540,BLUE);

    //eye
    setcolor(BLACK);
    ellipse(310,530,0,360,10,20);
    ellipse(308,531,0,360,6,10);

    line(350,550,365,550);
    line(305,550,320,550);

    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(308,531,BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(315,530,BLACK);

    ellipse(355,530,0,360,10,20);
    ellipse(353,531,0,360,6,10);

    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(353,531,BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(360,530,BLACK);

    //lip
    arc(335,560,205,335,15);

    //blush
    setcolor(LIGHTRED);
    circle(280,560,8);
    setfillstyle(SOLID_FILL,LIGHTRED);
    floodfill(280,560,LIGHTRED);

    setcolor(LIGHTRED);
    circle(392,560,8);
    setfillstyle(SOLID_FILL,LIGHTRED);
    floodfill(392,560,LIGHTRED);

    //love
    setcolor(RED);
    line(350,620,410,690);
    line(410,690,470,620);
    arc(390,610,93,210,40);
    arc(430,610,340,87,40);
    line(385,570,410,600);
    line(410,600,435,570);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    floodfill(420,610,RED);


    getch();
    closegraph();

    return 0;
}

int abstract_1()
{
    int gd=DETECT,gm;

    initgraph(&gd,&gm,"");
    initwindow(1270,825,"Abstract Drawing-1");

    //MUMTAHENA
    //M
    line(70,100,70,160);
    line(110,100,110,160);
    line(70,100,90,130);
    line(110,100,90,130);

    //U
    line(120,100,120,150);
    line(160,100,160,150);
    arc(141,145,180,360,20);

    //M
    line(170,100,170,160);
    line(210,100,210,160);
    line(170,100,190,130);
    line(210,100,190,130);

    //T
    line(220,100,260,100);
    line(240,100,240,160);

    //A
    line(260,160,280,100);
    line(280,100,300,160);
    line(270,130,290,130);

    //H
    line(310,100,310,160);
    line(350,100,350,160);
    line(310,130,350,130);

    //E
    line(360,102,360,157);
    line(360,102,390,102);
    line(360,130,380,130);
    line(360,157,390,157);

    //N
    line(400,100,400,160);
    line(440,100,440,160);
    line(400,100,440,160);

    //A
    line(450,160,470,100);
    line(470,100,490,160);
    line(460,130,480,130);

    //MEHJABIN
    //M
    line(530,100,530,160);
    line(570,100,570,160);
    line(530,100,550,130);
    line(570,100,550,130);

    //E
    line(580,102,580,157);
    line(580,102,610,102);
    line(580,130,600,130);
    line(580,157,610,157);

    //H
    line(620,100,620,160);
    line(660,100,660,160);
    line(620,130,660,130);

    //J
    line(690,100,690,150);
    arc(672,145,270,358,20);

    //A
    line(700,160,720,100);
    line(720,100,740,160);
    line(710,130,730,130);

    //B
    line(750,100,750,160);
    ellipse(750,117,270,90,25,15);
    ellipse(750,145,270,78,24,15);

    //I
    line(785,100,785,160);

    //N
    line(795,100,795,160);
    line(835,100,835,160);
    line(795,100,835,160);

    //CSE001019101
    //C
    ellipse(87,220,77,280,27,30);

    //S
    line(110,210,140,235);
    ellipse(130,229,35,150,22,40);
    ellipse(125,214,220,325,22,40);

    //E
    line(160,190,160,247);
    line(160,190,190,190);
    line(160,220,180,220);
    line(160,247,190,247);

    //2
    line(200,250,240,250);
    line(200,250,232,208);
    ellipse(216,232,35,150,23,40);

    //0
    ellipse(265,225,0,360,20,30);

    //0
    ellipse(310,225,0,360,20,30);

    //1
    line(350,200,350,255);
    line(350,200,340,210);

    //0
    ellipse(380,225,0,360,20,30);

    //1
    line(420,200,420,255);
    line(420,200,410,210);

    //9
    ellipse(450,215,0,360,15,15);
    ellipse(448,230,265,90,20,30);

    //1
    line(490,200,490,255);
    line(490,200,480,210);

    //0
    ellipse(520,225,0,360,20,30);

    //1
    line(560,200,560,255);
    line(560,200,550,210);

    //------------------------------Abstract Drawing 1-----------------------


    setcolor(BROWN);
    rectangle(200,330,700,720);

    setcolor(YELLOW);
    //upper part
    line(430,380,430,610);
    arc(430,410,90,140,30);
    ellipse(380,390,300,370,30,20);
    ellipse(400,425,90,225,30,20);
    ellipse(380,460,90,250,30,20);

    //half-circle part
    arc(430,530,90,270,80);
    setfillstyle(5,LIGHTGRAY);
    floodfill(400,420,YELLOW);

    arc(430,530,90,270,60);

    line(430,380,430,610);
    setfillstyle(1,BLUE);
    floodfill(420,530,YELLOW);

    arc(430,530,90,270,50);
    setfillstyle(1,BLACK);
    floodfill(420,530,YELLOW);

    arc(430,530,90,270,40);
    setfillstyle(1,RED);
    floodfill(420,530,YELLOW);

    arc(430,530,90,270,30);
    setfillstyle(1,BLACK);
    floodfill(420,530,YELLOW);

    arc(430,530,90,270,20);
    setfillstyle(1,GREEN);
    floodfill(420,530,YELLOW);

    //yellow part
    setcolor(YELLOW);
    line(432,535,432,660);
    line(432,535,580,535);

    line(432,660,470,645);
    line(580,535,560,555);

    line(520,655,470,645);
    line(585,600,560,555);

    line(520,655,535,620);
    line(585,600,535,620);

    line(432,535,472,645);
    line(432,535,560,555);
    line(432,535,520,655);
    line(432,535,585,600);
    line(432,535,535,620);


    //colorful part
    setcolor(LIGHTBLUE);
    circle(350,550,30);
    setfillstyle(1,BROWN);
    floodfill(350,550,LIGHTBLUE);

    setcolor(RED);
    circle(350,550,25);
    setfillstyle(1,RED);
    floodfill(350,550,RED);

    setcolor(BLUE);
    circle(350,550,20);
    setfillstyle(1,BLACK);
    floodfill(350,550,BLUE);

    setcolor(GREEN);
    circle(350,550,15);
    setfillstyle(1,GREEN);
    floodfill(350,550,GREEN);

    setcolor(BLUE);
    circle(350,550,10);
    setfillstyle(1,BLUE);
    floodfill(350,550,BLUE);


    setcolor(LIGHTGREEN);
    line(435,400,435,525);
    line(435,525,565,525);

    setcolor(LIGHTBLUE);
    line(435,525,445,408);
    line(435,525,560,515);

    setcolor(LIGHTMAGENTA);
    line(435,525,455,405);
    line(435,525,562,505);

    setcolor(YELLOW);
    line(435,525,465,410);
    line(435,525,557,495);

    setcolor(LIGHTGREEN);
    line(435,525,475,407);
    line(435,525,560,485);

    setcolor(LIGHTBLUE);
    line(435,525,485,403);
    line(435,525,550,475);

    setcolor(LIGHTGREEN);
    line(435,525,495,407);
    line(435,525,555,465);

    setcolor(YELLOW);
    line(435,525,505,408);
    line(435,525,560,455);

    setcolor(LIGHTCYAN);
    line(435,525,515,405);
    line(435,525,563,445);

    setcolor(YELLOW);
    line(435,525,525,413);
    line(435,525,553,435);

    setcolor(LIGHTGREEN);
    line(435,525,535,408);
    line(435,525,557,425);

    setcolor(LIGHTCYAN);
    line(435,525,545,403);
    line(435,525,550,415);

    getch();
    closegraph();

    return 0;
}

int abstract_2()
{
    int gd=DETECT,gm;

    initgraph(&gd,&gm,"");
    initwindow(1270,825,"Abstract drawing-2");

    //MUMTAHENA
    //M
    line(70,100,70,160);
    line(110,100,110,160);
    line(70,100,90,130);
    line(110,100,90,130);

    //U
    line(120,100,120,150);
    line(160,100,160,150);
    arc(141,145,180,360,20);

    //M
    line(170,100,170,160);
    line(210,100,210,160);
    line(170,100,190,130);
    line(210,100,190,130);

    //T
    line(220,100,260,100);
    line(240,100,240,160);

    //A
    line(260,160,280,100);
    line(280,100,300,160);
    line(270,130,290,130);

    //H
    line(310,100,310,160);
    line(350,100,350,160);
    line(310,130,350,130);

    //E
    line(360,102,360,157);
    line(360,102,390,102);
    line(360,130,380,130);
    line(360,157,390,157);

    //N
    line(400,100,400,160);
    line(440,100,440,160);
    line(400,100,440,160);

    //A
    line(450,160,470,100);
    line(470,100,490,160);
    line(460,130,480,130);

    //MEHJABIN
    //M
    line(530,100,530,160);
    line(570,100,570,160);
    line(530,100,550,130);
    line(570,100,550,130);

    //E
    line(580,102,580,157);
    line(580,102,610,102);
    line(580,130,600,130);
    line(580,157,610,157);

    //H
    line(620,100,620,160);
    line(660,100,660,160);
    line(620,130,660,130);

    //J
    line(690,100,690,150);
    arc(672,145,270,358,20);

    //A
    line(700,160,720,100);
    line(720,100,740,160);
    line(710,130,730,130);

    //B
    line(750,100,750,160);
    ellipse(750,117,270,90,25,15);
    ellipse(750,145,270,78,24,15);

    //I
    line(785,100,785,160);

    //N
    line(795,100,795,160);
    line(835,100,835,160);
    line(795,100,835,160);

    //CSE001019101
    //C
    ellipse(87,220,77,280,27,30);

    //S
    line(110,210,140,235);
    ellipse(130,229,35,150,22,40);
    ellipse(125,214,220,325,22,40);

    //E
    line(160,190,160,247);
    line(160,190,190,190);
    line(160,220,180,220);
    line(160,247,190,247);

    //2
    line(200,250,240,250);
    line(200,250,232,208);
    ellipse(216,232,35,150,23,40);

    //0
    ellipse(265,225,0,360,20,30);

    //0
    ellipse(310,225,0,360,20,30);

    //1
    line(350,200,350,255);
    line(350,200,340,210);

    //0
    ellipse(380,225,0,360,20,30);

    //1
    line(420,200,420,255);
    line(420,200,410,210);

    //9
    ellipse(450,215,0,360,15,15);
    ellipse(448,230,265,90,20,30);

    //1
    line(490,200,490,255);
    line(490,200,480,210);

    //0
    ellipse(520,225,0,360,20,30);

    //1
    line(560,200,560,255);
    line(560,200,550,210);

    //--------------------Abstract Drawing 2---------------------------


    //light-blue part
    setcolor(BLUE);
    rectangle(630,290,820,740);
    rectangle(650,320,800,720);

    setfillstyle(1,LIGHTBLUE);
    floodfill(640,350,BLUE);

    //light-green part
    setcolor(WHITE);
    line(640,320,440,520);
    line(640,320,840,520);
    line(640,720,440,520);
    line(640,720,840,520);
    setfillstyle(5,LIGHTGREEN);
    floodfill(650,510,WHITE);

    line(640,380,500,520);
    line(640,380,780,520);
    line(640,660,500,520);
    line(640,660,780,520);
    setfillstyle(1,BLACK);
    floodfill(550,520,WHITE);

    //red part
    setcolor(LIGHTGRAY);
    arc(750,520,210,210,130);
    setfillstyle(1,RED);
    floodfill(750,520,LIGHTGRAY);

    arc(735,520,210,210,110);
    setfillstyle(1,BLACK);
    floodfill(735,520,LIGHTGRAY);

    arc(725,520,210,210,100);
    setfillstyle(1,RED);
    floodfill(725,520,LIGHTGRAY);

    arc(715,520,210,210,90);
    setfillstyle(1,BLACK);
    floodfill(715,520,LIGHTGRAY);

    arc(700,520,210,210,60);
    setfillstyle(1,RED);
    floodfill(700,520,LIGHTGRAY);

    arc(690,520,210,210,50);
    setfillstyle(1,BLACK);
    floodfill(690,520,LIGHTGRAY);

    arc(680,520,210,210,30);
    setfillstyle(1,RED);
    floodfill(680,520,LIGHTGRAY);

    getch();
    closegraph();

    return 0;
}

int scenario()
{
    int gd=DETECT,gm;

    initgraph(&gd,&gm,"");
    initwindow(1270,825,"Scenario");

    //MUMTAHENA
    //M
    line(70,100,70,160);
    line(110,100,110,160);
    line(70,100,90,130);
    line(110,100,90,130);

    //U
    line(120,100,120,150);
    line(160,100,160,150);
    arc(141,145,180,360,20);

    //M
    line(170,100,170,160);
    line(210,100,210,160);
    line(170,100,190,130);
    line(210,100,190,130);

    //T
    line(220,100,260,100);
    line(240,100,240,160);

    //A
    line(260,160,280,100);
    line(280,100,300,160);
    line(270,130,290,130);

    //H
    line(310,100,310,160);
    line(350,100,350,160);
    line(310,130,350,130);

    //E
    line(360,102,360,157);
    line(360,102,390,102);
    line(360,130,380,130);
    line(360,157,390,157);

    //N
    line(400,100,400,160);
    line(440,100,440,160);
    line(400,100,440,160);

    //A
    line(450,160,470,100);
    line(470,100,490,160);
    line(460,130,480,130);

    //MEHJABIN
    //M
    line(530,100,530,160);
    line(570,100,570,160);
    line(530,100,550,130);
    line(570,100,550,130);

    //E
    line(580,102,580,157);
    line(580,102,610,102);
    line(580,130,600,130);
    line(580,157,610,157);

    //H
    line(620,100,620,160);
    line(660,100,660,160);
    line(620,130,660,130);

    //J
    line(690,100,690,150);
    arc(672,145,270,358,20);

    //A
    line(700,160,720,100);
    line(720,100,740,160);
    line(710,130,730,130);

    //B
    line(750,100,750,160);
    ellipse(750,117,270,90,25,15);
    ellipse(750,145,270,78,24,15);

    //I
    line(785,100,785,160);

    //N
    line(795,100,795,160);
    line(835,100,835,160);
    line(795,100,835,160);

    //CSE001019101
    //C
    ellipse(87,220,77,280,27,30);

    //S
    line(110,210,140,235);
    ellipse(130,229,35,150,22,40);
    ellipse(125,214,220,325,22,40);

    //E
    line(160,190,160,247);
    line(160,190,190,190);
    line(160,220,180,220);
    line(160,247,190,247);

    //2
    line(200,250,240,250);
    line(200,250,232,208);
    ellipse(216,232,35,150,23,40);

    //0
    ellipse(265,225,0,360,20,30);

    //0
    ellipse(310,225,0,360,20,30);

    //1
    line(350,200,350,255);
    line(350,200,340,210);

    //0
    ellipse(380,225,0,360,20,30);

    //1
    line(420,200,420,255);
    line(420,200,410,210);

    //9
    ellipse(450,215,0,360,15,15);
    ellipse(448,230,265,90,20,30);

    //1
    line(490,200,490,255);
    line(490,200,480,210);

    //0
    ellipse(520,225,0,360,20,30);

    //1
    line(560,200,560,255);
    line(560,200,550,210);

    //------------------------------Scenario Drawing -----------------------

    setcolor(BLUE);
    //outline
    circle(590,520,150);
    setfillstyle(1,DARKGRAY);
    floodfill(590,500,BLUE);

    //mountain
    line(448,570,500,470);
    line(500,470,565,580);
    line(500,470,530,575);

    line(536,530,580,430);
    line(580,430,640,585);
    line(580,430,620,582);

    line(615,520,650,450);
    line(650,450,723,590);
    line(650,450,700,590);

    line(445,570,725,590);
    setfillstyle(1,LIGHTBLUE);
    floodfill(500,530,BLUE);

    setfillstyle(1,LIGHTBLUE);
    floodfill(550,530,BLUE);

    setfillstyle(1,LIGHTBLUE);
    floodfill(620,530,BLUE);

    setfillstyle(1,BROWN);
    floodfill(550,580,BLUE);

    //moon
    circle(560,410,25);
    setfillstyle(1,LIGHTGRAY);
    floodfill(560,410,BLUE);

    setcolor(BLACK);
    //tree-1
    line(530,577,530,450);

    ellipse(560,440,120,180,30,40);
    ellipse(560,450,100,180,30,40);
    ellipse(560,460,80,180,30,40);
    ellipse(560,470,40,180,30,40);
    ellipse(560,480,55,180,30,40);
    ellipse(560,490,70,170,30,40);
    ellipse(550,502,70,170,20,40);

    ellipse(510,502,360,110,20,40);
    ellipse(500,490,360,100,30,40);
    ellipse(500,480,360,115,30,40);
    ellipse(500,470,360,130,30,40);
    ellipse(500,460,360,110,30,40);
    ellipse(510,450,360,110,20,40);
    ellipse(525,440,360,100,5,40);

    //tree-2
    line(670,587,670,510);

    ellipse(700,500,120,180,30,40);
    ellipse(700,510,100,180,30,40);
    ellipse(700,520,80,180,30,40);
    ellipse(700,530,40,180,30,40);
    ellipse(700,540,55,180,30,40);
    ellipse(700,550,70,170,30,40);
    ellipse(690,562,70,170,20,40);

    ellipse(650,562,360,110,20,40);
    ellipse(640,550,360,100,30,40);
    ellipse(640,540,360,115,30,40);
    ellipse(640,530,360,130,30,40);
    ellipse(640,520,360,110,30,40);
    ellipse(650,510,360,110,20,40);
    ellipse(665,500,360,100,5,40);


    //bird
    ellipse(620,525,60,100,35,120);
    line(635,420,655,415);

    ellipse(600,540,60,100,35,120);
    line(635,430,615,435);

    getch();
    closegraph();

    return 0;
}
