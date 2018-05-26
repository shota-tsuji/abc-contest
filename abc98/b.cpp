#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // std::copy
#include <iterator>
using namespace std;

void p(vector<int> vc){
	for(char x : vc){
		cout << x << ',';
	}
	cout << endl;
}

void sort_int(vector<int> vc){
	sort(vc.begin(), vc.end());
}

int main(void){
	int N;
	string S;
	cin >> N;
	cin >> S;
	vector<char> s_v(S.begin(), S.end());
	for(int i=1; i < N; ++i){//moziretu loop
		auto center_itr = s_v.begin() + i;
		//vector<char> s1, s2;
		vector<int> s1, s2;
		copy(s_v.begin(), center_itr, back_inserter(s1));//divide
		copy(center_itr, s_v.end(), back_inserter(s2));//divide
		//p(s2);
		sort_int(s1);
		sort_int(s2);
		p(s2);
		s1.erase(unique(s1.begin(), s1.end()), s1.end());//erase duplicate
		s2.erase(unique(s2.begin(), s2.end()), s2.end());
		//cout << s1.size() << endl;
		//p(s2);
		vector<char> list_inter;
		set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), back_inserter(list_inter));
		//p(list_inter);
		//cout << list_inter.size() << endl;
	}

	return 0;
}
