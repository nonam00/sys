#include <iostream>

class System
{
	static int count;
public:
	static int Plus(int first, int second)
	{
		count++;
		return(first + second);
	}
	static int Minus(int first, int second)
	{
		count++;
		return(first - second);
	}
	static int Multi(int first, int second)
	{
		count++;
		return(first * second);
	}
	static int Divide(int first, int second)
	{
		count++;
		return(first / second);
	}
	static void get_count()
	{
		std::cout << "Count: " << count << std::endl;
	}
};
int System::count = 0;

int main()
{
	int a = System::Plus(1, 3);
	std::cout << a << std::endl;
	System::get_count();
	int b = System::Divide(4, 2);
	std::cout << b << std::endl;
	System::get_count();
	return 0;
}