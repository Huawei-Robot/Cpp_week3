//#include <iostream>
//#include <algorithm>
//using namespace std;
//typedef long long ll;
//struct Friend
//{
//	ll money;
//	ll friendship;
//} friends[100001];
//bool compare(const Friend& a, const Friend& b) {
//	return a.money < b.money;
//}//������������
//int main() {
//	int n;
//	ll d;
//	cin >> n >> d;
//	for (int i = 0; i < n; ++i) {
//		cin >> friends[i].money >> friends[i].friendship;
//	}
//	sort(friends, friends + n, compare);
//	long long maxFriendship = 0; // ���ڴ洢�������ֵ�ܺ�
//	long long currentFriendship = 0; // ��ǰ���ڵ�����ֵ�ܺ�
//	for (int left = 0, right = 0; right < n; ++right) {
//		while (friends[right].money-friends[left].money>=d)
//		{
//			currentFriendship -= friends[left].friendship;
//			++left;
//		}
//		currentFriendship += friends[right].friendship;
//		maxFriendship = max(currentFriendship, maxFriendship);
//	}
//	cout << maxFriendship << endl;
//	return 0;
//}