/*
����
N���� ���ڰ� ���� ���� �����ִ�. �� ���ڸ� ��� ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� ������ ���� N (1 �� N �� 100)�� �־�����. ��° �ٿ� ���� N���� ������� �־�����.

���
�Է����� �־��� ���� N���� ���� ����Ѵ�.
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

class sumOfNums {
private:
	unsigned int  cnt;
	char num[101];
	int sum = 0;
public:
	void answer() {
		cin >>cnt;

		//�Է¹ޱ�.
		for (int i = 0; i < cnt; i++) {
			cin >> num[i];			
			sum += num[i] - '0';			
		}

		cout << sum;
	}
};

int main(int argc, char* argv[]) {
	sumOfNums SON;
	SON.answer();
	return 0;
		
}
