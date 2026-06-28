class Student{
	int rollNo;
	String name;
	double percentage;

	Student(int rn,String name,double per){
		this.rollNo=rn;
		this.name=name;
		this.percentage=per;
	}

}

class Employee{
	int id;
	String name;
	double annualSalary;

	Employee(int id,String name,double annualSalary){
		this.id=id;
		this.name=name;
		this.annualSalary=annualSalary;
	}
}

class Bank{
	double approveLoan(Student s1){

	if(s1.percentage>80){
		return 200000;
	}		

	else if(s1.percentage>=60 && s1.percentage<=80)
	{
  	  	return 100000;
	}
	else if(s1.percentage>=40 && s1.percentage<60)
	{
  		  return 50000;
	}

	else if(s1.percentage<40){
	return 0;
	}
	
	else{
		return 0;
	}


}
	
	double approveLoan(Employee e1){
		if(e1.annualSalary>1200000){
			return 700000;
		}
		else if(e1.annualSalary>1000000 && e1.annualSalary<=1200000)		{
			return 600000;
		}
		else if(e1.annualSalary>600000 && e1.annualSalary<=1000000)		{
			return 500000;
		}
		else if(e1.annualSalary>=400000 && e1.annualSalary<=600000)		{
			return 400000;
		}
		else if(e1.annualSalary<400000){
			return 0;
		}

		else{
			return 0;
		}

	}

	
}

class Test{
	public static void main(String [] args){
		Bank b1=new Bank();
		Student s1=new Student(111,"Suraj",90);
		Employee e1=new Employee(121,"Sam",1500000);
		System.out.println("Your loan has been approved of eupees:"+b1.approveLoan(s1));

System.out.println("Your loan has been approved of eupees:"+b1.approveLoan(e1));


	}
}
