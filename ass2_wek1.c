#include<stdio.h>
int main(){
	int t,n,i,visit[10];
	scanf("%d",&t);
	visit[1]=1;
	int flag=1;
	while(t--){
		scanf("%d",&n);
		for(i=1;i<n-1;i++){
			visit[i]=1;
		}
		for(i=0;i<n-1;i++){
			if(visit[i]!=1)
				flag=0;
		}
		if(flag==1)
			printf("yes");
		else
			printf("no");
	}
}
