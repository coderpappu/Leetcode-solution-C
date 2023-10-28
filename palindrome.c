#include <stdio.h>
int isPalindrome(int x)
{
	int remainder, orginal;
	long long int reversed = 0;
	printf("%lli\n", reversed);
	orginal = x;

	while (x >= 0)
	{
		remainder = x % 10;
		reversed = reversed * 10 + remainder;
		x /= 10;
	}

	printf("%lli\n", reversed);
	printf("%d\n", orginal);

	if (orginal == reversed)
	{
		// return true;
		printf("True");
	}
	else
	{
		// return false;
		printf("False");
	}
}
int main()
{
	isPalindrome(-1);
}
