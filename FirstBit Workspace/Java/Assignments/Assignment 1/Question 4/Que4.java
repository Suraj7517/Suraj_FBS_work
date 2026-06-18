
class Employee{
	int id;
	String name;
	double salary;

	Employee(){
		this.id=111;
		this.name="Suraj";
		this.salary=42321;
	}

	Employee(int id, String n,double s){
		this.id=id;
		this.name=n;
		this.salary=s;
	}
	void setId(int i){
		this.id=i;
	}
	
	void setName(String nm){
		this.name=nm;
	}

	void setSalary(double s){
		this.salary=s;
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
		System.out.println("ID:"+this.id);
		System.out.println("Name:"+this.name);
		System.out.println("Salary:"+this.salary);
	}
	
	public String toString(){
		return "ID:"+this.id+" Name:"+this.name+" Salary"+this.salary;
	}

}
class Test4{
	public static void main(String [] args){
		Employee e1;
		e1=new Employee(321,"Suraj",213122);
		System.out.println("HashCode:"+e1.hashCode());
		e1.display();

		
		
	}
}