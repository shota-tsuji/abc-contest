#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void){
	string s;
	int k;

	//string length compare
	cin >> s;
	cin >> k;
	if (k > s.length()) {
		cout << 0 << endl;
		return 0;
	}
	//check duplication and save partial strings if not duplicate.
	//string[310] s_array;
	vector<string> s_array;
	// get k-length substring 
	s_array.push_back(s.substr(0,k));
	int num_check = s.length() - k;
	int sum = 1;
	for(int i=1; i<=num_check; ++i){
		string partial_string = s.substr(i,k);
		bool good = true;
		for(auto it=s_array.begin(); it!=s_array.end(); ++it){
			if(*it == partial_string){
				good = false;
				break; 
			}
		}
		// if not duplicate, count as new substring.
		if(good){
			sum++;
			s_array.push_back(partial_string);
			//cout << partial_string << endl;
		}
	}
	cout << sum << endl;
	return 0;
}
