#include <iostream>
using namespace std;
int main() {
	cout << " Please enter a number:  ";
	int a; cin >> a;
	while (true) {
		if (cin.fail() || a<=0) {
			cin.clear();  // clear a flag on cin 
			cin.ignore(10000, '\n'); // delete invalid input from buffer
			cout << " Wrong  INPUT try again:  "; 
			cin >> a;



		}
		else break; // here we stop our cycle If  Input is correct 

		

	}
	for (int i= a;i >0;i--){
		cout << i << "  ";


	}

	return 0;

} 
