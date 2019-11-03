#include <iostream>
#include <vector>

int main() {
	std::vector<std::string> vec_str;
	std::string st;
	std::cout << "Would you kindly enter a string or type quit " << std::endl;
	while (st != "quit") {
		vec_str.push_back(st);
		std::cin >> st;
	}
		
	for (std::string s: vec_str) {
		if (s[0] != 'b') {
			std::cout << s << std::endl;
		}
	}
	}
