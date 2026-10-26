 #include <stdio.h>

int main(void)
{
	// Cannot be modified after initialization
	float const PI = 3.14159;
	const int DAYS_IN_WEEK = 7;
	// %2d gives 1 whitspace - %3d, %4d
	printf("There are %2ddays in a week.\n", DAYS_IN_WEEK);
	printf("Pi is approximately %.5f.\n", PI);

	return 0;
}

/*
printf("%d", 5);	5	Default integer format
printf("%2d", 5);	5	Width 2, one leading space
printf("%3d", 5);	5	Width 3, two leading spaces
printf("%2d", 25);	25	Already 2 characters wide
printf("%2d", 125);	125	Width is a minimum, not a limit
*/