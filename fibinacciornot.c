#include<stdio.h>
int main()
{
    int i,n,first=0,second=1,next;
    scanf("%d ",&n);
    if(n==0)
    {
        printf("Fibinacci");
        next=first+second;
        first=second;
        second=next;
    }
    else
    {
    	printf("Not Fibbinacci");
	}
}
