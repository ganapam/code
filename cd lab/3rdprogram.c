/*Program to identify the keyword, function, operator and constant in a given input file. */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<string.h>
int iskeyword(char *str,char ch1)
{
     if(strcmp("int",str)==0)
     return 1;
     else if(ch1=='(')
     {//printf("%s",str);
     return 2;}
     else if(ch1=='[')
     {//printf("%s",str);
     return 3;}
    return 0;
     
}
int isspchar(char ch)
{
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='=')
    return 1;
    return 0;
}
int main()
{
   char ch,ch1, file_name[25],str[20],str1[20];
   FILE *fp;
   int k=0,l=0;
 
   printf("Enter name of a file you wish to see\n");
   gets(file_name);
 
   fp = fopen(file_name, "r"); // read mode
 
   if (fp == NULL)
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }
 
  // printf("The contents of %s file are:\n", file_name);
   k=0;
   while((ch = fgetc(fp)) != EOF)
     { 
          if(isalpha(ch))
          str[k++]=ch;
          else
         {    
              l=0;
              if(isdigit(ch))
              { 
                str1[l++]=ch;
              	ch1=fgetc(fp);
   L:           if(isdigit(ch1))
              	{ 
              	    str1[l++]=ch1;
              	    ch1=fgetc(fp);
              	    goto L;
				  }
                 str1[l]='\0';
                 fseek(fp,-1,SEEK_CUR);
                 printf("%s is constant",str1);
                 l=0;
              	
			  }
			  else if(isspchar(ch))
              {
                   printf(" %c is operator \n",ch);
                   k=0;
            
              }
              else
               {
                 //ch1=fgetc(fp);
                 str[k]='\0';
                  //printf("%s \n",str);
                  if(iskeyword(str,ch)==1)
                  printf("%s is keyword \n",str);
                  else if(iskeyword(str,ch)==2)
                  printf("%s is function\n ",str);
                  else if(iskeyword(str,ch)==3)
                   printf("%s is array var \n",str);
                    //str[0]=ch1; 
                    k=0;
               }
              
          }
          
     }
      //printf("%c", ch);
 
   fclose(fp);
   return 0;
}
