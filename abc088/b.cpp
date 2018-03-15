#include <iostream>
using namespace std;

int main(void){
	int a[1000];
	int N;

	cin >> N;
	for(int i=0; i<N; ++i){
		cin >> a[i];
	}

	// バブルソート, うしろから見ていく
	for(int i=0; i<N; ++i){
		for(int j=N-1; j>i; --j){
			if (a[j] < a[j-1]) {
				int temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}
	}

	// ソート結果確認
	//for(int i=0; i<N; ++i){
	//	cout << a[i] << ",";
	//}
	//cout << endl;
	
	// 交互にとる=ソート後に1つ飛ばしで加算
	// Alice
	int point_Alice = 0;
	for(int i=N-1; i>=0; i=i-2){
		point_Alice += a[i];
	}
	//cout << point_Alice << endl;

	// Bob
	int point_Bob = 0;
	for(int i=N-2; i>=0; i=i-2){ // N-2からのスタートに注意
		point_Bob += a[i];
	}
	//cout << point_Bob << endl;
	
	cout << (point_Alice - point_Bob) << endl;
}
