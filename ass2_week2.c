#include<stdio.h>
int main(){
	int n,i,visit[100],flag=0;
	visit[1]=1;
	scanf("%d",&n);
	int k=0,j=1,m;
 	while(k<200){
      k++;
      m=k;
      //int j=k;
      while(--m)
        j=(j+1)%n;
      j=j+1;
      visit[j]=1;
  	}
  for(i=1;i<=n;i++){
    if(visit[i]!=1){
      flag=1;
      break;
    }
  }
  if(flag==1){
    printf("NO");
  }
  else{
    printf("YES");
  }
}
  	
