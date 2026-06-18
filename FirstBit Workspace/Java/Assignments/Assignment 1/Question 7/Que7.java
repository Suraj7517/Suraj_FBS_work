
class Admin{
	int id;
	String name;
	double salary;
	double allowance;
	
	Admin(){		
		this.id=66;
		this.name="Sahil";
		this.salary=66432;
		this.allowance=3332;
	}

	Admin(int id,String n,double s,double a){		
		this.id=id;
		this.name=n;
		this.salary=s;
		this.allowance=a;
	}	
	void setId(int i){
		this.id=i;
	}

	void setName(String n){
		this.name=n;
	}

	void setSalary(double s){
		this.salary=s;
	}
	
	void setAllowance(double a){
		this.allowance=a;
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

	double getAllowance(){
		return this.allowance;
	}

	void display(){
		System.out.println("ID:"+this.id);
		System.out.println("Name:"+this.name);
		System.out.println("Salary:"+this.salary);
		System.out.println("Allowance:"+this.allowance);
	}

	public String toString(){
		return "ID:"+this.id+" Name:"+this.name+" Salary:"+this.salary+" Allowance:"+this.allowance;
	}
}

class Test7{
	public static void main(String [] args){
		Admin a1;
		a1=new Admin(64,"Yash",67346,7744);
		System.out.println("HashCode:"+a1.hashCode());
		a1.display();
}

}