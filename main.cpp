#include <iostream>

int main() {
	std::string a, b;

	std::cout << "숫자를 입력하세요 ";
	std::cin >> a;

	std::cout << "숫자를 입력하세요 ";
	std::cin >> b;

	int b0 = b[0] - '0';
	int b1 = b[1] - '0';
	int b2 = b[2] - '0';

	int a_num = (a[0] - '0') * 100 + (a[1] - '0') * 10 + (a[2] - '0');

	std::cout << b2 * a_num << std::endl;
	std::cout << b1 * a_num << std::endl;
	std::cout << b0 * a_num << std::endl;

	int b_num = (b[0] - '0') * 100 + (b[1] - '0') * 10 + (b[2] - '0');

	std::cout << a_num * b_num << std::endl;

	return 0;
}

/* 1번 Hello World!를 출력하세요

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
/*
	10926번 문제
	const int a = 100;
	char Print[a];

	std::cin.getline(Print, a);

	std::cout << Print << "??!" << std::endl;
*/

/*
	18108번
	#include <iostream>

int main()
{
	int Year;
	int tYear;

	std::cin >> tYear;
	
	Year = tYear - 543;
	
	std::cout << Year << std::endl;
}
*/

/*
	10430번 문제
		int A, B, C;
	std::cin >> A >> B >> C;

	int result1 = (A + B) % C;

	int result2 = ((A % C) + (B % C)) % C;

	int result3 = (A * B) % C;

	int result4 = ((A % C) * (B % C)) % C;

	std::cout << result1 << std::endl;
	std::cout << result2 << std::endl;
	std::cout << result3 << std::endl;
	std::cout << result4 << std::endl;

	return 0;
*/