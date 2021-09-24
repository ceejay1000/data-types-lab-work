#include <iostream>

int main(){
	enum Colours {RED, YELLOW, AMBER=YELLOW, GREEN};
	
	for(int color = RED; color != GREEN + 1; color++){
		Colours colours = static_cast<Colours>(color);
		std::cout << color << std::endl;

	}

}
