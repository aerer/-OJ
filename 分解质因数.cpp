#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm> 
using namespace std;
typedef long long ll;
int main()
{
	char a[10],b[17]="0123456789ABCDEF";
	ll m,n;
	scanf("%lld",&m);
	n=m;
	int i=0;
	while(n)
	{
		a[i++] = b[n%16];
		n /= 16;
	}
	//a[i]=b[n%16];
	i-=1;
	while(i>=0)
	{
		printf("%c",a[i--]);
	}
	if(m==0)
		printf("0");
	printf("\n");
	//printf("%s\n",b);
	return 0;
}
