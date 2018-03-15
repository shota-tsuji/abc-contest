#include <iostream>
#include <vector>
using namespace std;

int selectionSort(int len, vector<int> a);
void pV(vector<int> a){
	//cout << '\n';
	for(auto i=a.begin(); i != a.end(); ++i){
		cout << *i << '	';
	}
	cout << '\n';
}

int main(void)
{
	// input data
	// print data
	// sort data
	// print data
	int n;
	int a;
	cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin >> a;
		v.push_back(a);
	}
	pV(v);
	selectionSort(n, v);
	pV(v);
	return 0;

}

int selectionSort(int len, vector<int>a){
	int mini, tmp, count=0;
	for(int i=0; i<len; i++){
		mini = i;

		for(int j=i+1; j<len; j++){
			if(a[j] < a[mini]){
				mini = j;
			}
		}

		if(mini !=i){
			tmp = a[i];
			a[i] = a[mini];
			a[mini] = tmp;
			count ++;
		}
	}
	return count;
}


