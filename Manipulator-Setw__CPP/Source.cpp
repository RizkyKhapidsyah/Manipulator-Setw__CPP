# include <iostream>
# include <conio.h>
# include <iomanip>

using namespace std;

int main() {
	int a;
	
	cout << "Penggunan Manipulator setw()" << "\n\n";
	cout << "-------------------------------" << "\n";

	for (a = 1; a <= 15; a++) {
		cout << setw(a) << a << endl;
	}

	cout << "-------------------------------" << "\n";

	_getch();
	return 0;
}