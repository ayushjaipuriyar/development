package com.company;

import java.io.*;
import java.util.*;

class Stack {
    private int capacity = 1000;
    private int top;
    private int elements[]; // Maximum size of Stack
    private int size;
    private int count = 0;

    boolean isEmpty() {
        return (top < 0);
    }

    boolean isFull() {
        return (top == capacity);
    }

    Stack(int n) {
        elements = new int[n];
        top = -1;
    }

Stack(Stack temp){
        elements = new int[temp.capacity];
        elements = temp.elements.clone();
}
    void push(int x) {
        if (top >= (capacity - 1)) {
            System.out.println("Stack Overflow");
        } else {
            elements[++top] = x;
            System.out.println(x + " pushed into stack");
        }
    }

    int pop() {
        if (top < 0) {
            System.out.println("Stack Underflow");
            return 0;
        } else {
            int x = elements[top--];
            return x;
        }
    }

    int getTop() {
        if (top < 0) {
            System.out.println("Stack Underflow");
            return 0;
        } else {
            int x = elements[top];
            return x;
        }
    }

    void displayElements() {
        for (int i = top; i > -1; i--) {
            System.out.print(" " + elements[i]);
        }
    }

    boolean equals(Stack stack1, Stack stack2) {
        return (stack2.equals(stack2));
    }

    public static void main(String args[]) {
        Stack stck1 = new Stack(10);          //{i}
        Stack stck2 = new Stack(20);          //{ii}
        Stack stck3 = new Stack(stck1);          //{ii}
        Stack stck4 = new Stack(stck2);          //{ii}

        stck1.push(10);
        stck1.push(20);
        stck1.push(30);
        stck1.push(40);
        stck1.push(50);
        stck2.push(10);
        stck2.push(20);
        stck2.push(30);
        stck2.push(40);
        stck2.push(50);
        stck3.push(10);
        stck3.push(20);
        stck3.push(30);
        stck3.push(40);
        stck3.push(50);
        stck4.push(10);
        stck4.push(20);
        stck4.push(30);
        stck4.push(40);
        stck4.push(50);
        stck1.pop();
        stck1.pop();
        stck2.pop();
        stck2.pop();
        stck3.pop();
        stck3.pop();
        stck4.pop();
        stck4.pop();
        stck1.pop();
        stck1.pop();
        stck1.pop();
        stck2.pop();
        stck2.pop();
        stck2.pop();

        System.out.println(stck1.equals(stck1, stck3));
        System.out.println();
        stck3.displayElements();
        System.out.println();
        stck4.displayElements();
    }
}

