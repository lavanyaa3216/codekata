#include <stdio.h>

int main(void) {
 int a[10],n,k,i,y;
 scanf("%d%d",&n,&k);
 for(i=0;i<n;i++)
 {
 	scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
 	if(k==a[i])
    y=1;
 }
if(y==1)
	printf("yes");
else
	printf("no");
}
