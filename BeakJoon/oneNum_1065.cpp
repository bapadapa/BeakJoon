#include<iostream>
using namespace std;

class oneNum {
private:
	int enterNum;
	int oneNumCnt;
	bool _isOneNum = false;

public:
	void _answer() {
		//�� �Է¹ޱ�.
		cin >> enterNum;
		//������ �̷���� ���� ����
		oneNumCnt = 0;
		//1���� �Է¹��� ������ Ȯ��.
		for (int i = 1; i <= enterNum; i++) {
			//���� �� ���� ������ true
			if (_checkOneNum(i))
				oneNumCnt++;
		}
		//������ �̷���� ���� ���� ���.
		cout << oneNumCnt;
	}

	//�˻�.
	bool _checkOneNum(int num) {
		//�ִ� 1000�̱� ������ 4�ڸ�.
		int tmpArr[4] = { 0, };
		_isOneNum = false;

		int cnt = 0;//�Է¹��� ���� �ڸ���
		int tmp = num;
		int tmpNum = 0;

		//����    1��° �ڸ���   2���� �ڸ���
		int ac = num % 10 - (num / 10) % 10;

		// 10������ ���ڴ� ������ ����.
		if (tmp < 10) {
			return true;
		}
		
		//�迭�� �� �ڸ��� �� ����.
		while (tmp > 0) {
			tmpArr[tmpNum++] = tmp % 10;
			tmp /= 10;
			cnt++;
		}
		//�迭�� 0 ���� �����ϱ� ������ 0���� ����.
		for (int i = 0; i < cnt; i++) {
			//������ �ڸ����� �ƴ϶��.
			if (i != cnt - 1) {
				if ((tmpArr[i] - tmpArr[i + 1]) == ac)
					_isOneNum = true;
				else
					_isOneNum = false;
			}
			//������ �ڸ���.
			else if (i == cnt - 1) {
				if ((tmpArr[i - 1] - tmpArr[i]) == ac)
					_isOneNum = true;
				else
					_isOneNum = false;
			}
		}
		return _isOneNum;
	}

};

int main(void) {
	oneNum on;
	on._answer();

	return 0;
}