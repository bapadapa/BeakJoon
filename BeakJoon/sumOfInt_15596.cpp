#include <vector>
using namespace std;
long long sum(vector<int> &a) {
	long long ans = 0;

	//iteraor ���.
	for (vector<int>::iterator iter = a.begin(); iter < a.end(); iter++)
		ans += *iter;

	return ans;
}