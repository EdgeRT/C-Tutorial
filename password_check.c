#include <stdio.h>
int main() {
	int pass, x=10, set;

    printf("Set your password");
    scanf("%d",&set);	

	while (x!=0)
	{
	printf("\nInput the password: ");
	scanf("%d",&pass);	
	
	if (pass==set)
	{
		printf("Correct password");
		x=0;
    }
    else
    {
       printf("Wrong password, try another");       
	}
    printf("\n");
   }
	return 0;
} 