#include <iostream>

// Takes a number and returns its square.
double square(double x)
{
	return x * x;
}

// Takes a number and displays its square.
void printSquare(double x)
{
	std::cout << "The square of " << x << " is " << square(x) << "\n";
}

// Says hello and prints a square number.
int main()
{
	std::cout << "hello\n";
	printSquare(1.234);
}
