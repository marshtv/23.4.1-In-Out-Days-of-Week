#include <iostream>

#define MON 1
#define MONDAY "Monday"
#define TUE 2
#define TUESDAY "Tuesday"
#define WED 3
#define WEDNESDAY "Wednesday"
#define THU 4
#define THURSDAY "Thursday"
#define FRI 5
#define FRIDAY "Friday"
#define SAT 6
#define SATURDAY "Saturday"
#define SUN 7
#define SUNDAY "Sunday"

int main() {
	int day_week;
	std::cout << "Input number of week's day:" << std::endl;
	std::cin >> day_week;
	switch (day_week) {
		case MON:
			std::cout << MONDAY << std::endl;
			break;
		case TUE:
			std::cout << TUESDAY << std::endl;
			break;
		case WED:
			std::cout << WEDNESDAY << std::endl;
			break;
		case THU:
			std::cout << THURSDAY << std::endl;
			break;
		case FRI:
			std::cout << FRIDAY << std::endl;
			break;
		case SAT:
			std::cout << SATURDAY << std::endl;
			break;
		case SUN:
			std::cout << SUNDAY << std::endl;
			break;
	}
}
