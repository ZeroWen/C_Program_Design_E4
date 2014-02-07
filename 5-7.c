#include <stdio.h>
int main(){
	int n1=100,n2=50,n3=10;
	double k=1,s1=0,s2=0,s3=0;
	for(;k<=n1;k++)  /*计算1到100的和*/
		s1=s1+k;
	for(k=1;k<=n2;k++)  /*计算1到50各数的平方和*/
		s2=s2+k*k;
	for(k=1;k<=n3;k++)  /*计算1到10的各倒数和*/
		s3=s3+1/k;
	printf("sum=%12.6f\n",s1+s2+s3);
	return 0;
}

/*
#include <stdio.h>
int main(){
	double s;
	int plus(int,int);
	int plus_sqr(int,int);
	double plus_rec(int,int);
	s=plus(1,100)+plus_sqr(1,50)+plus_rec(1,10);
	printf("sum=%f\n",s);
	return 0;
}
int plus(int k,int n){
	float sum=0.0;
	for(;k<=n;k++){
		sum=sum+k;
	}
	return(sum);
}
int plus_sqr(int k,int n){
	float sum=0.0;
	for(;k<=n;k++){
		sum=sum+k*k;
	}
	return(sum);
}
double plus_rec(int k,int n){
	double sum=0.0;
	for(k=1;k<=n;k++){
		sum=sum+1/k;
	}
	return(sum);
}*/