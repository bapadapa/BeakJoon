/*
����
���ĺ� �ҹ��ڷθ� �̷���� �ܾ� S�� �־�����. ������ ���ĺ��� ���ؼ�, �ܾ ���ԵǾ� �ִ� ��쿡�� ó�� �����ϴ� ��ġ��, ���ԵǾ� ���� ���� ��쿡�� -1�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� �ܾ� S�� �־�����. �ܾ��� ���̴� 100�� ���� ������, ���ĺ� �ҹ��ڷθ� �̷���� �ִ�.

���
������ ���ĺ��� ���ؼ�, a�� ó�� �����ϴ� ��ġ, b�� ó�� �����ϴ� ��ġ, ... z�� ó�� �����ϴ� ��ġ�� �������� �����ؼ� ����Ѵ�.

����, � ���ĺ��� �ܾ ���ԵǾ� ���� �ʴٸ� -1�� ����Ѵ�. �ܾ��� ù ��° ���ڴ� 0��° ��ġ�̰�, �� ��° ���ڴ� 1��° ��ġ�̴�.
*/
#include <iostream>
using namespace std;


class SearchAlphaber {
private:
	char alpha[101] = { ' ', };
	char alphabet = 'a';
	int cnt = 0;
	bool flag = false;

public:
	void answer() {
		cin >> alpha;
		//a~z�� tmp �� ������.
		for (int i = 0; i < 26; i++) {
			flag = false;
			//tmp�� i�� ���� alphabet���� ���������ν� a~z�� �������
			char tmp = alphabet + i;			
			//�Է¹��� ������ ����.
			for (int j = 0; j < sizeof(alpha); j++) {
				if (alpha[j] == tmp) {
					cout << j<< " ";
					flag = true;
					break;
				}
				else if (alpha[j] == NULL)
					break;
				else {					
					flag = false;					
				}
			}
			if (!flag)
				cout << -1<<" ";
		}
	}
};

int main(int argc, char* argv[]) {
	SearchAlphaber SA;
	SA.answer();

	return 0;

}
