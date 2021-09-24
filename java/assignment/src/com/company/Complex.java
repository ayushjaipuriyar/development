package com.company;

class Complex {
    private double real;
    private double imag;

    Complex(double real, double imag) {
        this.real = real;
        this.imag = imag;
    }

    public String toString() {
        return ("Real:" + real + "Imaginary:" + imag);
    }

    Complex sum(Complex c1, Complex c2) {
        Complex temp = new Complex(0, 0);
        temp.real = c1.real + c2.real;
        temp.imag = c1.imag + c2.imag;
        return temp;
    }

    Complex subtract(Complex c1, Complex c2) {
        Complex temp = new Complex(0, 0);
        temp.real = c1.real - c2.real;
        temp.imag = c1.imag - c2.imag;
        return temp;
    }

    Complex multiply(Complex c1, Complex c2) {
        Complex temp = new Complex(0, 0);
        temp.real = c1.real * c2.real - c1.imag * c2.imag;
        temp.imag = c1.real * c2.imag + c1.imag * c2.real;
        return temp;

    }
    void printComplexNumber() {
        System.out.println("Complex number: "
                + real + " + "
                + imag + "i");
    }

    public static void main(String[] args) {
        Complex C1 = new Complex(3, 2);
        Complex C2 = new Complex(9, 5);
        Complex C3 = new Complex(0,0);
        C3 = C3.sum(C1, C2);
        System.out.print("Sum of ");
        C3.printComplexNumber();
        C3 = C3.multiply(C1, C2);
        System.out.print("Multipication of ");
        C3.printComplexNumber();
    }
}