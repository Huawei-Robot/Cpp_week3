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
//	unordered_map<int, int> count;  // ��ϣ�����ڼ�¼��ǰ������ÿ��Ԫ�صĳ��ִ���
//	int left = 0, right = 0;  // ���廬�����ڵ����ұ߽�
//	int maxLength = 0;  // ��¼� k-�öεĳ���
//	int maxLeft = 0, maxRight = 0;  // ��¼� k-�öε���ʼ�ͽ���λ��
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