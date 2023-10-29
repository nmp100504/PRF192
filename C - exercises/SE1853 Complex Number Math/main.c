#include <stdio.h>


// tao ham struct so phuc, real luu phan thuc, imag luu phan ao
// typedef de viet tat cau truc thanh Complex
typedef struct {
    double real;
    double imag;
} Complex;

//ham tinh tong 2 so phuc
Complex sum(Complex a, Complex b) {
    Complex result = { a.real + b.real, a.imag + b.imag };
    return result;
}

//ham tinh hieu 2 so phuc
Complex subtract(Complex a, Complex b) {
    Complex result = { a.real - b.real, a.imag - b.imag };
    return result;
}

//ham tinh tich 2 so phuc
Complex multiply(Complex a, Complex b) {
    Complex result = { a.real * b.real - a.imag * b.imag,
                       a.real * b.imag + a.imag * b.real };
    return result;
}

//ham tinh thuong 2 so phuc
Complex divide(Complex a, Complex b) {
    Complex result = { (a.real * b.real + a.imag * b.imag) /
                       (b.real * b.real + b.imag * b.imag),
                       (a.imag * b.real - a.real * b.imag) /
                       (b.real * b.real + b.imag * b.imag) };
    return result;
}

int main() {
	Complex c1, c2, c3, c4, c5, c6;
	printf("Vui long nhap vao so c1: ");
	scanf("%lf%lf", &c1.real, &c1.imag);
	printf("Vui long nhap vao so c2: ");
	scanf("%lf%lf", &c2.real, &c2.imag);
	printf("Vui long nhap vao so c3: ");
	scanf("%lf%lf", &c3.real, &c3.imag);
	printf("Vui long nhap vao so c4: ");
	scanf("%lf%lf", &c4.real, &c4.imag);
	printf("Vui long nhap vao so c5: ");
	scanf("%lf%lf", &c5.real, &c5.imag);
	printf("Vui long nhap vao so c6: ");
	scanf("%lf%lf", &c6.real, &c6.imag);

    Complex result = sum(subtract(sum(c1, multiply(c2,c3)), divide(c4,c5)), c6);

    printf("c1 + c2 *c3 - (c4 / c5) + c6 = %.2f + %.2fi\n", result.real, result.imag);

    return 0;
}

