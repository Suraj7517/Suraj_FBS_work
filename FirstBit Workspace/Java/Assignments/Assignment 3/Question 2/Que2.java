class Employee{
	String employeeName;
	double basicSalary;
	static double bonusRate=25;
	
Employee(String name,double bSalary){
	this.employeeName=name;
	this.basicSalary=bSalary;
}
	
	static void updateBonusRate(double newRate){
	bonusRate=newRate;
		
	}
double calculateSalary(){
	return this.basicSalary+(this.basicSalary*this.bonusRate/100);

}

void showSalary(){
	System.out.println("Name:"+this.employeeName);
	System.out.println("Total Salary:"+calculateSalary());
}


}

class Test1{
	public static void main(String [] args){
	Employee e1;
	e1=new Employee("Ram",15000);
	e1.showSalary();
	Employee.updateBonusRate(35);
	e1.showSalary();

}
}