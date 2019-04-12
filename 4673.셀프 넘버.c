#include <stdio.h>

int jarisu(int i, int j){
	int add=0;
	while(1){
		if(j==0){
			break;
		}
		else{
			add=add+j%10;
			j=j/10;
		}
	}
	return i+add;
}	

void main() {
	int i,j;
	for(i=1;i<=10000;i++){
		for(j=1;j<=i;j++){
			if(i==jarisu(j,j))
			break;
			if(i==j)
			printf("%d\n",i);
		}
	}
}
