//https://www.acmicpc.net/problem/1016

//모르겠다... 나중에 다시 풀어보자.. 
#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

#define checkOverFlow(A,B) A > INT_MAX/B? -1 :1
class Answer {
private:
	bool nums[1000001] = { false };
	vector<int> no;
	int min;
	int max;
	int cnt = 0;

public:

	void makeBoard() {
		for (int i = 0; i < 1000000; i++) {

		}

	}

	void input() {
		cin >> min >> max;

	}
	void solution() {
		makeBoard();
		cout << cnt;
	}

};

int main() {
	cin.tie(NULL), cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	Answer answer;
	answer.input();
	answer.solution();
}