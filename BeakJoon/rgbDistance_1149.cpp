#include<iostream>

using namespace std;


class rgbDistance {
private:
	int houseCnt;
	// [RGB����][�ִ� ���ǰ���]
	// �Է¹��� Cost��
	int rgbC[3][1001] = { 0, };

	// �Է¹��� Cost�� ��.
	int rgbMemo[3][1001] = { 0, };

	int bestCost;
public:
	void answer() {
		cin >> houseCnt;

		//���� �� ���� �� Cost �� �Է�.
		for (int i = 0; i < houseCnt; i++) {

			for (int j = 0; j < 3; j++) {
				cin >> rgbC[j][i];
			}
		}
		//�迭�� �Ϸ��� 1��.		
		int last = houseCnt - 1;

		//������ ���� �ʱⰪ���� ����.
		rgbMemo[0][last] = rgbC[0][last];
		rgbMemo[1][last] = rgbC[1][last];
		rgbMemo[2][last] = rgbC[2][last];

		//������ ���� �����߱� ������ 1����.
		last--;

		int tmp, tmp2;
		bool flag;

		for (int i = last; i >= 0; i--) {	
			for (int k = 0; k < 3; k++) {
				bestCost = tmp = tmp2 = 0;
				flag = true;
				for (int j = 0; j < 3; j++) {
					if (k == j)
						continue;
					else if (flag) {
						tmp = rgbMemo[j][i+1];
						flag = false;
					}
					else
						tmp2 = rgbMemo[j][i+1];
					if (tmp != 0 && tmp2 != 0) {						
						bestCost = tmp <= tmp2 ? tmp : tmp2;						
						rgbMemo[k][i] = rgbC[k][i] + bestCost;
					}
				}
			}
		}

		// ���� ���� ����� ����.
		bestCost = rgbMemo[0][0] <= rgbMemo[1][0] ? rgbMemo[0][0] : rgbMemo[1][0];
		bestCost = bestCost <= rgbMemo[2][0] ? bestCost : rgbMemo[2][0];

		cout << bestCost;

	}
};

int main(int argc, char* argv[]) {
	rgbDistance rd;
	rd.answer();
	return 0;


}
