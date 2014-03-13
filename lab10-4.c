/*
 * =====================================================================================
 *
 *       Filename:  lab10-4.c
 *
 *    Description:  设有若干个人员的数据，其中有学生和教师。学生的数据中包括：姓名、学号、性别、职业、班级。教师的数据包括：姓名、编码、性别、职业、职务。要求输入人员的数据，然后再输出。
 *
 *        Version:  1.0
 *        Created:  03/12/2014 11:52:45
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
#define M 2
#define N 2
struct Student{
	char name[20];
	int num;
	char sex;
	char job[10];
	int class;
};
struct Teacher{
	char name[20];
	int num;
	char sex;
	char job[10];
	char work[10];
};
int main(){
	struct Student stu[M];
	struct Teacher tea[N];
	int i;
	for(i=0;i<M;i++){
		printf("Please input the info of student number %d\n",i+1);
		printf("name:");
		scanf("%s",stu[i].name);
		printf("num and sex:");
		scanf("%d %c",&stu[i].num,&stu[i].sex);
		printf("job:");
		scanf("%s",stu[i].job);
		printf("class:");
		scanf("%d",&stu[i].class);
	}
	for(i=0;i<N;i++){
		printf("Please input the info of teacher number %d\n",i+1);
		printf("name:");
		scanf("%s",tea[i].name);
		printf("num and sex:");
		scanf("%d %c",&tea[i].num,&tea[i].sex);
		printf("job:");
		scanf("%s",tea[i].job);
		printf("work:");
		scanf("%s",tea[i].work);
	}
	printf("Student\nname  num  sex job   class\n");
	for(i=0;i<M;i++)
		printf("%-6s %d %c %s %d\n",stu[i].name,stu[i].num,stu[i].sex,stu[i].job,stu[i].class);
	printf("Teacher\nname  num  sex job   work\n");
	for(i=0;i<N;i++)
		printf("%-6s %d %c %s %s\n",tea[i].name,tea[i].num,tea[i].sex,tea[i].job,tea[i].work);
	return 0;	
}
