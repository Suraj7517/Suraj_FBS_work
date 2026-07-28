#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
typedef struct player{
	int jerseyNo,runs,wickets,matchesPlayed;
	char playerName[20];
}player;
void storeHarcoded(player * p1,int * cindex){
p1[0].jerseyNo = 45;
p1[0].runs = 4100;
p1[0].wickets = 5;
p1[0].matchesPlayed = 75;
strcpy(p1[0].playerName, "Rohit");

p1[1].jerseyNo = 18;
p1[1].runs = 2450;
p1[1].wickets = 35;
p1[1].matchesPlayed = 52;
strcpy(p1[1].playerName, "Virat");

p1[2].jerseyNo = 7;
p1[2].runs = 3200;
p1[2].wickets = 12;
p1[2].matchesPlayed = 60;
strcpy(p1[2].playerName, "Dhoni");

p1[3].jerseyNo = 93;
p1[3].runs = 1800;
p1[3].wickets = 48;
p1[3].matchesPlayed = 40;
strcpy(p1[3].playerName, "Bumrah");

p1[4].jerseyNo = 11;
p1[4].runs = 2100;
p1[4].wickets = 55;
p1[4].matchesPlayed = 45;
strcpy(p1[4].playerName, "Shami");

p1[5].jerseyNo = 8;
p1[5].runs = 2750;
p1[5].wickets = 25;
p1[5].matchesPlayed = 58;
strcpy(p1[5].playerName, "Jadeja");

p1[6].jerseyNo = 63;
p1[6].runs = 1400;
p1[6].wickets = 70;
p1[6].matchesPlayed = 50;
strcpy(p1[6].playerName, "Siraj");

p1[7].jerseyNo = 77;
p1[7].runs = 1950;
p1[7].wickets = 30;
p1[7].matchesPlayed = 42;
strcpy(p1[7].playerName, "Gill");

p1[8].jerseyNo = 99;
p1[8].runs = 1250;
p1[8].wickets = 80;
p1[8].matchesPlayed = 39;
strcpy(p1[8].playerName, "Arshdeep");

p1[9].jerseyNo = 33;
p1[9].runs = 3500;
p1[9].wickets = 15;
p1[9].matchesPlayed = 68;
strcpy(p1[9].playerName, "Hardik");
}
void addPlayer(player * p1,int *cindex,int *size){
	if(*cindex==*size){
		int newSize=(*size)*2;
		p1=(player*)realloc(p1,newSize);
		*size=newSize;
		printf("New size allowcated successfully");
	}
	
	else{
		char pname[20];
		
		for(int i=*cindex;i<*size;i++){
			
			printf("\nEnter Jersy number:"); 
			scanf("%d",&p1[i].jerseyNo);
			printf("\nEnter name:");
			scanf("%s",&pname);
			strcpy(p1[i].playerName,pname);
			printf("\nEnter runs:");
			scanf("%d",&p1[i].runs);
			printf("\nEnter wickets:");
			scanf("%d",&p1[i].wickets);
			printf("\nEnter matches played:");
			scanf("%d",&p1[i].matchesPlayed);
			
			(*cindex)++;
			printf("player registered successfully");
			break;
		}
	}
}
void removePlayer(player *p1,int jn,int *cindex){
	for(int i=0;i<*cindex;i++){
		if(p1[i].jerseyNo==jn){
			for(int j=i;j<*cindex;j++){
				p1[i]=p1[i+1];
			}
		
		}
	}
	(*cindex)--;
}

void searchPlayer(player*p1,int jn,int *cindex){
	int flag=0;
	for(int i=0;i<*cindex; i++){
		if(p1[i].jerseyNo==jn){
			printf("\n*Player found");
				printf("\nJersy number:%d ",p1[i].jerseyNo);
				printf("\nPlayer Name:%s ",p1[i].playerName);
				printf("\nRuns:%d ",p1[i].runs);
				printf("\nWickets:%d ",p1[i].wickets);
				printf("\nMatches played:%d \n",p1[i].matchesPlayed);
				flag=1;
		}
	}
	if(flag==0){
		printf("Player Not Found!\n");
	}
}
void updatePlayer(player *p1,int jn,int cindex){
	int flag=0;
	for(int i=0;i<cindex; i++){
		if(p1[i].jerseyNo==jn){
			char pname[20];
			printf("\n*Player Found fill new details\n");
			
			printf("\nEnter Jersy number:"); 
			scanf("%d",&p1[i].jerseyNo);
			printf("\nEnter name:");
			scanf("%s",&pname);
			strcpy(p1[i].playerName,pname);
			printf("\nEnter runs:");
			scanf("%d",&p1[i].runs);
			printf("\nEnter wickets:");
			scanf("%d",&p1[i].wickets);
			printf("\nEnter matches played:");
			scanf("%d",&p1[i].matchesPlayed);
			printf("\nPlayer details updated successfully..\n");
			flag=1;
		}
	}
	if(flag==0){
		printf("Player not exits!\n");
	}
	
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
	for(int i=0;i<cindex;i++){
		printf("\nJersy number:%d ",p1[i].jerseyNo);
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
	for(int i=0;i<cindex;i++){
		printf("\nJersy number:%d ",p1[i].jerseyNo);
		printf("\nPlayer Name:%s ",p1[i].playerName);
		printf("\nRuns:%d ",p1[i].runs);
		printf("\nWickets:%d ",p1[i].wickets);
		printf("\nMatches played:%d \n",p1[i].matchesPlayed);
	}
}

void displayallPlayers(player *p1,int cindex){
	for(int i=0;i<cindex;i++){
		printf("\nJersy number:%d ",p1[i].jerseyNo);
		printf("\nPlayer Name:%s ",p1[i].playerName);
		printf("\nRuns:%d ",p1[i].runs);
		printf("\nWickets:%d ",p1[i].wickets);
		printf("\nMatches played:%d \n",p1[i].matchesPlayed);
	}
}

void main(){
	int size=50;
	player *p1;
	p1 = (player*)malloc(sizeof(player)*size);
	
	printf("*Players Data\n");
	int choice,exit=0,cindex=10;
	storeHarcoded(p1,&cindex);

	
	
	while(exit==0){
		printf("\n1.Add new player");
		printf("\n2.Remove player");
		printf("\n3.Search player");
		printf("\n4.Update players data");
		printf("\n5.Player Performance Rankings");
		printf("\n6.Display all players");
		printf("\n7.Exit");
		
		printf("\n\nEnter your choice:");
		scanf("%d",&choice);
		
		switch(choice){
			
			case 1:{
				addPlayer(p1,&cindex,&size);
				break;
			}
			case 2:{
				int jn;
				printf("Enter jersey no to remove:");
				scanf("%d",&jn);
				removePlayer(p1,jn,&cindex);
				break;
			}
			case 3:{
				int js;
				printf("Enter jersey no to search:");
				scanf("%d",&js);
				searchPlayer(p1,js,&cindex);
				break;
			}
			case 4:{
				int jn;
				printf("Enter jersey no to update player data:");
				scanf("%d",&jn);
				updatePlayer(p1,jn,cindex);
				break;
			}
			case 5:{
				int choice=1;
				
				printf("1.Show by runs\n");
				printf("2.Show by wickets\n");
				
				printf("\nEnter Your Choice:");
				scanf("%d",&choice);
				switch(choice){
					case 1:{
						showTopRunners(p1,cindex);
						break;
					}
					case 2:{
						showTopWicketers(p1,cindex);
						break;
					}
				}
				
				break;
			}
			case 6:{	
				displayallPlayers(p1,cindex);		
				break;
			}
			case 7:{
				exit=1;
				break;
			}
		}
	}
	
}