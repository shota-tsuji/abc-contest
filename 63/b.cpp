#include <iostream>
#include <map>
//#include <string>
using namespace std;

int main()
{
	//string str;
	char str [100];
	map<char, int> mp;
	cin >> str;
	for(int i=0; str[i]!='\0'; ++i){
		//cout << str[i]  ;
		if(mp[str[i]] == 0) {
			//cout << "add" << endl;
			mp[str[i]]+= 1;
		}
		else {
			cout << "no" << endl;
			// It's suit return0 than take flag=1.
			return 0;
		} 
	}
	cout << "yes" << endl;
	return 0;
}
