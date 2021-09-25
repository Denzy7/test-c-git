#include <stdio.h>

int main(int argc, char** argv)
{
	printf("Started at %s\n",argv[0]);

	printf("Please enter some text!\n");
	char input[128];
	scanf("%s",input);

	printf("You have entered:\n%s\n",input);

	//New feature for v0.2
	printf("Please enter a number to add to 10\n");
	int input_int = 0;
	scanf("%d",&input_int);
	printf("%d+%d=%d\n",input_int,10,(input_int+10));
	
	//This is modified stuff for git
	//1234456

	return 0;
}
