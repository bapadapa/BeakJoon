/*
����
���ĺ� �ҹ���, �빮��, ���� 0-9�� �ϳ��� �־����� ��, �־��� ������ �ƽ�Ű �ڵ尪�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
���ĺ� �ҹ���, �빮��, ���� 0-9 �� �ϳ��� ù° �ٿ� �־�����.

���
�Է����� �־��� ������ �ƽ�Ű �ڵ� ���� ����Ѵ�.

*/
#include <iostream>
#include <stdio.h>
using namespace std;



class asciiCode {
private:
	char enterValue;
	

public:
	void answer() {
		cin >> enterValue;
		printf("%d", enterValue);

	}
};

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false);

	asciiCode as;

	as.answer();

	return 0;
}