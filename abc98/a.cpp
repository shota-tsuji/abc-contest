#include <iostream>
using namespace std;

int main(void){
	long long int A, B;
	cin >> A >> B;
	long long int sum = A + B;
	long long int sub = A - B;
	long long int mul = A * B;
	long long int max = 0;
	if(sum >= sub){
		max = sum;
	} else {
		max = sub;
	}
	if(mul >= max){
		max = mul;
	}

	cout << max << endl;
	return 0;
}
