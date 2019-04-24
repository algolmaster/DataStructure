#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	int n; //테스트 케이스
	cin >> n;

	int len = 0;
	string str;
	
	int** board = new int*[n]; //순서
	string **str_board = new string*[n]; //
	for (int i = 0; i < n; i++) {
		map<string, int> m;
		cin >> len;
		
		for (int j = 0; j < len; j++) { //제 1 공개키
			board[i] = new int[len];
			str_board[i] = new string[len];
			cin >> str;
			m.insert(make_pair(str, j));
		}
		for (int j = 0; j < len; j++) { //제 2 공개키
			cin >> str;
			board[i][j] = m.find(str)->second;
		}
		for (int j = 0; j < len; j++) { //암호문
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