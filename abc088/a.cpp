#include <iostream>
using namespace std;

int main(void){
	int N, num_coin1;
	cin >> N;
	cin >> num_coin1;
	//cout << N << "," << num_coin1;
	int amari = N % 500; //あまりを比較
	if (amari <= num_coin1) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	return 0;
}
