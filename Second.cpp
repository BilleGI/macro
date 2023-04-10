#include <iostream>

#define WINTER 0
#define SPRING 0 
#define SUMMER 0 
#define AUTUMN 1

#define PRINT_TIME	 "Season: "
#define PRINT_WINTER "Winter"
#define PRINT_SPRING "Spring"
#define PRINT_SUMMER "Summer"
#define PRINT_AUTUMN "Autinm"
#define NO_TIME		 "the time of year is not selected"

#define INSTRUCT "To change the output time of the year, change the macro values"

#if  WINTER
int main()
{
	std::cout << PRINT_TIME << PRINT_WINTER << std::endl;
	return 0;
}
#elif SPRING
int main()
{
	std::cout << PRINT_TIME << PRINT_SPRING << std::endl;
	return 0;
}
#elif SUMMER
int main()
{
	std::cout << PRINT_TIME << PRINT_SUMMER << std::endl;
	return 0;
}
#elif AUTUMN
int main()
{
	std::cout << PRINT_TIME << PRINT_AUTUMN << std::endl;
	return 0;
}
#else
int main()
{
	std::cout << PRINT_TIME << NO_TIME << std::endl;
	return 0;
}
#endif // SEASON