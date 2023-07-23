#include <iostream>

int main()
{
	const int a = 100;
	char Print[a];

	std::cin.getline(Print, a);

	std::cout << Print << "??!" << std::endl;
}

/* 1번 Hello World!를 출력하세요
* 
std::cout << "Hello World!" << std::endl;

2번 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
	int a;
	int b;
	int c;

	std::cin >> a,std::cin >> b;

	c = a + b;
	std::cout << c << std::endl;
*/ 
/*
#include <iostream>

int main()
{
	int a;
	int b;
	double c;

	std::cin >> a >> b;

	std::cout << a + b << std::endl;
	std::cout << a - b << std::endl;
	std::cout << a * b << std::endl;

	if (b != 0) {
		std::cout << a / b << std::endl;
		std::cout << a % b << std::endl;
	}
	else {
		std::cout << "계산할 수 없습니다." << std::endl;
	}

}
*/