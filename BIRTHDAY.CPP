#include<stdio.h>
#include<conio.h>
#include<dos.h>
int main()
{

int ch,i,j=0,a=391,c=493,b=440,d=523,e=587,f=659,g=698,h=783;
printf("How Many Times you want to listen to this tune ???");
scanf("%d",&ch);
for(i=0;i<ch;i++)
{
sound(a);
delay(250);
sound(j);
delay(20);
sound(a);
delay(250);
sound(b);
delay(250);
sound(a);
delay(250);
sound(d);
delay(250);
sound(c);
delay(500);
sound(j);
delay(300);

sound(a);
delay(250);
sound(j);
delay(20);
sound(a);
delay(250);
sound(b);
delay(250);
sound(a);
delay(250);
sound(e);
delay(250);
sound(d);
delay(500);

sound(a);
delay(250);
sound(a);
delay(250);
sound(h);
delay(250);
sound(f);
delay(250);
sound(d);
delay(250);
sound(c);
delay(250);
sound(b);
delay(400);

sound(g);
delay(250);
sound(g);
delay(250);
sound(f);
delay(250);
sound(d);
delay(250);
sound(e);
delay(250);
sound(d);
delay(1000);
nosound();
delay(3000);
}
getch();
return 0;
}
