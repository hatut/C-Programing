#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swap(char* a, char* b)
{
    char c=*a;
    *a=*b;
    *b=c;
}
char* sortString(const char * const s)
{   
    int len=strlen(s);
    char* a=malloc(len+5);
    memcpy(a,s,len+1);
    for(char* i=a;i<a+len-1;i++)
    {
        for(char* j=i+1;j<a+len;j++)
        {
            if(*i>*j) swap(i,j);
        }
    }
    return a;
    
}