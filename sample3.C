#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

int string_length(char []);

int main()
{
   char string[100],*array,count=0,ch;
   int i,j,k;
   FILE *fp;
   //clrscr();
   printf("\nA PROGRAM TO DEMONESTRATE TRANSPOSITION CIPHER:--");
   printf("\n==================================================");
   fp=fopen("PRA_ID.txt","w");
   if(fp==NULL)
   {
	 printf("cannot open file");
   }
   else
   {
	 puts("\nEnter the string:-");
	 while(string_length(gets(string))>0)
	 {
		count=count+strlen(string);
		fputs(string,fp);
		fputs("\n",fp);
	 }
	 fclose(fp);
	 array=(char *)calloc(((count/5)+1)*5,sizeof(char));
	 fp=fopen("PRA_ID.txt","r");
	 i=0;
	 j=0;
	 while((ch=fgetc(fp))!=EOF)
	 {

		   array[i*5+j]=ch;
		   j++;
		   if(j==5)
		   {
			i++;
			j=0;
		   }
	 }
	 printf("\n\nThe encrypted version is\n");
	 for(k=0;k<i;k++)
	 {
	      for(j=0;j<5;j++)
	      {
		   printf("%c",array[j*i+k]);
	      }
	     // printf("\n");
	 }
	 printf("\n\nThe decrypted version is\n");
	 for(k=0;k<i;k++)
	 {
	      for(j=0;j<5;j++)
	      {
		  printf("%c",array[k*5+j]);
	      }
	 }
    }
    //getch();
    return 0;
}


int string_length(char string[])
{
     int i=0;
     for(i=0;string[i]!='\0';i++);
     return i;
}
