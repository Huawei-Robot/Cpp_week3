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
//        a[i] = ch[i] == 'b'; // 将 'b' 转换为 1， 'a' 转换为 0
//    }
//
//    int ans1 = func(); // 计算将 'b' 转为 'a' 的情况
//
//    for (int i = 0; i < n; i++) {
//        a[i] = ch[i] == 'a'; // 将 'a' 转换为 1， 'b' 转换为 0
//    }
//
//    int ans2 = func(); // 计算将 'a' 转为 'b' 的情况
//
//    cout << max(ans1, ans2) << endl; // 输出最大结果
//    return 0;
//}