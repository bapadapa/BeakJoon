#include<iostream>
#include<string>
using namespace std;

class oxQuiz {
private:
	char oxArr[81];
	int testCase;
	int length;
	int score;
	int score_sum;
	bool flag = true;
public:
	void _answer() {
		cin >> testCase;


		//�׽�Ʈ ���̽���ŭ �ݺ�.


		for (int i = 0; i < testCase; i++) {

			int cnt = 0;
			score_sum = score = 0;
			while (true) {
				char ch;

				//cini.get()���� �޾ƾ� \n�� �о�帲.
				cin.get(ch);

				//���� 1ȸ \n�� �� �ޱ�.
				if (flag) {
					flag = false;
					continue;
				}

				if (ch == '\n')
					break;

				oxArr[cnt] = toupper(ch);

				for (int j = 0; j <= cnt; j++) {
					if (oxArr[j] == 'O')
						score += 1;
					else
						score = 0;
					score_sum += score;

				}

			}
			cout << score_sum << endl;


		}

	}

};

int main(void) {
	oxQuiz oxq;
	oxq._answer();

	return 0;

}
