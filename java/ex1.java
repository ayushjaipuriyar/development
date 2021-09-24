class A {
}

class ObjectTest {
    public static void main(String args[]) {


        A a1 = new A();


        A a2 = new A();


        System.out.println(a1);


// What will Happen for this statement?


        System.out.println(a2);


// What will happen for this statement?
        System.out.println(a1.equals(a2));
// Note class A does not have equals method define


// equals method here will be called from Object class

    }// End of main()
}// end of class ObjectTest