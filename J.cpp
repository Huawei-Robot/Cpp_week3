//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//const int M = 1e5 + 5;
//char ch[M];
//int n, k;
//int a[M];
//
//int func() {
//    int s = 0, t = 0, ans = 0;
//    int cnt = 0;
//    while (t < n) {
//        if (a[t] == 0) cnt++;
//        while (cnt > k) {
//            if (a[s] == 0) cnt--;
//            s++;
//        }
//        ans = max(ans, t - s + 1);
//        t++;
//    }
//    return ans;
//}
//
//int main() {
//    cin >> n >> k;
//    cin >> ch;
//
//    for (int i = 0; i < n; i++) {
//        a[i] = ch[i] == 'b'; // �� 'b' ת��Ϊ 1�� 'a' ת��Ϊ 0
//    }
//
//    int ans1 = func(); // ���㽫 'b' תΪ 'a' �����
//
//    for (int i = 0; i < n; i++) {
//        a[i] = ch[i] == 'a'; // �� 'a' ת��Ϊ 1�� 'b' ת��Ϊ 0
//    }
//
//    int ans2 = func(); // ���㽫 'a' תΪ 'b' �����
//
//    cout << max(ans1, ans2) << endl; // ��������
//    return 0;
//}