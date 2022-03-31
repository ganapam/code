/*write a lex program to check given input is a keyword or identifier or digit*/
% {
    #include<Stdio.h>
% }
%%
if|for|while|do|const|char|int|double|float|switch|static|auto|register|void|break|continue|return|sizeof|case|default|short|signed|struct|switch|typedef|union|unsigned|volatile|else|enum|extern|goto|long
{printf("It is a keyword");}
[a-z]([a-z] | [0-9])*{printf("It is a identifier");}
[0-9]*{printf("It is a digit");}
.*{printf("Invalid Input");}
%%
main()
{
    yylo()
    return 0;
}