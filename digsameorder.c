#include <stdio.h>
int main() {
int n,a,ar[5],i=0,j;
scanf("%d",&n);
while(n!=0)
{
 a=n%10;
 ar[i]=a;
 i++;
 n=n/10;
}
for(j=i-1;j>=0;j--)
{
   
	printf("%d ",ar[j]);
}
}
