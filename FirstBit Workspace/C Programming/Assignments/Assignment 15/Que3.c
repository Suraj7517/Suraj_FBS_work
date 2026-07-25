/*3. Write a program to create an array for 10 players. For each player store name, no. of
matches played, runs, wickets takes.
a. Create function to Accept the information of each player.
b. Create function to display the information of all the players
c. Display the information of player who made maximum runs and the one who took
maximum number of wickets.*/

typedef struct player{
	char playerName[20];
	int runs,wickets,matchesPlayed;
}player;

void addPlayer(player * p1,int *cindex,int size){
	if(*cindex==10){
		printf("Addimission full!");
	}
	else{
		char pname[20];
		
		for(int i=*cindex;i<size;i++){
			
			printf("\nEnter name:");
			scanf("%s",pname);
			strcpy(p1[i].playerName,pname);
			printf("\nEnter runs:");
			scanf("%d",&p1[i].runs);
			printf("\nEnter wickets:");
			scanf("%d",&p1[i].wickets);
			printf("\nEnter matches played:");
			scanf("%d",&p1[i].matchesPlayed);
			
			(*cindex)++;
			printf("player registered successfully");
		}
	}
}
void displayallPlayers(player *p1,int cindex){
	for(int i=0;i<cindex;i++){
		printf("\nPlayer Name:%s ",p1[i].playerName);
		printf("\nRuns:%d ",p1[i].runs);
		printf("\nWickets:%d ",p1[i].wickets);
		printf("\nMatches played:%d \n",p1[i].matchesPlayed);
	}
}

void showTopWicketers(player * p1,int cindex){
	for(int i=0;i<cindex-1;i++){
		for(int j=0;j<cindex-i-1;j++){
			if(p1[j].wickets<p1[j+1].wickets){
				player temp= p1[j];
				p1[j]=p1[j+1];
				p1[j+1]=temp;
			}
		}
	}
		printf("\nPlayer Name:%s ",p1[0].playerName);
		printf("\nRuns:%d ",p1[0].runs);
		printf("\nWickets:%d ",p1[0].wickets);
		printf("\nMatches played:%d \n",p1[0].matchesPlayed);
}
void showTopRunners(player * p1,int cindex){
	for(int i=0;i<cindex-1;i++){
		for(int j=0;j<cindex-i-1;j++){
			if(p1[j].runs<p1[j+1].runs){
				player temp= p1[j];
				p1[j]=p1[j+1];
				p1[j+1]=temp;
			}
		}
	}
		printf("\nPlayer Name:%s ",p1[0].playerName);
		printf("\nRuns:%d ",p1[0].runs);
		printf("\nWickets:%d ",p1[0].wickets);
		printf("\nMatches played:%d \n",p1[0].matchesPlayed);
}

void main(){
	player p1[10];
	int cindex=0,choice=0;
	
	while(1){
	printf("\n1-->Add new player");
	printf("\n2-->Display all players");
	printf("\n3-->Show by runs");
	printf("\n4-->Show by wickets\n");
	printf("\n5-->Exit\n");
	printf("\nEnter your choice : ");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:{
			addPlayer(p1,&cindex,10);
			break;
		}
		case 2:{
			displayallPlayers(p1,cindex);
			break;
		}
		case 3:{
			showTopRunners(p1,cindex);
			break;
		}
		case 4:{
			showTopWicketers(p1,cindex);
			break;
		}
		case 5:{
			return;
			break;
		}
		default: {
			printf("Invalid input!");
		}
	}
	
	}	
}
