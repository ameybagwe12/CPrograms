#include <stdio.h>

/* An enum gives meaningful names to integer constants. */
enum DataType {
	INTEGER,
	FLOATING_POINT,
	CHARACTER
};

/* Union members share storage; use only the member matching the active type. */
union Data {
	int integer_value;
	float floating_value;
	char character_value;
};

int main(void)
{
	enum DataType type;
	union Data value;

	type = INTEGER;
	value.integer_value = 42;
	if (type == INTEGER) {
		printf("Integer: %d\n", value.integer_value);
	}

	type = FLOATING_POINT;
	value.floating_value = 3.14f;
	if (type == FLOATING_POINT) {
		printf("Floating-point: %.2f\n", value.floating_value);
	}

	type = CHARACTER;
	value.character_value = 'A';
	if (type == CHARACTER) {
		printf("Character: %c\n", value.character_value);
	}

	return 0;
}
