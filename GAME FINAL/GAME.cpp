#include <stdio.h>
#include<stdlib.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <math.h>
#define MAX 5
#define GAME 5
#define TIMES 10
#include <windows.h>

COORD coord={0,0};
char name[MAX][50];
int flag=-1,flag1=-1,q[MAX],t[MAX],n1,n2;
int a=0,s=0,d=0,m=0;
float score[MAX][GAME],ave;
float sum=0, tri=0;

int play();
int menu();
int get();
void add();
void sub();
void divi();
void mul();
void game();
void gotoxy(int x, int y);
void sco();
void download();
void upload();
void empi();
void menu1();
void disp();
void del();

int main()
{

   download();
    menu1();

}

void menu1 ()
{

    while(1)
    {
            switch(menu())
            {
                case 1: system("cls");
                                if (get()) {game();}
                                else {gotoxy(5,4);printf("THE NUMBER OF PLAYERS ARE FULL");getch();}break;
                case 2: system("cls");del();break;
                case 3: system("cls");disp();getch();break;
                case 4: upload();system("cls");
                            printf("\nLOGGING OFF!!!\n"); exit(0);break;
                default: gotoxy(5,11);printf("INVALID NUMBER");getch(); system("cls");
            }

    }
}
void del()
{ int q,o,n;

                            if(flag < 0)
                            {
                                gotoxy(5,4);printf(" NO NAME STORED"); getch();
                            }
                            else{
                                 system("cls"); disp();
                                printf("\n\n\n\tENTER NUMBER OF PLAYER YOU WANT TO DELETE: "); scanf("%d",&q); q-=1;
                            if (q < 0 || q>flag) {printf("\n\tINVALID NUMBER OF STUDENT'S"); getch();}
                            else
                                {
                                    for(o=q;o<=flag;o++)
                                        {
                                            for(n=0;n<50;n++)
                                            {   name[o][n]=name[o+1][n];}
                                            for(n=0;n<5;n++)
                                            {score[o][n]=score[o+1][n];}
                                        }
                                        flag--; flag1--;

                                }}
}
int get()
{
    int y,v,x,c,temp;
    if(flag > MAX-1)
    {return 0;}
    else
    {flag++;flag1++;gotoxy(5,4);printf("Enter Player name: "); scanf("%s",&name[flag]);
        sum=0;a=0;s=0;d=0;m=0;tri=0;
                for(y=flag-1;y>=0;y--)
                {
                    if(strcmp(name[y],name[flag])==0)
                        { gotoxy(5,6);printf("NAME IS ALREADY EXIST"); getch();

                                            a = score[y][0]; s = score[y][1];
                                            d= score[y][2]; m = score[y][3];
                                            ave= score[y][4]; sum=q[y]; tri=t[y];


                            flag--;
                            flag1=y; break;
                        }

                 }
                }
                return 1;
    }
int menu()
{
    int a;
    system("cls");
    gotoxy(5,3);printf("|| M - A - I - N    M - E - N - U||");
    gotoxy(5,4);printf("1.) ENTER PLAYER NAME ");
    gotoxy(5,5);printf("2.) DELETE NAME OF PLAYER ");
    gotoxy(5,6);printf("3.) DISPLAY THE WHOLE SCORE OF EACH PLAYER ");
    gotoxy(5,7);printf("4.) EXIT");
    gotoxy(5,10);printf("SELECT NUMBER FROM (1 TO 4): ");
    scanf("%d", &a);
    return a;
}
void game()
{
    srand(time(NULL));
    while(1)
    {
        n1 = (rand() % TIMES)+1;
        n2 = (rand() % TIMES)+1;
         switch(play())
            {
                case 1: system("cls");add();break;
                case 2: system("cls");sub();break;
                case 3: system("cls");divi();break;
                case 4: system("cls");mul();break;
                case 5:q[flag1] = sum; t[flag1]=tri; menu1();break;
                default: gotoxy(5,13);printf("INVALID NUMBER");getch(); system("cls");
            }
    }
}
void sco()
{
     gotoxy(80,5);printf("= = = S C O R E S  = = =");
     gotoxy(80,6);printf("ADDITION: %.0f", score[flag1][0]);
     gotoxy(80,7); printf("SUBSTRACTION: %.0f",score[flag1][1]);
     gotoxy(80,8); printf("DIVISION: %.0f",score[flag1][2]);
     gotoxy(80,9); printf("MULTIPLICATION: %.0f",score[flag1][3]);
     gotoxy(80,10);printf("SCORE OF PLAY: %.2f%%\n",score[flag1][4]);
}

void add()
{  int s;
    sco();
    gotoxy(5,5);printf("WHAT IS %d + %d: ",n1,n2);
                            scanf("%d",&s);
    if(s == n1+n2)
    { gotoxy(5,7); printf("YOU GOT THE CORRECT ANSWER!!"); a++;
                                score[flag1][0]=a; sum++;
    }
    else
    {gotoxy(5,7);printf("YOU GOT THE WRONG ANSWER!!");
      gotoxy(5,8);printf("THE CORRECT ANSWER IS: %d",n1+n2);
      gotoxy(5,9);printf("BETTER LUCK NEXT TIME!!");
    }
    tri++;
    ave= (sum/tri)*100;
    score[flag1][4] = ave;
    sco();
    getch();
}
void sub()
{  int w;
    sco();
    gotoxy(5,5);printf("WHAT IS %d - %d: ",n1,n2);
                            scanf("%d",&w);
    if(w == n1-n2)
    { gotoxy(5,7); printf("YOU GOT THE CORRECT ANSWER!!"); s++;
                                score[flag1][1]=s; sum++;
    }
    else
    {gotoxy(5,7);printf("YOU GOT THE WRONG ANSWER!!");
      gotoxy(5,8);printf("THE CORRECT ANSWER IS: %d",n1-n2);
      gotoxy(5,9);printf("BETTER LUCK NEXT TIME!!");
    }
    tri++;
    ave= (sum/tri)*100;
    score[flag1][4] = ave;
    sco();
    getch();
}
void divi()
{  int s,e,h;
     sco();
     if (n2>n1){
    gotoxy(5,5);printf("WHAT IS %d / %d: ",n2,n1);
                            scanf("%d",&s);
   h= n2/n1; //q=roundf(q*100)/100;
    if(s == h)
    { gotoxy(5,7); printf("YOU GOT THE CORRECT ANSWER!!"); d++;
                                score[flag1][2]=d; sum++;
    }
    else
    {gotoxy(5,7);printf("YOU GOT THE WRONG ANSWER!!");
      gotoxy(5,8);printf("THE CORRECT ANSWER IS: %d", h);
      gotoxy(5,9);printf("BETTER LUCK NEXT TIME!!");
    }
     tri++;
    ave= (sum/tri)*100;
    score[flag1][4] = ave;
     sco();
    getch();}

    else if  (n1>n2){
    gotoxy(5,5);printf("WHAT IS %d /  %d: ",n1,n2);
                            scanf("%d",&s);
   h= n1/n2;// q=roundf(q*100)/100;
    if(s == n1/n2)
    { gotoxy(5,7); printf("YOU GOT THE CORRECT ANSWER!!"); d++;
                                score[flag1][2]=d; sum++;
    }
    else
    {gotoxy(5,7);printf("YOU GOT THE WRONG ANSWER!!");
      gotoxy(5,8);printf("THE CORRECT ANSWER IS: %d",h);
      gotoxy(5,9);printf("BETTER LUCK NEXT TIME!!");
    }
     tri++;
    ave= (sum/tri)*100;
    score[flag1][4] = ave;
     sco();
    getch();}
}
void mul()
{  int s;
     sco();
    gotoxy(5,5);printf("WHAT IS %d x %d: ",n1,n2);
                            scanf("%d",&s);
    if(s == n1*n2)
    { gotoxy(5,7); printf("YOU GOT THE CORRECT ANSWER!!"); m++;
                                score[flag1][3]=m; sum++;
    }
    else
    {gotoxy(5,7);printf("YOU GOT THE WRONG ANSWER!!");
      gotoxy(5,8);printf("THE CORRECT ANSWER IS: %d",n1*n2);
      gotoxy(5,9);printf("BETTER LUCK NEXT TIME!!");
    }
     tri++;
    ave= (sum/tri)*100;
    score[flag1][4] = ave;
     sco();
    getch();
}
int play ()
{
    int a;

    system("cls");   sco();
    gotoxy(5,3);printf("|| G - A - M - E     M - E - N - U ||");
    gotoxy(5,4); printf("1.) PLAY ADDITION NUMBER ");
    gotoxy(5,5);printf("2.) PLAY SUBSTRACTION NUMBER ");
    gotoxy(5,6);printf("3.) PLAY DIVISION NUMBER ");
    gotoxy(5,7);printf("4.) PLAY MULTIPLICATION NUMBER ");
    gotoxy(5,8);printf("5.) BACK TO MAIN MENU OPTION ");
    gotoxy(5,11);printf("SELECT NUMBER FROM (1 TO 5): ");
    scanf("%d", &a);
    return a;
}
void gotoxy(int x,int y){
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord) ;
}
void upload()
{
    FILE*fp;
    int x;
        fp=fopen("bscs","w+");
        fprintf(fp,"%d\n",flag);
        for(x=0;x<=flag;x++)
        {fprintf(fp,"%s\n%f\n%f\n%f\n%f\n%f\n%d\n%d\n",name[x],score[x][0],score[x][1],score[x][2],score[x][3],score[x][4],q[x],t[x]);}
        fclose(fp);
}
void download()
{
    int x;
    FILE*fp;
    fp=fopen("bscs","r+");
    if(fp==NULL){
        upload();
    }
    fscanf(fp, "%d\n",&flag);
           for(x=0;x<=flag;x++)
        {fscanf(fp,"%s\n%f\n%f\n%f\n%f\n%f\n%d\n%d\n",name[x],&score[x][0],&score[x][1],&score[x][2],&score[x][3],&score[x][4],&q[x],&t[x]);}
   /*while(!feof(fp))
        {
              flag++;
            fscanf(fp,"%s\n%d\n%d\n%d\n%d\n%d\n",name[flag],&score[flag][0],&score[flag][1],&score[flag][2],&score[flag][3],&score[flag][4]);
        }*/
        fclose(fp);
}
void disp()
{
    int z,y;
         if(flag < 0)
            {gotoxy(5,4);printf(" NO NAME STORED"); getch();}
         else{
            gotoxy(5,5);printf("NAME");  gotoxy(32,5);printf("ADDITION");
            gotoxy(45,5);printf("SUBTRACTION");  gotoxy(62,5);printf("DIVISION");
            gotoxy(74,5);printf("MULTIPLICATION"); gotoxy(93,5);printf("TOTAL");
            for (z=0;z<= flag;z++)
            {
                gotoxy(5,8+z);printf("%d.) %s",z+1,name[z]);
                for (y=0;y<4;y++)
                {
                    gotoxy(35+(15*y),8+z);printf("%.0f",score[z][y]);
                }
                  gotoxy(35+(15*4),8+z);printf("%.2f%%",score[z][4]);
            }
         }
}
