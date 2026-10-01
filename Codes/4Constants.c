 #include <stdio.h>

int main(void)
{
	// Cannot be modified after initialization
	float const PI = 3.14159;
	const int DAYS_IN_WEEK = 7;

	printf("There are %d days in a week.\n", DAYS_IN_WEEK);
	printf("Pi is approximately %.5f.\n", PI);

	return 0;
}
