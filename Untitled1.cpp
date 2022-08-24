#include <iostream>
using namespace std;

int main()
{
	string named;
	int answer;
	
	cout << "whats your name?" << endl;
	cin >> named;
	cout << "you name is " << named << endl;
	
	cout << "i'm have question from you" << endl;
	cout << "pls answer" << endl;
	
	cout << "1 + 1? ";
	cin >> answer;
	
	if(answer == 11) {
		cout << "yeah because no = :V" << endl;
	} else {
		cout << "you answer 2 right?. is wrong answer bro";
	}
	
	cout << "thanks for playing this game :V" << endl;
	cout << "developer adrian from telkom university";
	return 0;
}