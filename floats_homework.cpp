#include <iostream>
#include <vector>


int main () {
	// nobody told me yoou cannot print the whole damn vector
	std::vector<float>float_list = {1.45, 7.82, 7.8, 8.2, 2.3, 2.3, -5.6};
	float min_val;
	float max_val;
	if (float_list.size() != 0){
		min_val = float_list[0];
		max_val = float_list[0];
	} else {
		min_val = 0;
		max_val = 0;
	}
	
	
	for (float f: float_list) {
		if (f > max_val) {
			max_val = f;
			}
		else if (f < min_val) {
		min_val = f;
			}
		}
	std::cout << min_val << std::endl;
	std::cout << max_val;
	}

