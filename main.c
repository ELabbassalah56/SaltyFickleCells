#include <stdio.h>
#include<string.h>
#include <ctype.h>
int main(void) {
  char result=0;
  char str1[100];
  scanf("\n");
  scanf("%[^\n]s",str1);
 for(int index=1; index<strlen(str1); index++)
    {
        if(str1[index]>='A'&&str1[index]<='Z')
        {
            result++;
        }
    }
    if(result==strlen(str1)-1)
    {
        for(int index=0; index<strlen(str1); index++)
        {
            if(str1[index]>='A'&& str1[index]<='Z')
            str1[index]=tolower(str1[index]);
            else if(str1[index]>='a'&&str1[index]<='z')
            str1[index]=toupper(str1[index]);
        }
    }
    printf("%s",str1);
  
  return 0;
  }