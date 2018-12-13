    #include<stdio.h>  
    #include<string.h>  
    char a[222],s[222];  
    int next[222];  
    int len,c;  
    void getnext()  
    {  
        int i=0,j=-1;  
        next[i]=j;  
        while(i<len)  
        {  
            if(j==-1||s[i]==s[j])  
            {  
                i++,j++;  
                next[i]= j;  
            }  
            else  
            j = next[j];  
        }  
        if(len%(len-next[len])==0)  
            c=len/(len-next[len]);//循环次数   
    }  
    int main()  
    {  
        int t,l,i,j;  
        scanf("%d",&t);  
        while(t--)  
        {  
            memset(s,'\0',sizeof(s));  
            scanf("%s",a);  
            len=strlen(a);  
            for(i=2,j=0;i<len;i++,j++)  
                s[j] = a[i];  
            len-=2;  
            getnext();  
            l = len/c; //循环节长度   
            printf("%d ",l);  
            for(i=0;i<l;i++)  
            printf("%c",s[i]);//循环节   
            printf(" %d\n",c); //次数   
        }  
        return 0;  
    }  
