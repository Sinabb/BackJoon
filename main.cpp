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

        // Output the remainder of A divided by B
		std::cout << a % b << std::endl;
    }
    else {
		std::cout << "����� �� �����ϴ�." << std::endl;
    }
	
}

/* 1�� Hello World!�� ����ϼ���
* 
std::cout << "Hello World!" << std::endl;

2�� �� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	int a;
	int b;
	int c;

	std::cin >> a,std::cin >> b;

	c = a + b;
	std::cout << c << std::endl;
*/ 
