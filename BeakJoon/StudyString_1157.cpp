
/*
����
���ĺ� ��ҹ��ڷ� �� �ܾ �־�����, �� �ܾ�� ���� ���� ���� ���ĺ��� �������� �˾Ƴ��� ���α׷��� �ۼ��Ͻÿ�. ��, �빮�ڿ� �ҹ��ڸ� �������� �ʴ´�.

�Է�
ù° �ٿ� ���ĺ� ��ҹ��ڷ� �̷���� �ܾ �־�����. �־����� �ܾ��� ���̴� 1,000,000�� ���� �ʴ´�.

���
ù° �ٿ� �� �ܾ�� ���� ���� ���� ���ĺ��� �빮�ڷ� ����Ѵ�. ��, ���� ���� ���� ���ĺ��� ���� �� �����ϴ� ��쿡�� ?�� ����Ѵ�.

��°�
1. Mississipi  --> ?
2. zZa -->Z
3. z -->Z
4. baaa -->A
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

class studyString {
private:
	char str[1000001];
	int  strCheck[26] = { 0, };
	int max = 0;
	bool flag = true;
public:

	void answer() {
		cin >> str;

		for (int i = 0; i < sizeof(str); i++) {
			//�Է� ���� ���� �� �̻� ���ٸ� ����.
			if (!str[i])
				break;

			//�빮�ڸ�
			if ((str[i] - 'a') < 0) {
				if (str[i] - 'A' >= 0) {
					strCheck[str[i] - 'A'] += 1;
					continue;
				}
			}
			//�ҹ��ڸ�
			else {
				strCheck[str[i] - 'a'] += 1;
			}
		}
		for (int i = 0; i < 26; i++) {
			if (strCheck[max] < strCheck[i])
				max = i;
		}
		for (int i = 0; i < 26; i++) {
			if (i == max)
				continue;
			if (strCheck[max] == strCheck[i]) {
				cout << '?';
				flag = false;
				break;
			}
		}

		if (flag)
			cout << char(max + 'A');
	}

};

int main(int argc, char* argv[]) {
	studyString ss;
	ss.answer();
	return 0;
}