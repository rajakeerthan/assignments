#include<stdio.h>
#include<stdlib.h>
int sum=0;
int main(){
	int t,n,k,a[10],i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
			scanf("%d",&a[i]);
	}
	for(i=0;i<t;i++){
			sum=0;
			k=split(a[i]);
			printf("%d\n",k);
	}
	printf("\b");
}
int split(n){
	int product=0,a,b;
	if(n==1)
		return 1;
	else{
		if(n%2==0){
			a=n/2;
			b=n/2;
			product=a*b;
		}
		else{
			a=n/2;
			b=n/2+1;
			product=a*b;
		}
		sum=sum+product;
		split(a);
		split(b);
	}
	return sum;
}
