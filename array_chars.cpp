#include <iostream>
#include <cstring>
#include <string.h>

using namespace std;

int main(){

	/*string sentence, sentenceToken;

	cout << "Please enter a sentence separated with hyphens \n => ";

	getline(cin, sentence);
	
	stringstream sentenceRef(sentence);
	
	while(getline(sentenceRef, sentenceToken, "-")){
	
		cout << sentenceToken << endl;
	}*/

	char str[100];

	cout << "Please enter a string separated with hyphens \n => ";

	cin.getline(str, 100);

	char *ptr;

	ptr = strtok(str, "-");

	cout <<  "\nSplit string using strtok() function: " << endl;

	while(ptr != NULL){
		cout << ptr << " " << strlen(ptr) << endl;
		ptr = strtok(NULL, "-");
	}

}
