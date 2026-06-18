
class Date{
int day;
int month;
int year;

	//default counstructor
	Date(){
		this.day=29;
		this.month=5;
		this.year=2026;
	}

	//Parameterized counstructor
	Date(int d,int m,int y){
		this.day=d;
		this.month=m;
		this.year=y;
	}

	void setDay(int d){
		this.day=d;
	}
	
	void setMonth(int m){
		this.month=m;
	}

	void setYear(int y){
		this.year=y;
	}

	int getDay(){
		return this.day;
	}

	int getMonth(){
		return this.month;
	}

	int getYear(){
		return this.year;
	}

	void display(){
		System.out.println("Day:"+this.day);
		System.out.println("Month:"+this.month);
		System.out.println("Year:"+this.year);
	}

	public String toString(){
		return "Date "+"Day="+day + " Month=" + month + " Year=" + year;
	}

	
}
class Test1{
	public static void main(String [] args){
		Date d1;
		d1=new Date(15,8,1947);
		System.out.println("HashCode:"+d1.hashCode());
		
		System.out.println(d1.toString());

		int d=d1.getDay();
		int m=d1.getMonth();
		int y=d1.getYear();
	
		d1.display();
		System.out.println("Day:"+d+" Month:"+m+" Year:"+y);
	}	
}