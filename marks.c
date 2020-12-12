#include<stdio.h>

int main()
{
	int mark;
	
	printf("Enter  the mark of the student :");
	scanf("%d",&mark);
	
	if(mark >= 85 && mark <= 100 )
		printf("Grade A");
		
	else if(mark >= 70)
		printf("Grade B");
		
	else if(mark >= 55)
		printf("Grade C");
		
	else if(mark >= 40 )
		printf("Grade D");
		
	else
		printf("Grade F");
		
	return 0;
}
