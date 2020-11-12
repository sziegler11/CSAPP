#include <stdio.h>

void fibonacci(int n)
{
	int prev = 0, curr = 1, temp = 0, i = 1;
	goto test;
loop:
	printf("%d\n", curr);
	temp = prev;
	prev = curr;
	curr = curr + temp;
	i += 1;
test:
	if (i <= n)
		goto loop;
}

int main()
{
	fibonacci(10);
	return 0;
}