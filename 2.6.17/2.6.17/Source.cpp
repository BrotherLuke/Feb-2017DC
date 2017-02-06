#include <iostream>
using namespace std;
int main() {
	int HMC;
	cout << "How many cookies do you want?" << endl;
	cin >> HMC;
	while (HMC < 10) {
		if (HMC < 5)
			cout << "Thoes are rookie number, bring it up!!!" << endl;	
		else
			cout << "getting closer..." << endl;

		cin >> HMC;
	}
	cout << "that's alright but I wanna see improvment." << endl;
	
}