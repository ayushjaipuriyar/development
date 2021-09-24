package com.company;

import java.awt.*;
import java.lang.management.MemoryType;
import java.util.Random;

public class Matrix {

    double elements[][];
    private int rows;
    private int cols;

    int getRows() {
        return rows;
    }

    int getCols() {
        return cols;
    }

    Matrix(int row, int col) {
        rows = row;
        cols = col;
        elements = new double[row][col];

    }

    Matrix() {
    }

    void SetValues(int r, int c, double val) {
        elements[r][c] = val;
    }

    double getValue(int r, int c) {
        return elements[r][c];
    }

    void addMatrix(Matrix temp) {
        if ((rows == temp.rows) || (cols == temp.cols)) {
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    elements[i][j] += temp.elements[i][j];
                }

            }
        } else return;
    }

    Matrix addMatrix(Matrix temp, Matrix temp2) {
        Matrix result = new Matrix(rows,cols);
        if ((rows == temp.rows) || (cols == temp.cols)) {

            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    result.elements[i][j] = temp.elements[i][j] + temp2.elements[i][j];
                }

            }
        }
        return result;
    }

    Matrix mulMatrix(Matrix temp) {
        Matrix result = new Matrix();

        if (cols != temp.rows) {
            System.out.println("Matrix multiplication is not possible");
        } else {
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < temp.cols; j++) {
                    result.elements[i][j] = 0;
                    for (int k = 0; k < cols; k++) {
                        result.elements[i][j] += elements[i][k] * temp.elements[k][j];
                    }

                }
            }
        }
        return result;
    }

    Matrix mulMatrix(Matrix temp, Matrix temp2) {
        Matrix result = new Matrix(rows,cols);

        if (temp.cols != temp2.rows) {
            System.out.println("Matrix multiplication is not possible");
        } else {
            for (int i = 0; i < temp.rows; i++) {
                for (int j = 0; j < temp2.cols; j++) {
                    result.elements[i][j] = 0;
                    for (int k = 0; k < temp.cols; k++) {
                        result.elements[i][j] += temp.elements[i][k] * temp2.elements[k][j];
                    }

                }
            }
        }
        return result;
    }

    boolean equals(Matrix temp) {
        return (this.equals(temp));
    }

    Matrix getTranspose() {
        Matrix result = new Matrix(cols,rows);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.elements[j][i] = elements[i][j];
            }
        }
        return result;
    }

    void displayElements() {
        System.out.println("Elements");
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j) {
                System.out.print("\t" + elements[i][j]);
                if (j == cols - 1)
                    System.out.println();
            }
    }

    public static void main(String[] args) {
        Random random = new Random();
        Matrix mat1 = new Matrix(3, 3);
        Matrix mat2 = new Matrix(4, 6);
        for (int i = 0; i < mat1.getRows(); ++i)
            for (int j = 0; j < mat1.getCols(); ++j) {
                mat1.elements[i][j] = random.nextInt(50);
            }
        for (int i = 0; i < mat2.getRows(); ++i)
            for (int j = 0; j < mat2.getCols(); ++j) {
                mat2.elements[i][j] = random.nextInt(50);
            }
        System.out.println("Matrix 1");
        mat1.displayElements();
        System.out.println("Matrix 2");
        mat2.displayElements();
        Matrix mat3 = mat2.getTranspose();
        System.out.println("Matrix 3");
        mat3.displayElements();
        Matrix mat4 = mat1.getTranspose();
        System.out.println("Matrix 4");
        mat4.displayElements();
        Matrix sum = mat1.addMatrix(mat1,mat4);
        System.out.println("Matrix Sum");
        sum.displayElements();
        Matrix mul = mat2.mulMatrix(mat2,mat3);
        System.out.println("Matrix Multiplication");
        mul.displayElements();

    }


}
