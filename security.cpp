#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	int n; //�׽�Ʈ ���̽�
	cin >> n;

	int len = 0;
	string str;
	
	int** board = new int*[n]; //����
	string **str_board = new string*[n]; //
	for (int i = 0; i < n; i++) {
		map<string, int> m;
		cin >> len;
		
		for (int j = 0; j < len; j++) { //�� 1 ����Ű
			board[i] = new int[len];
			str_board[i] = new string[len];
			cin >> str;
			m.insert(make_pair(str, j));
		}
		for (int j = 0; j < len; j++) { //�� 2 ����Ű
			cin >> str;
			board[i][j] = m.find(str)->second;
		}
		for (int j = 0; j < len; j++) { //��ȣ��
			cin>>str_board[i][board[i][j]];
		}
	}
	
	iterator it;
	for (int i = 0; i < n; i++) {

		for (int j = 0; j < [i].size(); j++)
			cout << str_board[i][j] << " ";

		cout << endl;
	}
	return 0;
}