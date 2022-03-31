#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

   int isoperator(char ch)
     {
       return((ch=='+')||(ch=='-')||(ch=='%')||(ch=='/')||(ch=='*'))?1:0;
     }
       int punctuation(char ch)
        {
           return ((ch==';')||(ch==','))?1:0;
        }
        int iskeyword(char*s)
         {
           return((strcmp("int",s)==0)||(strcmp("char",s)==0)||(strcmp("return",s)==0))?1:0;
         }
            
           int main()
            {
                              char ch,str[20],str1[30];
              int k;
              FILE*fp;
              fp=fopen("add.c","r");
              if(fp==NULL)
              {
                printf("file not opened successfully");
                exit(1);
              }
                k=0;
                while((ch=fgetc(fp))!=EOF)
                {
                   if(isalpha(ch))
                   str[k++]=ch;
                   else if(isdigit(ch))
                   str[k++]=ch;
                   else
                        {
                          str[k]='\0',str1[k]='\0';
                          if(isoperator(ch))
                             printf("\n %c is a operator",ch);
                          if(punctuation(ch))
                             printf("\n %c is a punctuation",ch);
                          if(iskeyword(str))
                             printf("\n %s is akeyword",str);
                          if(k!=0)
                             printf("\n %s is a number",str1);
                             k=0;
                        }
                  }
         return 0;
        }
/*Add.c*/

#include<stdio.h>
#include<conio.h>
int    main()
{
     int a=5,b=6,c;
     c=a+b;
     printf("%d",c);
     return 0;
}