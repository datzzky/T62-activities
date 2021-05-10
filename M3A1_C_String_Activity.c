#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
	char text[255];
    int  i;
   printf("Input your text: ");
   gets(text);
   printf("The original string: ");
   puts(text);
   i=0;
    while(text[i]!='\0')
    {
        if(text[i]=='a' ||text[i]=='e' ||text[i]=='i' ||text[i]=='o' ||text[i]=='u')
            text[i]=text[i]-32;
        i++;
    }
    printf("Your new text are: ");
	puts(text);
	printf("the size of youre text is %d\n", strlen(text));
	getch();
}
