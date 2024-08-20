//#include <iostream>
//#include <stack>
//using namespace std;
//stack<int> build;
//int main() {
//	int n;
//	int counts = 1;
//	int sum;
//	while (cin>>n) {
//		sum = 0;
//		int temp;
//		while (n--) {
//			cin >> temp;
//			if (build.empty()) {
//				build.push(temp);
//				continue;
//			}
//			if (temp > build.top()) {
//				build.push(temp);
//			}
//			else if (temp < build.top()) {
//				while ((!build.empty()) && (temp < build.top())) {
//					sum++;
//					build.pop();
//				}
//			}
//			if (build.empty()) {
//				build.push(temp);
//				continue;
//			}
//			if (build.top() != temp) {
//				build.push(temp);
//			}
//		}
//		while (!build.empty()) {
//			if (build.top()) {
//				sum++;
//			}
//			build.pop();
//		}
//		printf("Case %d: %d\n", counts, sum);
//		counts++;
//	}
//	return 0;
//}