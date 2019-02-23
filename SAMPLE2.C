// a program to encrypt some text message
#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
	int i,x,l;
	char mess[100],result[100];
	clrscr();

	printf("\n A PROGRAM TO DEMONESTRATE POSITION'S SQUARE:--");
	printf("\n=================================================");

	printf("\nenter the message: ");
	gets(mess);


	printf("\nthe original message is: \n");
	puts(mess);


    l=strlen(mess);
    printf("\nafter encription the result is: \n");
    for(i=0;i<l;i++)
    {
	x=(int)mess[i];
	x=x+i*i;       //encryption
	result[i]=(char)x;
	printf("%c",(char)x);
	}
	result[i]='\0';

	printf("\nafter decryption the result is: \n");
	for(i=0;i<l;i++)
    {
	x=(int)result[i];
	x=x-i*i;
	printf("%c",(char)x);
	}

	getch();
	return 0;
}
