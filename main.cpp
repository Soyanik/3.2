#include <iostream>
using namespace std;

class Road {
private:
	int length;
	int width;
public:
	Road(int l, int w) {
		length = l;
		width = w;
	}
	void print() {
		cout << "Length: " << length << endl;
		cout << "Width: " << width << endl;
	}
};

class Machine {
private:
	int X, P, V;
public:
	Machine(int x, int p, int v) {
		X = x;
		P = p;
		V = v;
	}
	void print() {
		cout << "X: " << X << endl;
		cout << "P: " << P << endl;
		cout << "V: " << V << endl;
	}
};

int main() {
	Machine m1(10, 20, 30);
	m1.print();

	Road r1(50, 100);
	r1.print();

	return 0;
}
