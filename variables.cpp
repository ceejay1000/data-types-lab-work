#include <iostream>

int main(){
	int x, *xptr, hx = 0xf3f2, oct = 0437;
	int &xref = x;
	const int y = 2;
	char a = 'a';

	x = 5;
	xptr = &x;
	*xptr += 1;
	xref += 1;

	std::cout << "The value of x is " << x << std::endl;

	std::cout << "Char a is " << (int)a << "\n" << "Hex 0xf3f2 is " << (int)hx << "\n" << "Oct 0437 is " << (int)oct << std::endl;

}
