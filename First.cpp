#include <iostream>

#define MON		1
#define TUES	2
#define WEDNES	3	 
#define THURS	4
#define FRI		5
#define SATUR	6
#define SUN		7

#define DESCRIPTION		"The program outputs the day of the week"
#define INPUT			"Input the day of the week: "
#define MONDAY			"Monday"
#define TUESDAY			"Tuesday"
#define WEDNESDAY		"Wednesday"
#define THURSDAY		"Thursday"
#define FRIDAY			"Friday"
#define SATURDAY		"Suturday"
#define SUNDAY			"Sunday"

#define UNION(num,day) num ## day

void ifElse(int& DAY)
{
	if (MON == DAY)
		std::cout << UNION(MON, DAY) << std::endl;
	else if (TUES == DAY)
		std::cout << UNION(TUES, DAY) << std::endl;
	else if (WEDNES == DAY)
		std::cout << UNION(WEDNES, DAY) << std::endl;
	else if (THURS == DAY)
		std::cout << UNION(THURS, DAY) << std::endl;
	else if (FRI == DAY)
		std::cout << UNION(FRI, DAY) << std::endl;
	else if (SATUR == DAY)
		std::cout << UNION(SATUR, DAY) << std::endl;
	else if (SUN == DAY)
		std::cout << UNION(SUN, DAY) << std::endl;
}

void switchBlock(int& DAY)
{
	switch (DAY)
	{
	case MON:
		std::cout << UNION(MON, DAY) << std::endl;
		break;
	case TUES:
		std::cout << UNION(TUES, DAY) << std::endl;
		break;
	case WEDNES:
		std::cout << UNION(WEDNES, DAY) << std::endl;
		break;
	case THURS:
		std::cout << UNION(THURS, DAY) << std::endl;
		break;
	case FRI:
		std::cout << UNION(FRI, DAY) << std::endl;
		break;
	case SATUR:
		std::cout << UNION(SATUR, DAY) << std::endl;
		break;
	case SUN:
		std::cout << UNION(SUN, DAY) << std::endl;
		break;
	default:
		break;
	}
}

int main()
{
	int DAY;
	std::cout << DESCRIPTION << std::endl;
	std::cout << INPUT;
	std::cin >> DAY;

	ifElse(DAY);
	switchBlock(DAY);

	return 0;
}