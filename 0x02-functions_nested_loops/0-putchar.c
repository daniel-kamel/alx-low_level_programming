#include <stdio.h>
#include <string.h>

int main(void)
{
	char *s = "_putchar";
	
	for (int i = 0; i < strlen(s); i++)
	{
		putchar(s[i]);
	}

	putchar('\n');

	return (0);
}
