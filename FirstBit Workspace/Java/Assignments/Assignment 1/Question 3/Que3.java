
class Placedstudent{
	int frn;
	String studentName;
	double distanceCovered;
	String companyName;
	String designation;
	
	Placedstudent(){
		this.frn=221;
		this.studentName="Suraj";
		this.distanceCovered=4.1;
		this.companyName="TCS";
		this.designation="Developer";
	}
	
	Placedstudent(int f, String sn,double dc,String c,String d){
		this.frn=f;
		this.studentName=sn;
		this.distanceCovered=dc;
		this.companyName=c;
		this.designation=d;
	}


	void setFrn(int f){
		this.frn=f;
	}

	void setName(String n){
		this.studentName=n;
	}
	
	void setDistance(double d){
		this.distanceCovered=d;
	}
	
	void setCompanyName(String cn){
		this.companyName=cn;
	}
	
	void setDesignation(String d){
		this.designation=d;
	}

	int getFrn(){
		return this.frn;
	}

	String getName(){
		return this.studentName;
	}

	double getDistance(){
		return this.distanceCovered;
	}
	
	String getCompanyname(){
		return this.companyName;
	}
	
	String getDesignation(){
		return this.designation;
	}

	void display(){
		
		System.out.println("FRN:"+this.frn);
		System.out.println("Name:"+this.studentName);
		System.out.println("Distance Covered:"+this.distanceCovered);
		System.out.println("Company:"+this.companyName);
		System.out.println("Designation:"+this.designation);
	}
	
	public String toString(){
		return "FRN:"+this.frn+" Name:"+this.studentName+" Distance Covered:"+this.distanceCovered;
	}
}

class Test3{
	public static void main(String [] args){
		Placedstudent p1;
		p1=new Placedstudent(144,"Suraj",5.7,"Infosys","Developer");
		System.out.println("HashCode:"+p1.hashCode());
		System.out.println(p1.toString());



		p1.display();
		
	}
}