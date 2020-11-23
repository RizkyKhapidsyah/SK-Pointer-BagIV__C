#include <stdio.h>
#include <conio.h>

int main()
{
	int pokey;
	int* p;

	pokey = 987;
	p = &pokey;

	printf("The address of `anu` is %p\n", &pokey);
	printf("The contents of `anu` are %d\n", pokey);

	printf("The address of `anu` is %p\n", p);
	printf("The contents of `anu` are %d\n", *p);

	_getch();
	return(0);
}