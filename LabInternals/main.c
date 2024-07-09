#include<stdio.h>
int compare_string(char*, char*);
main()
{
char f[100], s[100] ,result;
printf("Enter first string\n");
gets(f);
printf("Enter second string\n");
gets(s);
result = compare_string(&f, &s);
if ( result == 0 )
{printf("Both strings are same.\n");
printf("%c hi", result);}
else
printf("Entered strings are not equal.\n");
return 0;
}
int compare_string(char *first, char *second)
{
printf("%p", *first);
while(*first==*second)
{
if ( *first == '\0' || *second == '\0' )
break;
first++;
second++;

}
if( *first == '\0' && *second == '\0' )
return 0;
else
return -1;
}
