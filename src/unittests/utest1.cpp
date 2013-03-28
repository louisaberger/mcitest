#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
	if (argc == 1) {
		std::cout << "Need to specify true or false on cmdline\n";
		return 2;
	}
	else {
		std::string flag (argv[1]);
		if (flag.compare("true") == 0 ) {
			std::cout << "True \n";
			return 0;
		}
		else {
			std::cout << "False \n";
			return 1;
		}
	}
}
