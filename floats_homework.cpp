#include <iostream>
#include <vector>

void min_max(std::vector<float> float_list) {
	float min_val;
	float max_val;
	
	// check if not empty and assign value accordingly
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
		if (f < min_val) {
		min_val = f;
			}
		}
	std::cout << "the minimal value is: " << min_val << std::endl;
	std::cout << "the maximal value is: " << max_val;
}

float find_mean(std::vector<float> float_list) {
	// reduce ??
	
	float float_sum = 0;
	
	for (float f: float_list) {
		float_sum += + f;		
		}
	return float_sum/float_list.size();
	}
	
float find_median(std::vector<float> float_list) {
	//sort the array:
	std::sort(float_list.begin(), float_list.end());
	int middle_value;
	int size = float_list.size();
	
	if (size % 2 == 0) {
		// even
		return  (float_list[size/2] + float_list[(size/2)-1])/2; 
		} else {
		// odd
		return float_list[(size-1)/2];
	}
	}

	
int how_many_equal_floats(float f, std::vector<float> float_list) {
	int counter_ = 0;
	for (int i=0; i<float_list.size(); i++) {
		if (f == float_list[i]) {
			counter_++;
			}
		} 
	return counter_;	
	}
	
float find_mode(std::vector<float> float_list) {
	// would use a dict 
	float biggest_float;
	int biggest_repetition = 0;
	for (float f: float_list) {
			int repetition_num = how_many_equal_floats(f, float_list);
			if (repetition_num > biggest_repetition) {
				biggest_repetition = repetition_num;
				biggest_float = f;
				}
			}
	return biggest_float;
	} 

int main () {
	// nobody told me you cannot print the whole damn vector
	std::vector<float> float_list;
	std::cout << "enter 10 floats for a vector";
	for (int i=0; i<10; i++) {
		float user_float;
		std::cin >> user_float;
		float_list.push_back(user_float);
	}
		min_max(float_list);
		std::cout << std::endl << "Mean value of the vector: " << find_mean(float_list);
		std::cout << std::endl << "Media value of the vector: " << find_median(float_list);
		std::cout << std::endl << "Mode of the vector: " << find_mode(float_list);
	}
