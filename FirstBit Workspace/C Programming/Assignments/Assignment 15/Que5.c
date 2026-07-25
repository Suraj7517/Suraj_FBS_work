/*5. Movie Database: Create a program that uses structures to manage a movie
database with details like title, director, release year, and genre. Allow users
to add, search for, and update movie records.*/
#include <stdio.h>
#include <string.h>

typedef struct Movie{
	char title[30];
	char director[30];
	int releaseYear;
	char genre[20];
}Movie;

void addMovie(Movie *m,int *cindex,int size){
	if(*cindex==size){
		printf("\nDatabase is Full!");
		return;
	}

	char title[30],director[30],genre[20];

	printf("\nEnter Movie Title : ");
	scanf("%s",title);
	strcpy(m[*cindex].title,title);

	printf("Enter Director Name : ");
	scanf("%s",director);
	strcpy(m[*cindex].director,director);

	printf("Enter Release Year : ");
	scanf("%d",&m[*cindex].releaseYear);

	printf("Enter Genre : ");
	scanf("%s",genre);
	strcpy(m[*cindex].genre,genre);

	(*cindex)++;
	printf("\nMovie Added Successfully!\n");
}

void displayMovies(Movie *m,int cindex){
	if(cindex==0){
		printf("\nNo Movies Found!\n");
		return;
	}

	for(int i=0;i<cindex;i++){
		printf("\nMovie %d",i+1);
		printf("\nTitle : %s",m[i].title);
		printf("\nDirector : %s",m[i].director);
		printf("\nRelease Year : %d",m[i].releaseYear);
		printf("\nGenre : %s",m[i].genre);
		printf("\n------------------------");
	}
}

void searchMovie(Movie *m,int cindex){
	char title[30];
	int found=0;

	printf("\nEnter Movie Title to Search : ");
	scanf("%s",title);

	for(int i=0;i<cindex;i++){
		if(strcmp(m[i].title,title)==0){
			printf("\nMovie Found");
			printf("\nTitle : %s",m[i].title);
			printf("\nDirector : %s",m[i].director);
			printf("\nRelease Year : %d",m[i].releaseYear);
			printf("\nGenre : %s",m[i].genre);
			found=1;
			break;
		}
	}

	if(found==0){
		printf("\nMovie Not Found!");
	}
}

void updateMovie(Movie *m,int cindex){
	char title[30];
	int found=0;

	printf("\nEnter Movie Title to Update : ");
	scanf("%s",title);

	for(int i=0;i<cindex;i++){
		if(strcmp(m[i].title,title)==0){

			printf("\nEnter New Director : ");
			scanf("%s",m[i].director);

			printf("Enter New Release Year : ");
			scanf("%d",&m[i].releaseYear);

			printf("Enter New Genre : ");
			scanf("%s",m[i].genre);

			printf("\nMovie Updated Successfully!");
			found=1;
			break;
		}
	}

	if(found==0){
		printf("\nMovie Not Found!");
	}
}

void main(){
	Movie m[10];
	int cindex=0,choice;

	while(1){

		printf("\n1. Add Movie");
		printf("\n2. Display All Movies");
		printf("\n3. Search Movie");
		printf("\n4. Update Movie");
		printf("\n5. Exit");

		printf("\nEnter Your Choice : ");
		scanf("%d",&choice);

		switch(choice){

			case 1:
				addMovie(m,&cindex,10);
				break;

			case 2:
				displayMovies(m,cindex);
				break;

			case 3:
				searchMovie(m,cindex);
				break;

			case 4:
				updateMovie(m,cindex);
				break;

			case 5:
				return;

			default:
				printf("\nInvalid Choice!");
		}
	}
}