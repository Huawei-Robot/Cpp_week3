//#include <iostream>
//#include <string>
//#include <cstdio>
//using namespace std;
//int main() {
//	int T,k;
//	cin >> T;
//	string s;
//	while (T--) {
//		int sum[30];
//		long long int ans=0;
//		cin >> s;
//		cin >> k;
//		memset(sum, 0, sizeof(sum));
//		int pos = 0;
//		for (int i = 0; i < s.size(); i++) {
//			sum[s[i] - 'a']++;
//			while (sum[s[i] - 'a'] > k) {
//				sum[s[pos] - 'a']--;
//				pos++;
//			}
//			ans += (i - pos) + 1;
//		}
//		cout << ans << endl;
//	}
//	return 0;
//}