#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
char *s;
int l,i,arr[10];
 scanf("%s",s);
 l=strlen(s)+1;

 for(i=0;i<10;i++)
 arr[i]=0;
 for(i=0;i<l;i++)
 {
 
 if(s[i]>='0'&&s[i]<='9')
 arr[s[i]-'0']++;
 }  
 
 
 for(i=0;i<10;i++)
 printf("%d",arr[i]);
 printf("\n");
   return 0;
}
