#include<stdio.h>
struct students
{
	int roll_no;
	char name[100];
	char add[100];
};
main()
{
	int i;
	struct students s[5];
	 for(i=0;i<5;i++)
	 {
	 	printf("Enter your roll number=");
	 	scanf("%d",&s[i].roll_no);
	 	printf("Enter your name=");
	 	scanf("%s",&s[i].name);
	 	printf("Enter your address=");
	 	scanf("%s",&s[i].add);
	 }
	 printf("\n------------------------------------------------------\n");
	 
	 for(i=0;i<5;i++)
	 {
	 	printf("your roll number=%d\nyour name=%s\nyour address=%s",s[i].roll_no,s[i].name,s[i].add);
	 }
}
