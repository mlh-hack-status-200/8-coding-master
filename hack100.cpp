#include<iostream>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<bits/stdc++.h>
#include<process.h>

using namespace std;

int b1[100][50][5];
int oj[1000],po[1000],mch[100][100];
char sp[7400];
int lives=10;
int he,v=32;
int o1,o2,o3,l1,l2,l3,num=0,num2=0,num3=6;
void setcolor(int ForgC)
 {
     WORD wColor;

      HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
      CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
                 //Mask out all but the background attribute, and add in the forgournd     color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }

     return;
 }
void gotoxy(short int x,short int y)
{
  static HANDLE h = NULL;
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };
  SetConsoleCursorPosition(h,c);
}
void clrscr()
{
    gotoxy(0,7);
    printf("%s",sp);
}
void character()
{
int a=22,b=176,c=220,d=223,e=222,f=219,g=254,h=192,i=45,k=191,l=217,m=212;
if(b1[51][0][0]%4>=1)
{
gotoxy(48,1+he);
printf("%c%c%c%c%c%c%c%c%c%c%c",c,c,f,f,f,f,f,c,c,c,c);
gotoxy(46,2+he);
printf("%c%c%c%c%c%c%c %c %c%c%c%c",c,c,d,d,f,f,d,f,h,i,i,k);
gotoxy(46,3+he);
printf("%c%c%c%c %c%c %c%c%c%c%c%c",f,f,c,c,f,f,c,f,f,c,c,l);
gotoxy(47,4+he);
printf("%c%c%c%c%c%c%c%c%c%c%c",h,i,i,c,c,c,c,c,c,i,l);
gotoxy(46,5+he);
printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",c,f,f,b,b,f,f,f,f,b,b,f,f,c);
gotoxy(46,6+he);
printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",f,f,c,c,b,b,b,b,b,b,c,c,f,f);
gotoxy(48,7+he);
printf("%c%c%c%c%c%c%c%c%c%c",b,b,b,b,d,d,b,b,b,b);
gotoxy(48,8+he);
printf("%c%c%c%c%c %c%c%c%c%c",f,f,f,f,c,f,f,f,f,c);
}
else
{
gotoxy(48,1+he);
printf("%c%c%c%c%c%c%c%c%c%c%c",c,c,f,f,f,f,f,c,c,c,c);
gotoxy(46,2+he);
printf("%c%c%c%c%c%c%c %c %c%c%c%c",c,c,d,d,f,f,d,f,h,i,i,k);
gotoxy(46,3+he);
printf("%c%c%c%c %c%c %c%c%c%c%c%c",f,f,c,c,f,f,c,f,f,c,c,l);
gotoxy(47,4+he);
printf("%c%c%c%c%c%c%c%c%c%c%c",h,i,i,c,c,c,c,c,c,i,l);
gotoxy(46,5+he);
printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",c,f,f,b,b,f,f,f,f,b,b,f,f,c);
gotoxy(46,6+he);
printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",f,f,c,c,b,b,b,b,b,b,c,c,f,f);
gotoxy(47,7+he);
printf("%c%c%c%c%c%c%c%c%c%c%c%c",b,b,b,b,d,d,d,d,b,b,b,b);
gotoxy(47,8+he);
printf("%c%c%c%c%c   %c%c%c%c%c",f,f,f,f,c,f,f,f,f,c);
}
}
void mp()
{
    mch[0][0]=48;mch[0][1]=1+he;
    mch[1][0]=46;mch[1][1]=2+he;
    mch[2][0]=46;mch[2][1]=3+he;
    mch[3][0]=47;mch[3][1]=4+he;
    mch[4][0]=46;mch[4][1]=5+he;
    mch[5][0]=46;mch[5][1]=6+he;
    mch[6][0]=48;mch[6][1]=7+he;
    mch[7][0]=48;mch[7][1]=8+he;

}
void print()
{
    int i=0,j,k,l;
    char cc[10000];
    setcolor(2);
    clrscr();

    for(i=num2;i<num3;i++)
        {

            if(oj[i]==3)
        {
            l=0;
            int a=219,b=219;
                 if(b1[i][0][0]<150&&b1[i][0][1]<40)
            {
            gotoxy(b1[i][0][0],b1[i][0][1]);
            printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
            gotoxy(b1[i][1][0],b1[i][1][1]);
            printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
            gotoxy(b1[i][2][0],b1[i][2][1]);
            printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
            gotoxy(b1[i][3][0],b1[i][3][1]);
            printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
            }
        }
        }
    setcolor(16);
        character();
    {
        for(i=num2;i<num3;i++)
        {

            if(oj[i]==3)
            {
            l=0;
            int a=219,b=219;
           if(b1[i][0][0]<150&&b1[i][0][1]<40)
            {
            for(j=1;j<=po[i];j++)
            {
            gotoxy(b1[i][3+j][0],b1[i][3+j][1]);
            printf(" %c%c%c%c%c%c%c\n",b,b,b,b,b,b,b);
            }

            }
        }
        }
    }

    setcolor(7);
    for(i=num2;i<num3;i++)
    {
        if(oj[i]==2)
        {

            int a=206,b=206;
            if(b1[i][4][0]+8<167)
            {
                gotoxy(b1[i][0][0],b1[i][0][1]);
                printf(" )_(\n");
                gotoxy(b1[i][1][0],b1[i][1][1]);
                printf("/   %c\n",92);
                gotoxy(b1[i][2][0],b1[i][2][1]);
                printf("%c%c%c%c%c\n",219,219,219,219,219);
                gotoxy(b1[i][3][0],b1[i][3][1]);
                printf("%c%c%c%c%c\n",219,219,219,219,219);
                gotoxy(b1[i][4][0],b1[i][4][1]);
                printf("%c%c%c%c%c\n",219,219,219,219,219);
            }
        }
    }
    setcolor(4);
    for(i=num2;i<num3;i++)
    {

        if(oj[i]==1)
        {
            l=po[i];
            k=b1[i][0][0];
            if(k<0)
            {
                k=0;
                l=l+b1[i][0][0];
            }

            for(j=1;j<=167-k&&l>=j;j++)
            cc[j-1]=219;
            cc[j-1]='\0';
            gotoxy(k,b1[i][0][1]);
            printf("%s",cc);
            for(j=1;j<=167-k&&l>=j;j++)
            cc[j-1]=219;
            cc[j-1]='\0';
            gotoxy(k,b1[i][1][1]);
            printf("%s",cc);
            for(j=1;j<=167-k&&l>=j;j=j+1)
            {
            cc[j-1]='*';
            }
            cc[j-1]='\0';
            gotoxy(k,b1[i][2][1]);
            printf("%s",cc);
        }



    }

}
void won();
void last();
void super();
void obj()
{
    int ra,b,c;
    ra=rand()%2+1;
    int i;
    if(num%5==0)
        ra=3;
    if(ra==1)
    {
    b=rand()%13+26;
    c =rand()%4*4+16;
    b1[num][0][0]=3400;
    b1[num][0][1]=b;
    b1[num][1][0]=3400;
    b1[num][1][1]=b+1;
    b1[num][2][0]=3400;
    b1[num][2][1]=b+2;
    oj[num]=1;
    po[num]=c;
    }

    else if(ra==3)
    {
    b1[num][0][0]=3397;
    b1[num][0][1]=26;
    b1[num][1][0]=3397;
    b1[num][1][1]=27;
    b1[num][2][0]=3397;
    b1[num][2][1]=28;
    b1[num][3][0]=3397;
    b1[num][3][1]=29;
    b1[num][4][0]=3397;
    b1[num][4][1]=30;
    oj[num]=2;
    po[num]=0;
    }
    else if(ra==4)
    {
        oj[num]=4;

    }
    else if(ra==2)
    {
        b=rand()%8+1;

        oj[num]=3;
        po[num]=b;
        b1[num][0][0]=3400;
        b1[num][0][1]=37-b;
        b1[num][1][0]=3400;
        b1[num][1][1]=38-b;
        b1[num][2][0]=3400;
        b1[num][2][1]=39-b;
        b1[num][3][0]=3400;
        b1[num][3][1]=40-b;
        for(i=1;i<=b;i++)
        {
            b1[num][3+i][0]=3405;
            b1[num][3+i][1]=40-b+i;
        }

    }
    num++;
}
void chb()
{
    int i,j;
    for(i=num2;i<num;i++)
    {
        if(oj[i]==1)
        {
            b1[i][0][0]--;
            b1[i][1][0]--;
        }
        else if(oj[i]==2)
        {
            b1[i][0][0]--;
            b1[i][1][0]--;
            b1[i][2][0]--;
            b1[i][3][0]--;
            b1[i][4][0]--;

        }
        if(oj[i]==3)
        {
            b1[i][0][0]--;
            b1[i][1][0]--;
            b1[i][2][0]--;
            b1[i][3][0]--;
            for(j=1;j<=po[i];j++)
            {
                b1[i][3+j][0]--;
            }

        }
    }
}
void check()
{
    if(oj[num2]==3)
    {
        if(b1[num2][0][0]<=0)
        {
            num2++;
            num3++;
            lives--;
        }
    }
    else if(b1[num2][0][0]+po[num2]<=5)
    {
        num2++;
        num3++;
        lives--;
    }
    if(num2>52)
        won();
}
void ini()
{
    int i,j;
    obj();
    for(j=1;j<=52;j++)
    {
        for(i=0;i<60;i++)
        {
            chb();
        }
        obj();
    }
    for(j=0;j<170;j++)
    {
        chb();
    }
}
void screen()
{
    super();
    setcolor(16);
    gotoxy(0,6);
    for(int i=0;i<=167;i++)
        printf("%c",220);
    gotoxy(0,41);
    for(int i=0;i<=167;i++)
        printf("%c",223);
}
void check2()
{
    int i,j,k,l,a,b;
    for(i=num2;i<=num2+1;i++)
    {
        k=po[i];
       if(oj[i]==3)
       {
           k=19;
       }
       for(j=0;j<=k;j++)
        {

            if(((mch[7][1]==b1[i][0][1]-1)&&(b1[i][0][0]+j==60))||((mch[7][1]==b1[i][0][1]-1)&&(b1[i][0][0]+j==48)))
            {
             //  cout<<mch[7][1];
              //  getch();
                v=b1[i][0][1]-1-8;
                break;
              //  exit(0);
            }
        }
    }
}
void check3()
{
    int k,i=0;
    for(i=0;i<2;i++)
    {

    if(v<32)
    {   k=po[num2+i];
        if(oj[num2+i]==3)
        {
            k=19;
        }
        if(b1[num2+i][0][0]+k+1==48&&oj[num2+i])
        v=32;
    }
    }

}
void out()
{
    int i,j;
    for(i=num2;i<=num2+1;i++)
    {
        if(oj[i]==1)
        {
            for(j=0;j<=po[i];j++)
            {
                if(b1[i][1][0]+j==60&&mch[0][1]==b1[i][2][1])
                    last();
            }
            for(j=0;j<8;j++)
            {
                if(b1[i][1][0]==60&&b1[i][2][1]==mch[0][1]+j)
                    last();
            }

        }
        else if(oj[i]==2)
        {
            if(b1[i][0][0]>=44&&mch[0][1]>=26&&b1[i][0][0]<=58&&mch[0][1]<32)
            {
                lives=10;
                chb();chb();chb();chb();chb();
                chb();chb();chb();chb();chb();
            }
        }
        else if(oj[i]==3)
        {
            if(b1[i][0][0]==60&&mch[7][1]>=36-po[i])
                last();
        }
    }
    if(mch[0][1]<=6)
    {
        last();
    }
    if(lives==0)
        last();
}
void last()
{
    char tt;
    system("color 04");
    gotoxy(0,10);
    cout<<R"(
        GGGGGGGGGGGGG                                                                      OOOOOOOOO
     GGG::::::::::::G                                                                    OO:::::::::OO
   GG:::::::::::::::G                                                                  OO:::::::::::::OO
  G:::::GGGGGGGG::::G                                                                 O:::::::OOO:::::::O
 G:::::G       GGGGGG  aaaaaaaaaaaaa      mmmmmmm    mmmmmmm       eeeeeeeeeeee       O::::::O   O::::::Ovvvvvvv           vvvvvvv eeeeeeeeeeee    rrrrr   rrrrrrrrr
G:::::G                a::::::::::::a   mm:::::::m  m:::::::mm   ee::::::::::::ee     O:::::O     O:::::O v:::::v         v:::::vee::::::::::::ee  r::::rrr:::::::::r
G:::::G                aaaaaaaaa:::::a m::::::::::mm::::::::::m e::::::eeeee:::::ee   O:::::O     O:::::O  v:::::v       v:::::ve::::::eeeee:::::eer:::::::::::::::::r
G:::::G    GGGGGGGGGG           a::::a m::::::::::::::::::::::me::::::e     e:::::e   O:::::O     O:::::O   v:::::v     v:::::ve::::::e     e:::::err::::::rrrrr::::::r
G:::::G    G::::::::G    aaaaaaa:::::a m:::::mmm::::::mmm:::::me:::::::eeeee::::::e   O:::::O     O:::::O    v:::::v   v:::::v e:::::::eeeee::::::e r:::::r     r:::::r
G:::::G    GGGGG::::G  aa::::::::::::a m::::m   m::::m   m::::me:::::::::::::::::e    O:::::O     O:::::O     v:::::v v:::::v  e:::::::::::::::::e  r:::::r     rrrrrrr
G:::::G        G::::G a::::aaaa::::::a m::::m   m::::m   m::::me::::::eeeeeeeeeee     O:::::O     O:::::O      v:::::v:::::v   e::::::eeeeeeeeeee   r:::::r
 G:::::G       G::::Ga::::a    a:::::a m::::m   m::::m   m::::me:::::::e              O::::::O   O::::::O       v:::::::::v    e:::::::e            r:::::r
  G:::::GGGGGGGG::::Ga::::a    a:::::a m::::m   m::::m   m::::me::::::::e             O:::::::OOO:::::::O        v:::::::v     e::::::::e           r:::::r
   GG:::::::::::::::Ga:::::aaaa::::::a m::::m   m::::m   m::::m e::::::::eeeeeeee      OO:::::::::::::OO          v:::::v       e::::::::eeeeeeee   r:::::r
     GGG::::::GGG:::G a::::::::::aa:::am::::m   m::::m   m::::m  ee:::::::::::::e        OO:::::::::OO             v:::v         ee:::::::::::::e   r:::::r
        GGGGGG   GGGG  aaaaaaaaaa  aaaammmmmm   mmmmmm   mmmmmm    eeeeeeeeeeeeee          OOOOOOOOO                vvv            eeeeeeeeeeeeee   rrrrrrr     )"<<endl;
getch();
getch();

exit(0);

}
void won()
{
    system("color 04");
    gotoxy(0,10);
    cout<<R"(
          YYYYYYY       YYYYYYY                                               WWWWWWWW                           WWWWWWWW
          Y:::::Y       Y:::::Y                                               W::::::W                           W::::::W
          Y:::::Y       Y:::::Y                                               W::::::W                           W::::::W
          Y::::::Y     Y::::::Y                                               W::::::W                           W::::::W
          YYY:::::Y   Y:::::YYYooooooooooo   uuuuuu    uuuuuu                  W:::::W           WWWWW           W:::::W ooooooooooo   nnnn  nnnnnnnn
             Y:::::Y Y:::::Y oo:::::::::::oo u::::u    u::::u                   W:::::W         W:::::W         W:::::Woo:::::::::::oo n:::nn::::::::nn
              Y:::::Y:::::Y o:::::::::::::::ou::::u    u::::u                    W:::::W       W:::::::W       W:::::Wo:::::::::::::::on::::::::::::::nn
               Y:::::::::Y  o:::::ooooo:::::ou::::u    u::::u                     W:::::W     W:::::::::W     W:::::W o:::::ooooo:::::onn:::::::::::::::n
                Y:::::::Y   o::::o     o::::ou::::u    u::::u                      W:::::W   W:::::W:::::W   W:::::W  o::::o     o::::o  n:::::nnnn:::::n
                 Y:::::Y    o::::o     o::::ou::::u    u::::u                       W:::::W W:::::W W:::::W W:::::W   o::::o     o::::o  n::::n    n::::n
                 Y:::::Y    o::::o     o::::ou::::u    u::::u                        W:::::W:::::W   W:::::W:::::W    o::::o     o::::o  n::::n    n::::n
                 Y:::::Y    o::::o     o::::ou:::::uuuu:::::u                         W:::::::::W     W:::::::::W     o::::o     o::::o  n::::n    n::::n
                 Y:::::Y    o:::::ooooo:::::ou:::::::::::::::uu                        W:::::::W       W:::::::W      o:::::ooooo:::::o  n::::n    n::::n
              YYYY:::::YYYY o:::::::::::::::o u:::::::::::::::u                         W:::::W         W:::::W       o:::::::::::::::o  n::::n    n::::n
              Y:::::::::::Y  oo:::::::::::oo   uu::::::::uu:::u                          W:::W           W:::W         oo:::::::::::oo   n::::n    n::::n
              YYYYYYYYYYYYY    ooooooooooo       uuuuuuuu  uuuu                           WWW             WWW            ooooooooooo     nnnnnn    nnnnnn)";

getch();
getch();
exit(0);
}
void super()
{
    getch();
    gotoxy(0,0);
    system("color 9F");

}
void start()
{
    char pa[100];
    gotoxy(60,15);
    printf("Enter PassWord:");
    gets(pa);
    if(strcmpi(pa,"#DALHUP")!=0)
    {
        gotoxy(70,18);
        printf("Wrong Password");
        getch();
        exit(0);
    }


}


void mario()
{
    int i,lb,j,r,l=0,t,k;
    char c;
    he=32;
    start();
    mp();
    system("color 90");
    srand(time(NULL));
    for( i=0;i<=5710;i++)
    {
       sp[i]=' ';
    }

    getch();
    screen();
    getch();
    ini();
    print();
    getch();
    for(i=0;i<100;)
    {

        while(!kbhit())
        {
            if(he<v)
            {
                he++;
            }
            check();
            chb();
            Sleep(8-lives/4);
            gotoxy(150,4);
            printf("                  ");
            gotoxy(150,4);
            printf("Energy Is %d",lives);
            print();
            mp();
            check2();
            check3();
            out();
        }
        c=getch();
        if(c==' ')
        {
           for(k=1;k<=15;k++)
            {
            he=he-1;
            check();
            chb();
            Sleep(8-lives/4);
            print();
             mp();
            check2();
            check3();
            out();

            }
            t=1;
        }
        else if(c=='a'||c=='A')
        {
            for(int y=1;y<=30;y++)
            {
            chb();
            check();
            print();
            out();
            Sleep(1);
            }
            v=32;
        }

    }
}
int main()
{
    mario();
    return 0;
}

