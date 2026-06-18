
class SalesManager{
	int id;
	String name;
	double salary;
	double incentive;
	boolean target;

	SalesManager(){
		this.id=533;
		this.name="Pranav";
		this.salary=546373;
		this.incentive=4622;
		this.target=true;
	}

	SalesManager(int id,String n,double s,double ins,boolean t){
		this.id=id;
		this.name=n;
		this.salary=s;
		this.incentive=ins;
		this.target=t;
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

	void setIncentive(double ins){
		this.incentive=ins;
	}

	void setTarget(boolean t){
		this.target=t;
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

	double getIncentive(){
		return this.incentive;
	}

	boolean getTarget(){
		return this.target;
	}


	void display(){
		System.out.println("ID:"+this.id);
		System.out.println("Name:"+this.name);
		System.out.println("Salary:"+this.salary);
		System.out.println("Incentive:"+this.incentive);
		System.out.println("Target:"+this.target);
	}
	
	public String toString(){
		return "ID:"+this.id+" Name:"+this.name+" Salary:"+this.salary+" Incentive:"+this.incentive+" Target:"+this.target;
	}

}
class Test6{
	public static void main(String[] args){
		SalesManager sm1;
		sm1=new SalesManager(55,"Pranav",6633,3222,true);
		System.out.println("HashCode:"+sm1.hashCode());
		sm1.display();

	}
}
