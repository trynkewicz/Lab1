#include <iostream>
#include <cmath>
using namespace std;


double a(int n) {
	return 24.0/(7.0*(n*n+8.0*n+15.0));
}

int main() {
	int N = 10000;
	double sum = 0;
	double eps = 0.0001;
	for (int i = 0; i < N; i++)
		sum += a(i);
	cout << "Partial sum sequence: " << sum << endl;
	double s1 = a(0), s2 = a(0) + a(1);
	int j = 1;
	do {
		s1 += a(j);
		j++;
		s2 += a(j);
		//cout << s1 << " " << s2 << endl;
	} while (fabs(s1 - s2) > eps);
	cout << "Koshi's sum limit: " << s1 << endl;
        cout << "N = " << j <<endl;

	system("pause");
	return 0;

}
