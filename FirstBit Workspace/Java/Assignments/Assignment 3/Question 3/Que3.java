class LibraryUser{
	String userName;
	int delayDays;
	static double fineRate=15;
	
	LibraryUser(String name,int days){
		this.userName=name;
		this.delayDays=days;
	}

	 double calculateFine(){
		return delayDays*fineRate;
	}
	
	void display(){
		System.out.println("Name: "+this.userName);
		System.out.println("Fine: "+this.calculateFine());
	}

}

class Test3{
	public static void main(String [] args){
		LibraryUser lu;
		lu=new LibraryUser("Ram",5);
		lu.display();
	}
}