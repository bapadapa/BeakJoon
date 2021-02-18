//#include<iostream>
//
//using namespace std;
//1�� �õ�.

//class goldbachConjecture {
//private:
//	int decimal[2] = { 0, };
//	int enterNum = 8;
//	int num1, num2;
//	bool isPrime = false;
//
//public:
//	void _answer() {
//		//enterNum�� 0�� ������ ����
//		while (true) {
//
//			cin >> enterNum;
//			if (enterNum == 0)
//				break;
//
//			//Ȧ������ ���ϴ� ���̴� 3���� ����.
//			num1 = 3;
//			num2 = enterNum - num1;
//
//			// �߰� �Ѿ�� ������ �ݺ�.
//			while (num1 < num2) {
//				//�Ҽ��� Ż��
//				if (_isPrime(num1, num2)) {
//					isPrime = true;
//					break;
//				}
//				num1 += 2;
//				num2 -= 2;
//			}
//
//			//��º�			
//			if (isPrime)
//				cout << enterNum << " = " << num1 << " + " << num2 << "\n";
//			else
//				cout << "Goldbach's conjecture is wrong." << "\n";
//			isPrime = false;
//
//
//		}
//
//	}
//	bool prime(int n)
//	{
//		if (n % 2 == 0 && n != 2)
//			return false;
//
//		for (int i = 3; i <= sqrt(n); i += 2)
//		{
//			if (n%i == 0)
//				return false;
//		}
//		return true;
//	}
//
//	//���� ���ڰ� �Ҽ����� �ľ�.
//	bool _isPrime(int n1, int n2) {
//		bool _isPrime[2] = { true,true };
//		_isPrime[0] = prime(n1);
//		_isPrime[1] = prime(n2);
//		if (_isPrime[0] == true && _isPrime[1] == true)
//			return true;
//		else
//			return false;
//	}
//
//
//};

//2�� �õ�

//class goldbachConjecture {
//private:
//	int primeNum[1000000] = { 0, };
//	bool _checkPrime[1000000] = { false, };
//	int arrCnt = 0;
//	int _inputNum;
//	int maxPrime;
//	bool _isEnter = true;
//	bool _isgoldbash = true;
//
//public:
//
//
//
//	void  _answer() {
//		_setArr();
//
//
//		while (_isEnter) {
//			cin >> _inputNum;
//
//			for (int i = 0; i < sizeof(primeNum); i++) {
//				if (primeNum[i] > _inputNum) {
//					maxPrime = i;
//					break;
//				}
//			}
//			for (int i = 0; i < maxPrime; i++) {
//				if (primeNum[i] + primeNum[maxPrime - i] == _inputNum)
//					cout << _inputNum << " = " << primeNum[i] << " + " << primeNum[maxPrime - i] << "\n";
//				else
//					cout << "Goldbach's conjecture is wrong." << "\n";
//			}
//		}
//
//
//	}
//
//	void _checkArr() {
//		for (int i = 0; i < sizeof(primeNum); i++) {
//			cout << primeNum[i] << "\n";
//		}
//	}
//
//	void _setArr() {
//		for (int i = 2; i < 1000000; i++) {
//			if (_checkPrime[i] == false) {
//				for(int j = i ; j < 100000)
//
//			}
//		}
//
//
//	
//	}
//
//};
//
//int main(void) {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	goldbachConjecture gc;
//	//gc._setArr();
//	//gc._checkArr();
//		gc._answer();
//
//	return 0;
//}


//bool prime(int n)
//{
//	if (n % 2 == 0 && n != 2)
//		return false;
//
//	for (int i = 3; i <= sqrt(n); i += 2)
//	{
//		if (n%i == 0)
//			return false;
//	}
//	return true;
//
//
//}

//���� ����
#include<iostream>
#include<math.h>
using namespace std;


class goldbachConjecture {
private:

	bool prime_c[1000001];
	int _enterNum;
	bool check;
public:

	void _answer() {
		//�Ҽ� üũ.
		_setPrime();
		while (true) {
			cin >> _enterNum;
			check = false;
			if (_enterNum == 0)
				break;
			else if (_enterNum % 2 == 1)
				continue;


			for (int i = 3; i <= _enterNum; i += 2) {
				if (prime_c[i] && prime_c[_enterNum - i]) {
					cout << _enterNum << " = " << i << " + " << _enterNum - i << "\n";
					check = true;
					break;
				}
			}
			if (!check)
				cout << "Goldbach's conjecture is wrong." << "\n";			
		}

	}
	void _setPrime() {
		//�ʱ�ȭ.
		for (int i = 2; i < 1000001; i++) {
			prime_c[i] = true;
		}
		
		//�Ҽ��Ǻ�
		for (int i = 2; i < sqrt(1000001); i++) {			
			if (prime_c[i]) {
				for (int j = i+i; j < 1000001; j += i) {
					prime_c[j] = false;
				}
			}
		}

	}
};

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	goldbachConjecture gc;
	gc._answer();

}