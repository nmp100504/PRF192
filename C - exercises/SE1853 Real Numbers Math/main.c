#include<stdio.h>

//khai bao cau truc so phuc trong C voi real la phan thuc, imag la phan ao
struct Complex {
	double real;
	double imag;	
};


// ham tinh tong 2 so phuc
struct Complex sum(struct Complex a, struct Complex b){
	struct Complex result;
	result.real = a.real + b.real;
	result.imag - a.imag + b.imag;
	return result;
}

//ham tinh hieu 2 so phuc
struct Complex subtract(struct Complex a, struct Complex b){
	struct Complex result;
	result.real = a.real - b.real;
	result.imag - a.imag - b.imag;
	return result;
}

// ham tinh tich 2 so phuc
struct Complex multiply(struct Complex a, struct Complex b) {
  struct Complex result;
  result.real = a.real * b.real - a.imag * b.imag;
  result.imag = a.real * b.imag + a.imag * b.real;
  return result;
}

//ham tich thuong 2 so phuc
struct Complex divide(struct Complex a, struct Complex b) {
  struct Complex result;
  double denom = b.real * b.real + b.imag * b.imag;
  result.real = (a.real * b.real + a.imag * b.imag) / denom;
  result.imag = (a.imag * b.real - a.real * b.imag) / denom;
  return result;
}

int main(){
	int i;
	struct Complex c[6];
	struct Complex d;
    printf("Enter a complex number (real imag): ");
    scanf("%f%f", &d.real, &d.imag);
    printf("You entered: %.2f + %.2fi\n", d.real, d.imag);
//	for(i =0; i <6; i++){
//		printf("Vui long nhap vao 6 so phuc:");
//		scanf("%f%f", &c[i].real, &c[i].imag);
//	}
//	for(i =0; i <6; i++){
//		printf("Vui long nhap vao 6 so phuc:");
//		printf("%f %f", c[i].real, c[i].imag);
//	}
	struct Complex result;
//	result =sum(   suctract(   sum(c[1],   multiply(c[2],c[3])   ),   divide(c[4],c[5])), c[6]);
//	result =sum(c[1],   multiply(c[2],c[3])   );
//	printf("%f %fi, result.real, result.imag");
}
