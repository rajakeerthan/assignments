#include<stdio.h>
int main(){
	int t,n,x,a[20],b[20],i;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		scanf("%d",&x);
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(i=0;i<x;i++){
			scanf("%d",&b[i]);
		}
		maggie(a,b,x,n);
	}
	return 0;
}
int maggie(int a[],int b[],int x,int n){
	int i,j,count,cost;
	sort(a,n);
	for(i=0;i<n;i++){
			printf("%d  ",a[i]);
		}
		printf("\n");
	for(j=0;j<x;j++){
		count=0;
		cost=0;	
		for(i=n-1;i>=0;i--){
		
				cost=cost+a[i];
				count++;
				if(cost>=b[j]){
					break;
				}
		}
		if(count==n && cost<b[j]){
			printf("-1");			
		}
		else{
			printf("%d\n",count);
		}
	}
}
int sort(int h[],int m){
	int i,j,temp;
	for(i=0;i<m;i++){
		for(j=i+1;j<m;j++){
			if(h[i]>h[j]){
				temp=h[i];
				h[i]=h[j];
				h[j]=temp;
			}
		}
	}
}
