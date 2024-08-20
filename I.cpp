//#include <iostream>
//#include <unordered_map>
//#include <vector>
//using namespace std;
//int main() {
//	int n, k;
//	scanf("%d%d", &n, &k);
//	vector<int> a(n);
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &a[i]);
//	}
//	unordered_map<int, int> count;  // 哈希表用于记录当前窗口内每个元素的出现次数
//	int left = 0, right = 0;  // 定义滑动窗口的左右边界
//	int maxLength = 0;  // 记录最长 k-好段的长度
//	int maxLeft = 0, maxRight = 0;  // 记录最长 k-好段的起始和结束位置
//	while (right < n) {
//		count[a[right]]++;
//		while (count.size() > k) {
//			count[a[left]]--;
//			if (count[a[left]] == 0) {
//				count.erase(a[left]);
//			}
//			left++;
//		}
//		if (right - left + 1 > maxLength) {
//			maxLength = right - left + 1;
//			maxLeft = left;
//			maxRight = right;
//		}
//		right++;
//	}
//	printf("%d %d\n", maxLeft + 1, maxRight + 1);
//	return 0;
//}