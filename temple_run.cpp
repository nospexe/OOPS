#include <iostream>

using namespace std;

class poly
{
private:
	int *arr = new int[3];

public:
	poly(int a, int b, int c)
	{
		arr[0] = a;
		arr[1] = b;
		arr[2] = c;
		cout << "New polynomial has been created " << a << "x^2 +" << b << "x +" << c << endl;
	};

	poly operator+(const poly &secondObj)
	{
		poly p4(0, 0, 0);
		p4.arr[0] = this->arr[0] + secondObj.arr[0];
		p4.arr[1] = this->arr[1] + secondObj.arr[1];
		p4.arr[2] = this->arr[2] + secondObj.arr[2];
		return p4;
	};

	void getDetails() {
		cout << "The polynomial value is: " << this->arr[0] << "x^2 + " << this->arr[1] << "x + " << this->arr[2] << endl;
	};
};

int main()
{
	poly p1(1, 2, 4), p2(3, 4, 5), p3(0, 0, 0);
	p3 = p2 + p1;
	p3.getDetails();

	return 0;
}
