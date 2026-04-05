#include<stdio.h>
int main(){
int n,i,a=0,b=1,c;
printf("Enter number of terms");
scanf("%d",&n);
printf("fabonacci series");
for(i=1;1<=n;i++){
printf("%d",a);
c=a+b;
a=b;
b=c;
}
return 0;
}
