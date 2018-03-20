#include <stdio.h>

int f1(int i);
int f2(int i, double *d);

int main() {
	int k = 11;

	double u = 0.00;
	double v = 0.00;

	u = f1(k);

	if (f2(k, &v) != 1) {
		printf("Erro F2");
	}
	else {
		printf("U = %lf", u);
	}

	return 0;
}

int f1(int i) {
	return i % 3;
}

int f2(int i, double *d) {
	if (i > 75) {
		return -1;
	}

	*d = i % 3;
	return 1;
}


