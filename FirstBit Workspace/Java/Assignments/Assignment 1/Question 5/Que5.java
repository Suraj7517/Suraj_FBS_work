
class Hr{
	int id;
	String name;
	double salary;
	double commission;
	
	Hr(){
		this.id=131;
		this.name="Suraj";
		this.salary=43255;
		this.commission=6778;
	}

	Hr(int id,String n,double s,double c){
		this.id=id;
		this.name=n;
		this.salary=s;
		this.commission=c;
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
	void setCommission(double c){
		this.commission=c;
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

	double getCommission(){
		return this.commission;
	}

	void display(){
		System.out.println("ID:"+this.id);
		System.out.println("Name:"+this.name);
		System.out.println("Salary:"+this.salary);
		System.out.println("Commission:"+this.commission);
	}
	
	public String toString(){
		return "ID:"+this.id+" Name:"+this.name+" Salary:"+this.salary+" Commission:"+this.commission;
	}
}
class Test5{
	public static void main(String [] args){
		Hr h1;
		h1=new Hr(434,"Sam",54433,6464);
		System.out.println("HashCode:"+h1.hashCode());
		h1.display();
				
	}
}