#include "header.h"

using namespace std;

int main(int argc, char *argv[]) {
	if (argc == 1) {
		Calculator::calculate(cin);
	}
	else if ((argc == 2) && (argv[1][1] == 'h')) {
		cout << "help instructions";
		return 0;
	}
	else if ((argc == 2) && (argv[1][1] != 'h')) {
		ifstream input(argv[1], fstream::in);
		if (!input) {
			cout << "Can't open the input file.\n\n";
			return 1;
		}
		Calculator::calculate(input);
	}
	else if (argc > 3) {
		cout << "help";
		return 0;
	}

	system("pause");
	
}