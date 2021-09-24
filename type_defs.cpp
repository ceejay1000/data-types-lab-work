#include <iostream>
#include <cstring>
#include <string.h>

using namespace std;
int main(){
	
	typedef char str10[10];

	str10 str[10];

	cin.getline(str, 10);

	cout << str[0] << endl;
}
