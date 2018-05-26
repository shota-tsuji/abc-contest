#include <iostream>
#include <string>
using namespace std;

int main(void){
	int N;
	string S;
	cin >> N;
	cin >> S;
	long long int min = 9999999;
	long long int argmin = -1;
	for(int i=0; i<N; ++i){
		long long int WtoE = 0;
		long long int EtoW = 0;
		for(int j=0; j<i; ++j){
			if(S[j] == 'W'){ WtoE++; }
		}
		for(int j=i+1; j<N; ++j){
			if(S[j] == 'E'){ EtoW++; }
		}
		if(WtoE+EtoW < min){
			min = WtoE + EtoW;
			argmin = i;
		}
	}
	cout << min << endl;
	return 0;
}
