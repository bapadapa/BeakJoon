#include<iostream>
using namespace std;


class fastAPlusB {
private:
	int testCase;
	int num1, num2;
	int sum;
public:

	void _setNum() {
		cin >> testCase;
	}

	void _answer() {
		if (testCase < 1000001)
			for (int i = 0; i < testCase; i++) {
				cin >> num1 >> num2;
				sum = num1 + num2;
				cout << sum << "\n";
			}

	}

};

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	//�� 2���� �̿��Ͽ� ����� �и� �� cin�� �̿�� scanf�� �̿��ϰ� ����
	fastAPlusB fAB;

	fAB._setNum();
	fAB._answer();
	return 0;
}