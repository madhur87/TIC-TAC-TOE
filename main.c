#include<conio.h>
#include<stdio.h>
int z[10],y[10],i;
char d[10];
int check(int c[10])
{
int j;
for(j=1;j<=3;j++)
if(c[j]&&c[j+3]&&c[j+6])
return 1;
for(j=1;j<=7;j+=3)
if(c[j]&&c[j+1]&&c[j+2])
return 1;
if(c[1]&&c[5]&&c[9] || c[3]&&c[5]&&c[7])
return 1;
return 0;
}
void print1(int s[10],int flag)
{
printf("\n\n\t\t\t %c | %c | %c\n\t\t\t___|___|___\n\t\t\t %c | %c | %c\n\t\t\t___|___|___\n\t\t\t %c | %c | %c\n\t\t\t ",d[7],d[8],d[9],d[4],d[5],d[6],d[1],d[2],d[3]);
if(check(s))
{
printf("\n\n\nPlayer %d wins",flag);
i=11;
}
}
void toe()
{
char yo='X',ol='O';
printf("\n\t\t\tTIC-TAC-TOE\n");
printf("Player 1 Symbol %c\nPlayer 2 Symbol %c",yo,ol);
printf("\n\n\t\t\t 7 | 8 | 9\n\t\t\t___|___|___\n\t\t\t 4 | 5 | 6\n\t\t\t___|___|___\n\t\t\t 1 | 2 | 3 \n\t\t\t");
}
void condition()
{
print1(z,1);
i--;
printf("\n\nOOps!!! This block is already filled ,please enter another block no.");
}
void design()
{
int a=0,q;
for(q=1;q<10;q++)
z[q]=y[q]=d[q]=0;
toe();
for(i=1;i<10;i++)
{
phir:
if(i%2==1)
printf("\n\nPlayer 1 enter the block no. ");
else
printf("\n\nPlayer 2 enter the block no. ");
a=getch()-48;
if(a<0||a>10)
{
printf("Wrong block no. entered");
goto phir;
}
system("cls");
toe();
if(i%2==1)
{
if(d[a])
condition();
else
{
 z[a]=1,d[a]='X';
 print1(z,1);
}
}
else
{
if(d[a])
condition();
else
{
y[a]=1,d[a]='O';
print1(y,2);
}
}
}
if(i==10)
printf("\n\nGame Drawn");
printf("\n\npress any key to continue");
}
void main()
{
char ch;
int oip;
system("cls");
printf("\n\n\n\n\n\t\t\t\t SOFTECH\n\n\t\t\t\t PRESENTS\n\n\n\t\t\t\tTIC-TAC-TOE\n\n\n\npress any to continue");
getch();
while(1)
{
system("cls");
printf("\n\n\t\t\t\t\tTIC-TAC-TOE\n\n\n\t1.) START\t\t\tpress 1\n\n\t2.) EXIT\t\t\tpress 2");
oip=getch()-48;
switch(oip)
{
case 1:
system("cls");
design();
break;
case 2:
exit(0);
break;
default:
printf("Sorry wrong choice");
break;
}
getch();
}
}

