
class Artist {
	String name;
	int age;
	Artist(String name, int age) {
		super();
		this.name = name;
		this.age = age;
	}
	String getName() {
		return name;
	}
	void setName(String name) {
		name = name;
	}
	int getAge() {
		return age;
	}
	void setAge(int age) {
		this.age = age;
	}
	
	void display() {
		System.out.println("Name: "+this.name);
		System.out.println("Age: "+this.age);
	}
}
class Painter extends Artist{
	String paintingStyle;
	String mediumUsed;
	int numberOfPaintings;
	Painter(String name, int age, String paintingAtyle, String mediumUsed, int numberOfPaintings) {
		super(name, age);
		this.paintingStyle = paintingAtyle;
		this.mediumUsed = mediumUsed;
		this.numberOfPaintings = numberOfPaintings;
	}
	String getPaintingAtyle() {
		return paintingStyle;
	}
	void setPaintingAtyle(String paintingAtyle) {
		this.paintingStyle = paintingAtyle;
	}
	String getMediumUsed() {
		return mediumUsed;
	}
	void setMediumUsed(String mediumUsed) {
		this.mediumUsed = mediumUsed;
	}
	int getNumberOfPaintings() {
		return numberOfPaintings;
	}
	void setNumberOfPaintings(int numberOfPaintings) {
		this.numberOfPaintings = numberOfPaintings;
	}
	
	void display() {
		super.display();
		System.out.println("Painting style: "+this.paintingStyle);
		System.out.println("Medium used: "+this.mediumUsed);
		System.out.println("No of paintings: "+this.numberOfPaintings);
	}
	
}
class Musician extends Artist{
	String instruments;
	String musicGenre;
	int numberOfalbums;
	Musician(String name, int age, String instruments, String musicGenre, int numberOfalbums) {
		super(name, age);
		this.instruments = instruments;
		this.musicGenre = musicGenre;
		this.numberOfalbums = numberOfalbums;
	}
	String getInstruments() {
		return instruments;
	}
	void setInstruments(String instruments) {
		this.instruments = instruments;
	}
	String getMusicGenre() {
		return musicGenre;
	}
	void setMusicGenre(String musicGenre) {
		this.musicGenre = musicGenre;
	}
	int getNumberOfalbums() {
		return numberOfalbums;
	}
	void setNumberOfalbums(int numberOfalbums) {
		this.numberOfalbums = numberOfalbums;
	}
	
	void display() {
		super.display();
		System.out.println("Instrument: "+this.instruments);
		System.out.println("Music Genre: "+this.musicGenre);
		System.out.println("Number Of Albums: "+this.numberOfalbums);
	}
}
class Actor extends Artist{
	String filmindustry;
	int numberOfMovies;
	Actor(String name, int age, String filmindustry, int numberOfMovies) {
		super(name, age);
		this.filmindustry = filmindustry;
		this.numberOfMovies = numberOfMovies;
	}
	String getFilmindustry() {
		return filmindustry;
	}
	void setFilmindustry(String filmindustry) {
		this.filmindustry = filmindustry;
	}
	int getNumberOfMovies() {
		return numberOfMovies;
	}
	void setNumberOfMovies(int numberOfMovies) {
		this.numberOfMovies = numberOfMovies;
	}
	
	void display() {
		super.display();
		System.out.println("Film Industry: "+this.filmindustry);
		System.out.println("No of movies: "+this.numberOfMovies);
	}
	
}
class test{
	public static void main(String[] args) {
		Artist ar1=new Artist("Suraj",23);
		ar1.display();
		System.out.println();
		
		Painter p1=new Painter("Ramesh",66,"Vyang","Pencil",1099);
		p1.display();
		System.out.println();
		
		Musician m1=new Musician("Dev",76,"Piano","abs",543);
		m1.display();
		System.out.println();
		
		Actor a1=new Actor("Salman Khan",50,"Bollywood",700);
		a1.display();
		System.out.println();
	}
}