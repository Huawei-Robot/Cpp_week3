//#include <iostream>
//#include <stack>
//#include <vector>
//struct Node
//{
//	int high, left;
//};
//using namespace std;
//int main() {
//	int n;
//	while (cin >> n, n) {
//		vector<	Node> node(n + 1);
//		for (int i = 0; i < n; ++i) {
//			cin >> node[i].high;
//			node[i].left = i;
//		}
//		long long area = 0;
//		stack<Node> s;
//		node[n].high = 0;
//		node[n].left = n;
//		for (int i = 0; i <= n; ++i) {
//			while (!s.empty() && node[i].high <= s.top().high) {
//				Node topNode = s.top();
//				s.pop();
//				node[i].left = topNode.left;
//				long long width = i - topNode.left;
//				long long val = width * (long long)topNode.high;
//				if (val > area)area = val;
//			}
//			s.push(node[i]);
//		}
//		cout << area << endl;
//	}
//}