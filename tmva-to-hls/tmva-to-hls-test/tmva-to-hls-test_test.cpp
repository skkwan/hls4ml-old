#include "BDT.h"
#include "firmware/parameters.h"
#include "firmware/tmva-to-hls-test.h"
int main(){
	input_arr_t x = {0, 0, 0, 0, 0, 0, 0, 0, 0};
	score_arr_t score;
	tmva-to-hls-test(x, score);
	for(int i = 0; i < n_classes; i++){
		std::cout << score[i] << ", ";
	}
	std::cout << std::endl;
	return 0;
}