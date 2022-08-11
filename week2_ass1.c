#include<stdio.h>
int main(){
	int t,k,n,x,h[20],i;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		scanf("%d",&x);
		for(i=0;i<2*n;i++){
			scanf("%d",&h[i]);
		}
		k=arrange(n,x,h);
		if(k==1)
			printf("YES");
		else
			printf("NO");
	}
	return 0;
}
int arrange(int n,int x,int h[]){
		int i,flag=0;
		sort(h,2*n);
		printf("\n");
		int j=n;
		for(i=0;i<n;i++){
			if(h[j]-h[i]<x){
				flag=-1;
				break;
			}
			j++;
		}
		if(flag==0){
			return 1;
		}
		else
			return 0;
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
