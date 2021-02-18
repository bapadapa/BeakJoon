#include<iostream>

using namespace std;


class rgbDistance {
private:
	int houseCnt;
	int r, g, b;
	int ta, tb, tc;
	bool flag;
public:
	int minMax(int a, int b) {
		return a < b ? a : b;
	}

	void answer() {		
		cin >> houseCnt;
		//�ʱ�ȭ.
		ta = tb = tc = 0;

		for (int i = 0; i < houseCnt; i++) {
			//�� �Է¹ޱ�.
			cin >> r;
			cin >> g;
			cin >> b;

			//������ ������ ���� ��.
			r += minMax(tb, tc);
			g += minMax(ta, tc);
			b += minMax(ta, tb);

			//����� �ּڰ� ����.
			ta = r;
			tb = g;
			tc = b;
		}
		// 3������ ���� �����Ѱ� ����.
		cout << minMax(minMax(r, g), b);
	}
};

int main(int argc, char* argv[]) {
	rgbDistance rd;
	rd.answer();
	return 0;


}
