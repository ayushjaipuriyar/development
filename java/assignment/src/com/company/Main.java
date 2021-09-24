package com.company;

import java.util.Arrays;

class Namer {
    private String name;
    private int name_format;

    public Namer(String firstName, String middleName, String lastName, int name_format) {
        this.name_format = name_format;
        String temp = " ";
        while (firstName.length() != 40) {
            firstName = firstName + temp;
        }
        while (middleName.length() != 40) {
            middleName = middleName + temp;
        }
        while (lastName.length() != 40) {
            lastName = lastName + temp;

        }
        switch (name_format) {
            case 1: {
                name = firstName + ";" + middleName + ";" + lastName;
                break;
            }
            case 2: {
                name = lastName + ";" + firstName + ";" + middleName;
                break;
            }
            case 3: {
                name = lastName + ";" + middleName + ";" + firstName;
                break;
            }
        }
        System.out.println(name);

    }


    public String getFirstName() {
        String firstName = null;
        String[] temp = name.split(";");
        switch (name_format) {
            case 1:
                firstName = temp[0];
                break;
            case 2:
                firstName = temp[1];
                break;
            case 3:
                firstName = temp[2];
                break;
        }
        return firstName;
    }


    public String getMiddleName() {
        String middleName = null;
        String[] temp = name.split(";");
        switch (name_format) {
            case 1:
                middleName = temp[1];
                break;
            case 2:
                middleName = temp[2];
                break;
            case 3:
                middleName = temp[1];
                break;
        }
        return middleName;

    }


    public String getLastName() {
        String lastName = null;
        String[] temp = name.split(";");
        switch (name_format) {
            case 1:
                lastName = temp[2];
                break;
            case 2:
                lastName = temp[0];
                break;
            case 3:
                lastName = temp[0];
                break;
        }
        return lastName;

    }

}

class NamerTest {
    public static void main(String[] args) {
        Namer eg_1 = new Namer("firstname", "middlename", "lastname", 1);
        System.out.println(eg_1.getFirstName());
        System.out.println(eg_1.getMiddleName());
        System.out.println(eg_1.getLastName());
        Namer eg_2 = new Namer("firstname", "middlename", "lastname", 2);
        System.out.println(eg_2.getFirstName());
        System.out.println(eg_2.getMiddleName());
        System.out.println(eg_2.getLastName());
        Namer eg_3 = new Namer("firstname", "middlename", "lastname", 3);
        System.out.println(eg_3.getFirstName());
        System.out.println(eg_3.getMiddleName());
        System.out.println(eg_3.getLastName());
        Namer eg_4 = new Namer("firstname", "middlename", "lastname", 2);
        System.out.println(eg_4.getFirstName());
        System.out.println(eg_4.getMiddleName());
        System.out.println(eg_4.getLastName());
        Namer eg_5 = new Namer("firstname", "middlename", "lastname", 1);
        System.out.println(eg_5.getFirstName());
        System.out.println(eg_5.getMiddleName());
        System.out.println(eg_5.getLastName());

    }
}


public class Main {

    public static void main(String[] args) {
//        int[] data = new int[10];
//        System.out.println(data[0]);
////        System.out.println(stringArrayClass.getComponentTYpe);
//        char name[] = new char[20];
//        System.out.println(name[0]);
//
//        boolean[] values = new boolean[5];
//        System.out.println(values[0]);
//
//        Object[] objs = new String[15];
//        System.out.println(objs[0]);
//
//        double[] values_2 = new double[5];
//        System.out.println(values_2[0]);
//
//        int[][] values_1 = {{1}, {2}, {3}};
//        System.out.println(values_1[0][2]);
//
//        int[][] values_3 = {{1, 2}, {3}};
//        System.out.println(values_3[3][0]);

        double[][] doubles = new double[10][5];
        System.out.println(doubles.length);


    }
}

