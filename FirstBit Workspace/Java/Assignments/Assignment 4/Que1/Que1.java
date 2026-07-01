class Employee{
	int id;
	String name;
	double salary;
	
	Employee(int id , String name,double salary){
		this.id=id;
		this.name=name;
		this.salary=salary;
	}
	void setId(int id){
		this.id=id;
	}

	void setName(String name){
		this.name=name;
	}
	
	void setSalary(double salary){
		this.id=id;
	}

	int getId(){
		return this.id;
	}

	String getName(){
		return this.name;
	}
	
	double getSalary(){
		return this.salary;
	}


	void display(){
		System.out.println("ID: "+this.id);
		System.out.println("Name: "+this.name);
		System.out.println("Salary: "+this.salary);
	}

}
class Admin extends Employee{
	double allowance;

	Admin(int id,String name,double Salary,double al){
		super(id,name,Salary);
		this.allowance=al;
	}
	void setAlowance(double al){
		this.allowance=al;
	}

	double getAlowance(double al){
		return this.allowance;
	}



	void display(){
		super.display();
		System.out.println("Allowance: "+this.allowance);
	}
}
class SalesManager extends Employee{
	double incentive;
	double target;
	
	SalesManager(int id,String name,double Salary,double incentive,double target){
		
		super(id,name,Salary);
		this.incentive=incentive;
		this.target=target;
	}

	void setIncentive(double ins){
		this.incentive=incentive;
	}
	
	void setTarget(double target){
		this.target=target;
	}

	double getIncentive(){
		return this.incentive;
	}
	
	double getTarget(){
		return this.target;
	}

	void display(){
		super.display();
		System.out.println("Incentive: "+this.incentive);
		System.out.println("Target: "+this.target);

	}

}
class Hr extends Employee{
	double commission;
	
	Hr(int id,String name,double Salary,double cms){
		super(id,name,Salary);
		this.commission=cms;
	}
	
	void setCommission(double cms){
		this.commission=cms;
	}
	
	double setCommisssion(){
		return this.commission;
	}
	void display(){
		super.display();
		System.out.println("Commission: "+this.commission);
	}

}

class Test{

	public static void main(String [] args){
		Employee e1=new Employee(11,"Suraj",145000);
		Admin a1=new Admin(12,"Sam",111000,4500);
		SalesManager sm1=new SalesManager(13,"Pranav",90000,5600,2000);
		Hr h1=new Hr(121,"Sahil",88000,7000);

		e1.display();
		h1.display();
		a1.display();
		sm1.display();
		
	}
}