// a program to encrypt some text message
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	int i,key,x,l;
	char mess[100],result[100];
	clrscr();
	
	printf("\nA PROGRAM TO DEMONESTRATE CAESAR CIPHER:--");
	printf("\n============================================");
	
	printf("\nEnter the message: ");
	gets(mess);
	

	printf("\nThe original message is: \n");
	puts(mess);
    
	printf("\nEnter the key value: ");
	scanf("%d",&key);
    
    l=strlen(mess);
    printf("\nAfter encription the result is: \n");
    for(i=0;i<l;i++)
    {
    	x=(int)mess[i];
    	x=(x+key);
    	result[i]=(char)x;
    	printf("%c",(char)x);
	}
	result[i]='\0';

	printf("\nAfter decryption the result is: \n");
	for(i=0;i<l;i++)
       {
    	x=(int)result[i];
    	x=x-key;
    	printf("%c",(char)x);
	}

	getch();
	return 0;
}
