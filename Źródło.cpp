#include <iostream>
#include <string>

using namespace std;
const int M = 77;
const int B = 66;
const int T = 84;
const int O = 79;
const int Q = 81;
const int S = 83;
const int a = 97;
const int c = 99;
const int _i = 105;
const int p = 112;
const int x = 120;



string ConvertFromSymbolic(string data) {
	int len = data.length();
	int ascii_eqv;
	string result;

	for (int i = 0; i < data.length(); i++) {
		ascii_eqv = data[i];
		if (ascii_eqv >= 48 && ascii_eqv <= 57)
			result += ascii_eqv;

		else if (ascii_eqv == 46)
			result += " ";

		else if (ascii_eqv == M || ascii_eqv == B || ascii_eqv == T
			|| ascii_eqv == Q || ascii_eqv == S || ascii_eqv == O)

			switch (ascii_eqv) {
			case M:
				result += " 000 000";
				return result;
			case B:
				result += " 000 000 000";
				return result;
			case T:
				result += " 000 000 000 000";
				return result;
			case Q:
				switch (data[i + 1])
				{
				case a:
					result += " 000 000 000 000 000";
					return result;
				case _i:
					result += " 000 000 000 000 000 000";
					return result;
				}
			case S:
				switch (data[i + 1])
				{
				case x:
					result += " 000 000 000 000 000 000 000";
					return result;
				case p:
					result += " 000 000 000 000 000 000 000 000";
					return result;
				}
			case O:
				if (data[i + 1] == c) {
					result += " 000 000 000 000 000 000 000 000 000";
					return result;
				}				
			}

		else{
			result = "Blad danych wejsciowych.";
			return result;
		}
	}
	return result;
}


void main() {

	std::cout << ConvertFromSymbolic("4M") << std::endl;
	std::cout << ConvertFromSymbolic("54T") << std::endl;
	std::cout << ConvertFromSymbolic("5.434B") << std::endl;
	cout << "1";


	cin.get();
	cin.get();

}