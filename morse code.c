#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<ctype.h>
#include<windows.h>
void main()
{
    while(1)
    {
system("cls");
char str[25],str1[100]={'\0'};

printf("Enter any String to Convert into Morse Code :: ");
gets(str);
int j=0;
for(int i=0;i<=strlen(str);i++)
{
switch (toupper(str[i]))
		{
case ' ':
str1[j++]='/';
break;
case 'A':
str1[j++]='.';
str1[j++]='-';
str1[j]='\0';
break;
case 'B':
str1[j++]='-';
str1[j++]='.';
str1[j++]='.';
str1[j++]='.';
break;
case 'C':
str1[j++]='-';
str1[j++]='.';
str1[j++]='-';
str1[j++]='.';
break;
case 'D':
str1[j++]='-';
str1[j++]='.';
str1[j++]='.';
break;
case 'E':
str1[j++]='.';
break;
case 'F':
str1[j++]='-';
str1[j++]='.';
str1[j++]='-';
str1[j++]='.';
break;
case 'G':
str1[j++]='-';
str1[j++]='-';
str1[j++]='.';
break;
case 'H':
str1[j++]='.';
str1[j++]='.';
str1[j++]='.';
str1[j++]='.';
break;
case 'I':
str1[j++]='.';
str1[j++]='.';
break;
case 'J':
str1[j++]='.';
str1[j++]='-';
str1[j++]='-';
str1[j++]='-';
break;
case 'K':
str1[j++]='-';
str1[j++]='.';
str1[j++]='-';
break;
case 'L':
str1[j++]='.';
str1[j++]='-';
str1[j++]='.';
str1[j++]='.';
break;
case 'M':
str1[j++]='-';
str1[j++]='-';
break;
case 'N':
str1[j++]='-';
str1[j++]='.';
break;
case 'O':
str1[j++]='-';
str1[j++]='-';
str1[j++]='-';
break;
case 'P':
str1[j++]='.';
str1[j++]='-';
str1[j++]='-';
str1[j++]='.';
break;
case 'Q':
str1[j++]='-';
str1[j++]='-';
str1[j++]='.';
str1[j++]='-';
break;
case 'R':
str1[j++]='.';
str1[j++]='-';
str1[j++]='.';
break;
case 'S':
str1[j++]='.';
str1[j++]='.';
str1[j++]='.';
break;
case 'T':
str1[j++]='-';
break;
case 'U':
str1[j++]='.';
str1[j++]='.';
str1[j++]='-';
break;
case 'V':
str1[j++]='.';
str1[j++]='.';
str1[j++]='.';
str1[j++]='-';
break;
case 'W':
str1[j++]='.';
str1[j++]='-';
str1[j++]='-';
break;
case 'X':
str1[j++]='-';
str1[j++]='.';
str1[j++]='.';
str1[j++]='-';
break;
case 'Y':
str1[j++]='-';
str1[j++]='.';
str1[j++]='-';
str1[j++]='-';
break;
case 'Z':
str1[j++]='-';
str1[j++]='-';
str1[j++]='.';
str1[j++]='.';
break;
case '0':
str1[j++]='-';
str1[j++]='-';
str1[j++]='-';
str1[j++]='-';
str1[j++]='-';
break;
case '1':
str1[j++]='.';
str1[j++]='-';
str1[j++]='-';
str1[j++]='-';
str1[j++]='-';
break;
case '2':
str1[j++]='.';
str1[j++]='.';
str1[j++]='-';
str1[j++]='-';
str1[j++]='-';
break;
case '3':
str1[j++]='.';
str1[j++]='.';
str1[j++]='.';
str1[j++]='-';
str1[j++]='-';
break;
case '4':
str1[j++]='.';
str1[j++]='.';
str1[j++]='.';
str1[j++]='.';
str1[j++]='-';

break;
case '5':
str1[j++]='.';
str1[j++]='.';
str1[j++]='.';
str1[j++]='.';
str1[j++]='.';
break;
case '6':
str1[j++]='-';
str1[j++]='.';
str1[j++]='.';
str1[j++]='.';
str1[j++]='.';
break;
case '7':
str1[j++]='-';
str1[j++]='-';
str1[j++]='.';
str1[j++]='.';
str1[j++]='.';
break;
case '8':
str1[j++]='-';
str1[j++]='-';
str1[j++]='-';
str1[j++]='.';
str1[j++]='.';
break;
case '9':
str1[j++]='-';
str1[j++]='-';
str1[j++]='-';
str1[j++]='-';
str1[j++]='.';
break;

}

}
str1[j]='\0';
puts(str1);
getch();
    }
}
