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