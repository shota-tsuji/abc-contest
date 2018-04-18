#include <iostream>
#include <cmath>
using namespace std;

int main(void){
	int N;
	int x[1000], y[1000];
	cin >> N;
	for(int i=0; i<N; ++i){
		cin >> x[i] >> y[i];
	}
	double max = -1;
	for(int i=0; i<N-1; ++i){
		for(int j=i+1; j<N; j++){
			double disx = double(x[i]) -x[j];
			double disy = double(y[i]) -y[j];
			double d = disx*disx + disy*disy;
			if(d > max){
				max = d;
			}
		}
	}
	cout << sqrt(max) << endl;
}
