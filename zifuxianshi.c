zzh1
====
#include <stdio.h> 
#include <stdlib.h>
#include <limits.h>
int main(int argc, char* argv[])
{
 char a,i,mask=1<<CHAR_BIT-1;
 a=getchar();

 for (i=1; i <= CHAR_BIT; i++) {
  putchar((a&mask)?'1':'0');

  a<<=1;

 }
 putchar('\n');
 system("pause");
 return 0;
}
