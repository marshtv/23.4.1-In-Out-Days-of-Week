#include <iostream>

#define MON 1
#define TUE 2
#define WED 3
#define THU 4
#define FRI 5
#define SAT 6
#define SUN 7

void display_day_week(int x) {
	switch (x) {
		case MON:
			std::cout << "MONDAY" << std::endl;
			break;
		case TUE:
			std::cout << "TUESDAY" << std::endl;
			break;
		case WED:
			std::cout << "WEDNESDAY" << std::endl;
			break;
		case THU:
			std::cout << "THURSDAY" << std::endl;
			break;
		case FRI:
			std::cout << "FRIDAY" << std::endl;
			break;
		case SAT:
			std::cout << "SATURDAY" << std::endl;
			break;
		case SUN:
			std::cout << "SUNDAY" << std::endl;
			break;
	}
}

int main() {
	int day_num;
	std::cout << "Input number of week's day:" << std::endl;
	std::cin >> day_num;
	display_day_week(day_num);
}
