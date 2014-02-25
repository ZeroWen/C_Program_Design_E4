#include <stdio.h>
#define M 10
#define N 5
int highest_stu=0,highest_sub=0;
float highest_score=0;
int main(){
	int i,j;
	float a[M][N];
	float ave_stu(float score[M][N],int n),ave_sub(float score[M][N],int n),variance(float score[M][N]);
	void highest(float score[M][N]);
	for(i=0;i<10;i++){
	printf("Please input the scores of student NO.%d\n",i+1);
	for(j=0;j<5;j++)
		scanf("%f",&a[i][j]);
	}
	for(i=0;i<M;i++)
		printf("The average score of student NO.%d is %4.1f.\n",i+1,ave_stu(a,i));
	for(j=0;j<N;j++)
		printf("The average score of subject NO.%d is %4.1f.\n",j+1,ave_sub(a,j));
	highest(a);
	printf("The highest score %4.1f is subject NO.%d of student NO.%d.\n",highest_score,highest_sub+1,highest_stu+1);
	printf("The variance of the average scores is %f.\n",variance(a));
	return 0;
}
//计算学生平均分
float ave_stu(float score[M][N],int n){
	int i;
	float sum=0;
	for(i=0;i<N;i++)
		sum+=score[n][i];
	return(sum/N);
}
//计算科目平均分
float ave_sub(float score[M][N],int n){
	int i;
	float sum=0;
	for(i=0;i<M;i++)
		sum+=score[i][n];
	return(sum/M);
}
//计算最高分以及最高分所属的学生及科目
void highest(float score[M][N]){
	int i,j;
	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
			if(highest_score<score[i][j]){
				highest_score=score[i][j];
				highest_stu=i;
				highest_sub=j;
			}
}
//计算平均分方差
float variance(float score[M][N]){
	int i;
	float v,sum_ave=0,square_ave=0;
	float ave_stu(float score[M][N],int n);
	for(i=0;i<M;i++)
		sum_ave+=ave_stu(score,i);
	for(i=0;i<M;i++)
		square_ave+=ave_stu(score,i)*ave_stu(score,i);
	v=square_ave/M-(sum_ave/M)*(sum_ave/M);
	return v;
}
/*
#include <stdio.h>
#define N 10
#define M 5
float score[N][M];
float a_stu[N],a_cour[M];
int r,c;
int main(){
	int i,j;
	float h;
	float s_var(void);
	float highest();
	void input_stu(void);
	void aver_stu(void);
	void aver_cour(void);
	input_stu();
	aver_stu();
	aver_cour();
	printf("\n  NO.     cour1   cour2   cour3   cour4   cour5   aver\n");
	for(i=0;i<N;i++){
		printf("\n NO %2d ",i+1);
		for(j=0;j<M;j++)
			printf("%8.2f",score[i][j]);
		printf("%8.2f\n",a_stu[i]);
	}
	printf("\naverage:");
	for(j=0;j<M;j++)
		printf("%8.2f",a_cour[j]);
	printf("\n");
	h=highest();
	printf("highest:%7.2f   NO. %2d   course %2d\n",h,r,c);
	printf("variance %8.2f\n",s_var());
	return 0;
}
void input_stu(void){
	int i,j;
	for(i=0;i<N;i++){
		printf("\ninput score of student%2d:\n",i+1);
		for(j=0;j<M;j++)
			scanf("%f",&score[i][j]);
	}
}
void aver_stu(void){
	int i,j;
	float s;
	for(i=0;i<N;i++){
		for(j=0,s=0;j<M;j++)
		s+=score[i][j];
		a_stu[i]=s/5.0;
	}
}
void aver_cour(void){
	int i,j;
	float s;
	for(j=0;j<M;j++){
		s=0;
		for(i=0;i<N;i++)
			s+=score[i][j];
		a_cour[j]=s/(float)N;
	}
}
float highest(){
	float high;
	int i,j;
	high=score[0][0];
	for(i=0;i<N;i++)
		for(j=0;j<M;j++)
			if(score[i][j]>high){
				high=score[i][j];
				r=i+1;
				c=j+1;
			}
	return(high);
}
float s_var(void){
	int i;
	float sumx,sumxn;
	sumx=0.0;
	sumxn=0.0;
	for(i=0;i<N;i++){
		sumx+=a_stu[i]*a_stu[i];
		sumxn+=a_stu[i];
	}
	return(sumx/N-(sumxn/N)*(sumxn/N));
}
*/