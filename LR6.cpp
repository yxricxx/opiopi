#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	double y, x, a, b, h;
	cout << "Enter [a; b] h" << endl;
	cin >> a >> b >> h;
	x = a;
	while (x <= b + h / 2)
	{
		y = pow(x, 5) + 3 * tan(pow(x, 2)) + 2;
		cout << '|' << setw(6) << x << "\t|\t" << setw(10) << y << '|' << endl;
		x = x + h;
	}
}