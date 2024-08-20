//#include <iostream>
//#include <stack>
//#include <cstdio>
//#include <cstring>
//
//using namespace std;
//
//typedef long long ll;
//
//// 定义保存每个孩子左、右使者的数组
//int lmin[50001], rmin[50001];  // 存储左使者和右使者的位置
//int rne[50001], lne[50001];    // 存储某个孩子对应的左、右节点
//ll a[50001];                   // 存储孩子们的身高
//int n, t = 1;                  // `n` 表示每个测试用例中孩子的个数，`t` 用于打印测试用例的编号
//
//int main() {
//    int T;  // `T` 表示测试用例的个数
//    cin>>T;  // 读取测试用例个数
//
//    // 循环处理每一个测试用例
//    while (T--) {
//        cin>>n;  // 读取每个测试用例中孩子的数量
//        stack<ll> S;      // 用于找使者的单调栈
//
//        // 读取孩子的身高
//        for (int i = 1; i <= n; i++) {
//            cin>>a[i];
//        }
//
//        // 找到每个孩子的“左使者”
//        for (ll j = 1; j <= n; j++) {
//            // 栈不为空且栈顶孩子的身高不小于当前孩子时，弹出栈顶元素
//            while (!S.empty() && a[j] >= a[S.top()]) {
//                S.pop();
//            }
//
//            // 如果栈为空，说明当前孩子左侧没有比他更高的孩子
//            if (S.empty()) {
//                lmin[j] = 0;
//            }
//            else {
//                lmin[j] = S.top();  // 栈顶的孩子即为当前孩子的左使者
//                rne[S.top()] = j;   // 当前孩子是栈顶孩子的右节点
//            }
//            S.push(j);  // 将当前孩子的索引压入栈中
//        }
//
//        // 清空栈，用于后续找“右使者”
//        while (!S.empty()) S.pop();
//
//        // 找到每个孩子的“右使者”
//        for (ll j = n; j >= 1; j--) {
//            // 栈不为空且栈顶孩子的身高不小于当前孩子时，弹出栈顶元素
//            while (!S.empty() && a[j] >= a[S.top()]) {
//                S.pop();
//            }
//
//            // 如果栈为空，说明当前孩子右侧没有比他更高的孩子
//            if (S.empty()) {
//                rmin[j] = n + 1;
//            }
//            else {
//                rmin[j] = S.top();  // 栈顶的孩子即为当前孩子的右使者
//                lne[S.top()] = j;   // 当前孩子是栈顶孩子的左节点
//            }
//            S.push(j);  // 将当前孩子的索引压入栈中
//        }
//
//        // 打印测试用例编号
//        printf("Case %d:\n", t);
//        t++;
//
//        // 输出每个孩子的“右使者”和“左使者”的位置
//        for (int i = 1; i <= n; i++) {
//            printf("%d %d\n", lne[i], rne[i]);  // 输出右使者和左使者的位置
//        }
//
//        // 重置所有数组，以便处理下一个测试用例
//        memset(lmin, 0, sizeof(lmin));
//        memset(rmin, 0, sizeof(rmin));
//        memset(rne, 0, sizeof(rne));
//        memset(lne, 0, sizeof(lne));
//        memset(a, 0, sizeof(a));
//    }
//
//    return 0;
//}
