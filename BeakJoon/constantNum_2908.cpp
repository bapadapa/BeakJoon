/*
����
������� ���� ����� ������ ���� ���Ѵ�. ����� ���ڸ� �дµ� ������ �ִ�. �̷��� ������ ���ϴ� ����� ���ؼ� ����̴� ���� ũ�⸦ ���ϴ� ������ ���־���. ����̴� �� �ڸ� �� �� ���� ĥ�ǿ� ���־���. �� ������ ũ�Ⱑ ū ���� ���غ���� �ߴ�.

����� ���� �ٸ� ����� �ٸ��� �Ųٷ� �д´�. ���� ���, 734�� 893�� ĥ�ǿ� �����ٸ�, ����� �� ���� 437�� 398�� �д´�. ����, ����� �� ���� ū ���� 437�� ū ����� ���� ���̴�.

�� ���� �־����� ��, ����� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� ����̰� ĥ�ǿ� ���� �� �� A�� B�� �־�����. �� ���� ���� ���� �� �ڸ� ���̸�, 0�� ���ԵǾ� ���� �ʴ�.

���
ù° �ٿ� ����� ����� ����Ѵ�.

���� �Է� 1
734 893
���� ��� 1
437

*/

#include<iostream>
#include<math.h>

using namespace std;

class constantNum {
private:
	int num[3];

public:
	void answer() {
		cin >> num[0];
		cin >> num[1];

		cout << m(reverse(num[0]), reverse(num[1]));
	}

	int reverse(int a) {
		int temp = a;
		int tmp = 0;
		for (int i = 2; i >= 0; i--) {
			tmp += temp % 10 * pow(10, i);
			temp /= 10;
		}
		return tmp;


	}

	int m(int a, int b) {
		return a > b ? a : b;
	}
};

int main(int argc, char* argv) {
	constantNum  cn;
	cn.answer();
	return 0;
}