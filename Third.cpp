#include <iostream>

#define WAGON 10
#define MAX_PASSENGERS 20
#define MIN_PASSENGERS 0

#define CONCAT(parameter, wagon) parameter ## _ ## wagon

#define DESCRIPTION "The program considers the fullness of wagons."
#define INPUT "Input: "
#define QUESTION_PASSENGERS "Number of passengers: "
#define ERROR "Enter the correct number (0-20): "
#define OUTPUT "Output: "
#define PRINT_BOOL "The wagon is empty - "

bool flag_wagon(const int& size_wagon)
{
	return ((CONCAT(size, wagon) & MAX_PASSENGERS) == MAX_PASSENGERS);
}

void fill_wagon(int size_wagon[], bool check_wagon[])
{
	for (int i = 0; i < WAGON; i++)
	{
		std::cout << QUESTION_PASSENGERS;
		std::cin >> CONCAT(size, wagon)[i];
		while (CONCAT(size, wagon)[i] > MAX_PASSENGERS || CONCAT(size,wagon)[i] < MIN_PASSENGERS)
		{
			std::cerr << ERROR;
			std::cin >> CONCAT(size, wagon)[i];
		}
		CONCAT(check, wagon)[i] = CONCAT(flag, wagon)(CONCAT(size, wagon)[i]);
	}
}

void print_wagon(int size_wagon[], bool check_wagon[])
{
	for (int i = 0; i < WAGON; i++)
	{
		std::cout << QUESTION_PASSENGERS << CONCAT(size, wagon)[i] << std::endl;
		std::cout << PRINT_BOOL << std::boolalpha << CONCAT(check, wagon)[i] << std::endl << std::endl;
	}
}

int main()
{
	int size_wagon[WAGON];
	bool check_wagon[WAGON];

	std::cout << DESCRIPTION << std::endl;
	std::cout << INPUT << std::endl;
	CONCAT(fill, wagon)(CONCAT(size,wagon), CONCAT(check,wagon));

	std::cout << OUTPUT << std::endl;
	CONCAT(print, wagon)(CONCAT(size, wagon), CONCAT(check, wagon));
	return 0;
}