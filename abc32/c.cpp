// if 0 appeared, output length N
// if all s_i are bigger than K, output 0
#include <iostream>
using namespace std;

int main(void){
	int N, K;
	long long int s[1000000];
	for(int i=0; i<N; ++i){
		cin >> s[i];
	}

	bool bigger = true;
	for(int i=0; i<N; ++i){
		// check whether s[i] <= K exist.
		if(s[i] <= K){
			bigger = false;
			break;
		}
	}
	if(bigger){ // all value are bigger than K.
		cout << 0;
		return 0;
	}

	int answer = 1;
	for(int i=0; i<N; ++i){
		long long int val = s[i];
		int temp_answer = 1;
		for(int j=i+1; j<N; ++j){
			val *= s[j];
			if(val > K){ break; }
			temp_answer++;
		}
		if(temp_answer > answer){
			answer = temp_answer;
		}
	}
	cout << answer << endl;
	return 0;
}
