#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int t=0,i=0,j,m,n;
		char a[1000];
		scanf("%s",a);
		if(a[0]>='A'&&a[0]<='Z')
		{
		 while(a[i]!='\0')
		{
			t=26*t+a[i]-64;
			i++;
		}
		printf("%d\n",t);
	}
	else
	{ j=0,t=0;
		while(a[j]!='\0')
		j++;
		for(i=0;a[i]!='\0';i++,j--)
		t=t+(a[i]-48)*pow(10,j-1);
		m=t/26;
		n=t%26;
		printf("%c",64+m);
		printf("%c\n",n+64);
	}
	}
}
