class Calculator{
	void add(int a,double b){
	System.out.println("int a,double b");
	System.out.println(a+b);
	}

	void add(int a,int b){
	System.out.println("int a,int b");
	System.out.println(a+b);
	}

	void add(double a,double b){
	System.out.println("double a,double b");
	System.out.println(a+b);
	}
	
	void add(double a,int b){
	System.out.println("double a,int b");
	System.out.println(a+b);
	}

	void sub(int a,double b){
	System.out.println("int a,double b");
	System.out.println(a-b);
	}

	void sub(int a,int b){
	System.out.println("int a,int b");
	System.out.println(a-b);
	}

	void sub(double a,double b){
	System.out.println("double a,double b");
	System.out.println(a-b);
	}
	
	void sub(double a,int b){
	System.out.println("double a,int b");
	System.out.println(a-b);
	}

	void mul(int a,double b){
	System.out.println("int a,double b");
	System.out.println(a*b);
	}

	void mul(int a,int b){
	System.out.println("int a,int b");
	System.out.println(a*b);
	}

	void mul(double a,double b){
	System.out.println("double a,double b");
	System.out.println(a*b);
	}
	
	void mul(double a,int b){
	System.out.println("double a,int b");
	System.out.println(a*b);
	}

	void div(int a,double b){
	System.out.println("int a,double b");
	System.out.println(a/b);
	}

	void div(int a,int b){
	System.out.println("int a,int b");
	System.out.println(a/b);
	}

	void div(double a,double b){
	System.out.println("double a,double b");
	System.out.println(a/b);
	}
	
	void div(double a,int b){
	System.out.println("double a,int b");
	System.out.println(a/b);
	}
}

class Test{
	public static void main(String [] args){
		Calculator c1;
		c1=new Calculator();
		c1.add(10.5,10);
		c1.sub(20,5.5);
		c1.mul(10,5);
		c1.div(12.5,4);
	}

}