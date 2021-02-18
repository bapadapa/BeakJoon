
/*
����
���� ��ҹ��ڿ� ���⸸���� �̷���� ���ڿ��� �־�����. �� ���ڿ����� �� ���� �ܾ ������? �̸� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ��, �� �ܾ ���� �� �����ϸ� ������ Ƚ����ŭ ��� ����� �Ѵ�.

�Է�
ù �ٿ� ���� ��ҹ��ڿ� ����� �̷���� ���ڿ��� �־�����. �� ���ڿ��� ���̴� 1,000,000�� ���� �ʴ´�. �ܾ�� ���� �� ���� ���еǸ�, ������ �����ؼ� ������ ���� ����. ���� ���ڿ��� �հ� �ڿ��� ������ ���� ���� �ִ�.

���
ù° �ٿ� �ܾ��� ������ ����Ѵ�.

���� �Է� 1
The Curious Case of Benjamin Button
���� ��� 1
6

���� �Է� 2
 Mazatneunde Wae Teullyeoyo
���� ��� 2
3
���� �Է� 3
Teullinika Teullyeotzi
���� ��� 3
2
*/
#include<iostream>
#include<string.h>
using namespace std;

class countWords {
private:
	char str[1000001];
	int cnt = 0;	
	int blank = 0;
public:

	void answer() {
		fgets(str, sizeof(str), stdin);

		for (int i = 0; i < sizeof(str); i++) {
			//�����̸� ����
			if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n'){
				blank++;
				continue;
			}
			if (blank > 1)
				break;
			
			//���� �迭�� ����ִ� ���� ������ �ƴϰ�, ���� �迭�� ���Ե� ���� �����̶��
			if ((str[i] != ' ' || str[i] != '\0' || str[i] != '\n') && (str[i + 1] == ' ' || str[i + 1] == '\0' || str[i+1] == '\n')) {
				cnt++;
				blank = 0;
			}
		}
		cout << cnt;
	}

};

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	countWords sW;
	sW.answer();
	return 0;
}