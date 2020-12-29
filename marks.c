#include<stdio.h>
int main(){
        int mark;	
	printf("Enter the mark of the student :");
	scanf("%d",&mark);		
	if(mark >= 85 && mark <= 100 )		
		printf("Grade A");			
	else if(mark >= 70 && mark <= 84)		
		printf("Grade B");			
	else if(mark >= 55 && mark <= 69)		
		printf("Grade C");			
	else if(mark >= 40 && mark <= 54)		
		printf("Grade D");			
	else if(mark < 40)	
		printf("Grade F");			
	return 0;
}
