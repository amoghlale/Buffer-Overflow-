#include <stdio.h>

int main(int argc,  char* argv[])
{
	char* target_address[20];
   	char attack_str[]="AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBBB";
	printf("%s",attack_str);
	*target_address=argv[1];
	printf("%s",*target_address);
	return 0;
}

