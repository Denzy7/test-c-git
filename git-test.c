#include <stdio.h>

int main(int argc, char** argv)
{
	printf("Started at %s\n",argv[0]);

	printf("Please enter some text!\n");
	char input[128];
	scanf("%s",input);

	printf("You have entered:\n%s\n",input);
	
	//This is modified stuff for git
	//1234456

	return 0;
}
