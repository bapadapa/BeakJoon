#include<iostream>
#include<stdlib.h>
using namespace std;


class overAverage {
private:
	int stuCnt;
	int score[1001];
	int enterCnt;
	double ave;
	double overAveCnt;
public:
	void _answer() {
		cin >> stuCnt;

		for (int i = 0; i < stuCnt; i++) {

			//�ʱ�ȭ.
			overAveCnt = ave = 0;
			for (int j = 0; j < 1001; j++) {
				score[j] = 0;
			}
			cin >> enterCnt;

			for (int j = 0; j < enterCnt; j++) {
				cin >> score[j];
				ave += (double)score[j];
			}
			ave /= enterCnt;
			for (int j = 0; j < enterCnt; j++) {
				if (score[j] > ave)
					overAveCnt++;
			}
			//�Ҽ��� �Ʒ� ����.
			cout << fixed;
			//3° �ڸ����� ǥ��. ���� fixed�� �� ������ �� ���̰� 3�ڸ�.
			cout.precision(3);

			cout << overAveCnt / enterCnt * 100 << "%" << endl;



		}
	}
};


int main(void) {
	overAverage oa;
	oa._answer();

	return 0;
}