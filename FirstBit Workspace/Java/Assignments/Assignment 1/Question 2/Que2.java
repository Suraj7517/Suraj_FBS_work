
class Student{
	int frn;
	String studentName;
	double distanceCovered;

	Student(){
		this.frn=111;
		this.studentName="Suraj";
		this.distanceCovered=3.7;
	}

	Student(int f,String n,double d){
		this.frn=f;
		this.studentName=n;
		this.distanceCovered=d;
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

	int getFrn(){
		return this.frn;
	}

	String getName(){
		return this.studentName;
	}

	double getDistance(){
		return this.distanceCovered;
	}


	void display(){
		System.out.println("FRN:"+this.frn);
		System.out.println("Name:"+this.studentName);
		System.out.println("Distance Covered:"+this.distanceCovered);
	}

	public String toString(){
		return "FRN :"+this.frn+" Name: "+this.studentName+" Distance_Covered:"+this.distanceCovered;
	}
}

class Test2{
	public static void main(String [] args){
		Student s1;
		s1=new Student(121,"Suraj",4.8);
		System.out.println("HashCode:"+s1.hashCode());
		System.out.println(s1.toString());
		
		s1.display();

	}
}