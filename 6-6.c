#include <stdio.h>
int main(){
	int N=10;
	int i,j;
	int y[N][N];
	y[0][0]=y[1][0]=y[1][1]=1;
	for(i=2;i<N;i++){
		y[i][0]=1;
		y[i][i]=1;
		for(j=1;j<=i-1;j++){
			y[i][j]=y[i-1][j-1]+y[i-1][j];
		}
	}
	for(i=0;i<N;i++){
		for(j=0;j<=i;j++){
			printf("%-5d",y[i][j]);
		}
		printf("\n");
	}
	return 0;
}
/*
1    
1    1    
1    2    1    
1    3    3    1    
1    4    6    4    1    
1    5    10   10   5    1    
1    6    15   20   15   6    1    
1    7    21   35   35   21   7    1    
1    8    28   56   70   56   28   8    1    
1    9    36   84   126  126  84   36   9    1 
*/