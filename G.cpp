//#include<iostream>
//using namespace std;
//int str[300001];
//int ans[300001];
//int main() {
//	int n, k;
//	cin >> n >> k;
//	int temp,curr,zerocount=0;
//	int max_size = 0,best_left=0;
//	for (int i = 0; i < n; ++i) {
//		cin >> str[i];
//		ans[i] = str[i];
//	
//	}
//
//	for (int i = 0, j = 0; j < n; j++) {
//		temp = str[j];
//		if (temp == 0) {
//			zerocount++;
//		}
//		while (zerocount > k) {
//			curr = str[i];  // ȡ����ǰ��߽��ֵ
//			if (str[i] == 0) zerocount--;  // �����߽�Ԫ���� 0����С����
//			i++;  // �ƶ���߽磬��С����
//		}
//		if (j - i + 1 > max_size) {
//			max_size = j - i + 1;  // ������󴰿ڵĴ�С
//			best_left = i;  // ���浱ǰ���ڵ���߽�
//		}
//
//	}
//	int change = 0; 
//	for (int i = best_left; i < best_left + max_size; ++i) {
//		if (ans[i] == 0 && change < k) {
//			ans[i] = 1;
//			change++;
//		}
//	}
//	cout << max_size << endl;
//	for (int i = 0; i < n; ++i) {
//		cout << ans[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}