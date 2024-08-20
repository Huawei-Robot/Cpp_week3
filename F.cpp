//#include <iostream>
//#include <vector>
//#include <unordered_set>//无序集合
//#include <unordered_map>//无序映射
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//	string s;
//	cin >> s;
//	unordered_set<char> unique_types(s.begin(), s.end());
//	int kinds = unique_types.size();
//	unordered_map<char, int> windows_kinds;
//	int counts=0;
//	long long int size =100000000000 ;
//	for (int i = 0, j = 0; j < s.size(); j++) {
//		char current = s[j];
//		windows_kinds[current]++;
//		if (windows_kinds[current] == 1) {
//			counts++;
//		}
//		while (counts == kinds) {
//			if (abs(j-i) + 1 < size)size = abs(j - i) + 1;
//			char temp = s[i];
//			windows_kinds[temp]--;
//			if (windows_kinds[temp] == 0) {
//				counts--;
//			}
//			i++;
//		}
//
//	}
//	cout << size << endl;
//
//	return 0;
//}