#include <iostream>

int main()
{
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
}

/* 1�� Hello World!�� ����ϼ���

std::cout << "Hello World!" << std::endl;

2�� �� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
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
		std::cout << "����� �� �����ϴ�." << std::endl;
	}

}
*/
/*
	10926�� ����
	const int a = 100;
	char Print[a];

	std::cin.getline(Print, a);

	std::cout << Print << "??!" << std::endl;
*/

/*
	18108��
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
	10430�� ����
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