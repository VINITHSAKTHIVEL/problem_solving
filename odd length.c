//given an 






#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char c[10];
    scanf("%s",c);
    //printf("%s\n\n",c);
    int len=strlen(c);
    int mid=len/2;
    char a[20];
    for(i=0;i<=mid;i++)
    {
      a[i]=c[mid+i];  
    }
    for(j=0;j<mid;j++)
    {
       a[i+j]=c[j]; 
    }
  //  printf("%s\n\n\n",a);
    
    for(i=0;i<len;i++)
    {
        for(j=0;j<len-(i+1);j++)
        {
            printf("\t");
        }
        for(j=0;j<=i;j++)
        {
            
         printf("%c",a[j]);
    }
        printf("\n");
    }
     return 0;
}
