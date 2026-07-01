
class Player {
	String name;
	int age;
	String country;
	int mathchesPlayed;
	int jerseyNumber;
	
	
	Player(String name, int age, String country, int mathchesPlayed, int jerseyNumber) {
		super();
		this.name = name;
		this.age = age; 
		this.country = country;
		this.mathchesPlayed = mathchesPlayed;
		this.jerseyNumber = jerseyNumber;
	}
	String getName() {
		return name;
	}
	void setName(String name) {
		this.name = name;
	}
	int getAge() {
		return age;
	}
	void setAge(int age) {
		this.age = age;
	}
	String getCountry() {
		return country;
	}
	void setCountry(String country) {
		this.country = country;
	}
	int getMathchesPlayed() {
		return mathchesPlayed;
	}
	void setMathchesPlayed(int mathchesPlayed) {
		this.mathchesPlayed = mathchesPlayed;
	}
	int getJerseyNumber() {
		return jerseyNumber;
	}
	void setJerseyNumber(int jerseyNumber) {
		this.jerseyNumber = jerseyNumber;
	}
	
	void display() {
		System.out.println("Name:"+this.name);
		System.out.println("Age: "+this.age);
		System.out.println("Country: "+this.country);
		System.out.println("Mathes Played: "+this.mathchesPlayed);
		System.out.println("Jersey No.:"+this.jerseyNumber);
	}
}

class CricketPlayer extends Player{
	int totalRuns;
	int totalWickets;
	String battingStryle;
	String bowlingStyle;
	
	
	CricketPlayer(String name, int age, String country, int mathchesPlayed, int jerseyNumber, int totalRuns,
			int totalWickets, String battingStryle, String bowlingStyle) {
		super(name, age, country, mathchesPlayed, jerseyNumber);
		this.totalRuns = totalRuns;
		this.totalWickets = totalWickets;
		this.battingStryle = battingStryle;
		this.bowlingStyle = bowlingStyle;
	}
	int getTotalRuns() {
		return totalRuns;
	}
	void setTotalRuns(int totalRuns) {
		this.totalRuns = totalRuns;
	}
	int getTotalWickets() {
		return totalWickets;
	}
	void setTotalWickets(int totalWickets) {
		this.totalWickets = totalWickets;
	}
	String getBattingStryle() {
		return battingStryle;
	}
	void setBattingStryle(String battingStryle) {
		this.battingStryle = battingStryle;
	}
	String getBowlingStyle() {
		return bowlingStyle;
	}
	void setBowlingStyle(String bowlingStyle) {
		this.bowlingStyle = bowlingStyle;
	}
	
	void display() {
		super.display();
		System.out.println("Runs: "+this.totalRuns);
		System.out.println("Wickets:  "+this.totalWickets);
		System.out.println("Batting Style: "+this.battingStryle);
		System.out.println("Bowling Style: "+this.bowlingStyle);
	}
	
}

class FootballPlayer extends Player{
	int totalGoals;
	String playingPosition;
	
	
	FootballPlayer(String name, int age, String country, int mathchesPlayed, int jerseyNumber, int totalGoals,
			String playingPosition) {
		super(name, age, country, mathchesPlayed, jerseyNumber);
		this.totalGoals = totalGoals;
		this.playingPosition = playingPosition;
	}
	
	int getTotalGoals() {
		return totalGoals;
	}
	void setTotalGoals(int totalGoals) {
		this.totalGoals = totalGoals;
	}
	String getPlayingPosition() {
		return playingPosition;
	}
	void setPlayingPosition(String playingPosition) {
		this.playingPosition = playingPosition;
	}
	
	void display() {
		super.display();
		System.out.println("Goals: "+this.totalGoals);
		System.out.println("Playing Position: "+this.playingPosition);
	}
	
}

class Test{
	public static void main(String[] args) {
		Player p1=new Player("Sachin tendulkar",50,"India",1000,10);
		p1.display();
		System.out.println();
		
		CricketPlayer cp=new CricketPlayer("Rohit Sharma",40,"India",700,45,20000,500,"Right","Spiner");
		cp.display();
		System.out.println();
		
		FootballPlayer fp=new FootballPlayer("Cristiano",55,"Portugal",2000,7,5000,"Attacking");
		fp.display();
		System.out.println();
	}
}
