#include<stdio.h>
#include<string.h>
int main()
{ int n,b[1000]={0};
int i,j,t,max;
  scanf("%d",&n);
  char a[10000][10];
  for(i=0;i<n;i++)
   scanf("%s",a[i]);
  for(i=0;i<n;i++)
   for(j=0;j<n;j++)
    if(strcmp(a[i],a[j])==0)
     b[i]++;
    max=b[0];t=1;
    for(i=1;i<n;i++)
     if(max<b[i])
     {max=b[i];
     t=i;}
     printf("%s %d\n",a[t],t+1);
}
