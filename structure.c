#include<stdio.h>
#include<stdlib.h>
struct student
{
	int rollno;
	int class;
	char gender[10];
	char studentname[100];
	char city[100];
	float cgpa;
	
};
void main()
{
	struct student s[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("Student %d\n",i+1);
		printf("Enter rollno\n");
		scanf("%d",&s[i].rollno);
		printf("Enter class\n");
		scanf("%d",&s[i].class);
		printf("Enter gender\n");
		scanf("%s",s[i].gender);
		printf("Enter studentname\n");
		scanf("%s",s[i].studentname);
		printf("Enter cgpa\n");
		scanf("%f",&s[i].cgpa);
		printf("Enter city\n");
		scanf("%s",s[i].city);
	}

	for(i=0;i<5;i++)
	{
		printf("Student %d\n",i+1);
		printf("rollno\n");
		printf("%d",s[i].rollno);
		printf("class\n");
		printf("%d",s[i].class);
		printf("gender\n");
		printf("%s",s[i].gender);
		printf("studentname\n");
		printf("%s",s[i].studentname);
		printf("cgpa\n");
		printf("%f",s[i].cgpa);
		printf("city\n");
		printf("%s",s[i].city);
	}
}