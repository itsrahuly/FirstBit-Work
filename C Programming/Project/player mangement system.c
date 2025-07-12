#include <stdio.h>
#include <string.h>

typedef struct player {// Structure definition
    int jersey_number;
    char name[25];
    int run;
    int wickets;
    int matches_played;
    char team[20];
} player;

// Function declarations
void getinput(player *, int);
void display(player *, int);
void findByJerseyNumber(player *, int, int);
void findByName(player *, int , char []);
void removeplayer(player *, int *, int);
void updatePlayer(player *, int, int);
void sortAndDisplay(player *, int);
void TeamDisplay(player *,int ,char[] );

// Main function
void main(){
    player p1[5];  // maximum 5 players
    int choice;
    int player_count = 3;  // 3 static players
	


   // Player 0
	p1[0].jersey_number = 18;
	strcpy(p1[0].name, "virat");
	p1[0].run = 3540;
	p1[0].wickets = 5;
	p1[0].matches_played = 100;
	strcpy(p1[0].team, "RCB");

	// Player 1
	p1[1].jersey_number = 45;
	strcpy(p1[1].name, "rohit");
	p1[1].run = 4321;
	p1[1].wickets = 2;
	p1[1].matches_played = 54;
	strcpy(p1[1].team, "MI");
	
	// Player 2
	p1[2].jersey_number = 7;
	strcpy(p1[2].name, "dhoni");
	p1[2].run = 5450;
	p1[2].wickets = 3;
	p1[2].matches_played = 120;
	strcpy(p1[2].team, "CSK");


    do {
        printf("\nWhich option to perform in player management System:\n");
        printf("1. Insert player\n");
        printf("2. Remove player\n");
        printf("3. Search player by jersey number\n");
        printf("4. Update player\n");
        printf("5. Search player by name\n");
        printf("6. Display all player\n");
        printf("7. Display sorted players (Top 3 player Min/Max, run & Wickets)\n");
        printf("8. Display Player By Team\n");
        printf("0. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
            if (player_count < 5) 
			{
                getinput(&p1[player_count], 1);
                player_count++;
            }
			 else
                printf("Player list is full!\n");
             
		else if (choice == 2) 
            if (player_count == 0) 
                printf("No players to remove.\n");
             else 
			 {
                int jersey;
                printf("Enter jersey number to remove: ");
                scanf("%d", &jersey);
                removeplayer(p1, &player_count, jersey);
            }
		else if (choice == 3) 
            if (player_count == 0)
                printf("No players to search.\n");
             else 
			 {
                int search_jersey;
                printf("Enter jersey number to search: ");
                scanf("%d", &search_jersey);
                findByJerseyNumber(p1, player_count, search_jersey);
            }
		else if (choice == 4) 
            if (player_count == 0) 
                printf("No players to update.\n");
             else 
			{
                int jersey;
                printf("Enter jersey number to update: ");
                scanf("%d", &jersey);
                updatePlayer(p1, player_count, jersey);
            }
         else if (choice == 5) 
            if (player_count == 0) 
                printf("No players to search.\n");
            else 
			{
                char search_name[25];
                printf("Enter player name to search: ");
                scanf("%s", search_name);
                findByName(p1, player_count, search_name);
            }
		 else if (choice == 6) 
            if (player_count == 0)
                printf("No players to display.\n");
			 else 
	                display(p1, player_count);
	    else if (choice == 7) 
            if (player_count == 0) 
                printf("No players to display.\n");
            else
                sortAndDisplay(p1, player_count);
    
        else if (choice == 8)
            if (player_count == 0) 
                printf("No players to display.\n");
             else 
			 {
                char search_team[20];
                printf("Enter Team Name: ");
                scanf("%s", search_team);
                TeamDisplay(p1, player_count, search_team);
            }
         else if (choice == 0) 
            printf("Exiting player management system.\n");
         else 
            printf("Invalid choice!\n");
    } while (choice != 0);
}

void getinput(player *ptr, int size){// Insert player function
    for (int i = 0; i < size; i++) {
        printf("\nRegistering player number %d\n", i + 1);
        printf("Enter name of player: ");
        scanf("%s", ptr[i].name);
        printf("Enter jersey number: ");
        scanf("%d", &ptr[i].jersey_number);
        printf("Enter total runs: ");
        scanf("%d", &ptr[i].run);
        printf("Enter number of matches played: ");
        scanf("%d", &ptr[i].matches_played);
        printf("Enter number of wickets taken: ");
        scanf("%d", &ptr[i].wickets);
        printf("Enter Team Name :");
        scanf("%s",ptr[i].team);
    }
}

void display(player *ptr, int size) {// Display all players

    for (int i = 0; i < size; i++) {
        printf("\n****** Player %d Details ******\n", i + 1);
        printf("Player Name: %s\n", ptr[i].name);
        printf("Jersey Number: %d\n", ptr[i].jersey_number);
        printf("Total Runs: %d\n", ptr[i].run);
        printf("Matches Played: %d\n", ptr[i].matches_played);
        printf("Wickets Taken: %d\n", ptr[i].wickets);
        printf("Player Team Name:%s \n",ptr[i].team);
        printf("*******************************\n");
    }
}

void findByJerseyNumber(player *ptr, int size, int jersey) {// Search by jersey number

    int found = 0;
    for (int i = 0; i < size; i++) {
        if (ptr[i].jersey_number == jersey) {
            printf("\nPlayer found:\n");
            printf("Name: %s\n", ptr[i].name);
            printf("Jersey Number: %d\n", ptr[i].jersey_number);
            printf("Runs: %d\n", ptr[i].run);
            printf("Matches: %d\n", ptr[i].matches_played);
            printf("Wickets: %d\n", ptr[i].wickets);
            printf("Player Team Name:%s \n",ptr[i].team);
            found = 1;
            break;
        }
    }
    if (!found) 
        printf("No player found with jersey number %d.\n", jersey);
}

void findByName(player *ptr, int size, char name[]) {// Search by name
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (strcmp(ptr[i].name, name) == 0) {
            printf("\nPlayer found:\n");
            printf("Name: %s\n", ptr[i].name);
            printf("Jersey Number: %d\n", ptr[i].jersey_number);
            printf("Runs: %d\n", ptr[i].run);
            printf("Matches: %d\n", ptr[i].matches_played);
            printf("Wickets: %d\n", ptr[i].wickets);
            printf("Player Team Name:%s \n",ptr[i].team);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("No player found with name \"%s\".\n", name);
}

void removeplayer(player *ptr, int *size, int jersey) {// Remove player

    int found = 0;
    for (int i = 0; i < *size; i++) {
        if (ptr[i].jersey_number == jersey) {
            for (int j = i; j < *size - 1; j++) {
                ptr[j] = ptr[j + 1];  // Shift left
            }
            (*size)--;
            printf("Player with jersey number %d has been removed.\n", jersey);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("No player found with jersey number %d.\n", jersey);
}

void updatePlayer(player *ptr, int size, int jersey) {// Update player details
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (ptr[i].jersey_number == jersey) {
            printf("\nPlayer found. Enter new details to update:\n");
            printf("Enter updated name: ");
            scanf("%s", ptr[i].name);
            printf("Enter updated jersey number: ");
            scanf("%d", &ptr[i].jersey_number);
            printf("Enter updated runs: ");
            scanf("%d", &ptr[i].run);
            printf("Enter updated wickets: ");
            scanf("%d", &ptr[i].wickets);
            printf("Enter updated matches played: ");
            scanf("%d", &ptr[i].matches_played);
            printf("Enter updated Team Name:");
            scanf("%s",ptr[i].team);
            printf("Player details updated successfully.\n");
            found = 1;
            break;
        }
    }
    if (!found)
        printf("No player found with jersey number %d.\n", jersey);
}

void sortAndDisplay(player *ptr, int size){// Sort and display top 3 players

    int sort;
    printf("\nSort by:\n1. Max Runs\n2. Min Runs\n3. Max Wickets\n4. Min Wickets\nEnter choice: ");
    scanf("%d", &sort);

    player temp;
    for (int i = 0; i < size - 1; i++) 
	{
        for (int j = i + 1; j < size; j++)
		
		 {
            int flag = 0;

            if (sort == 1 && ptr[i].run < ptr[j].run)
			 	flag = 1;
            else if (sort == 2 && ptr[i].run > ptr[j].run)
				 flag = 1;
            else if (sort == 3 && ptr[i].wickets < ptr[j].wickets) 
				flag = 1;
            else if (sort == 4 && ptr[i].wickets > ptr[j].wickets)
			 	flag = 1;

            if (flag) 
			{
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }

    int top;
    if (size < 3)
        top = size;
    else 
        top = 3;

    printf("\n--- Top %d Players ---\n", top);
    for (int i = 0; i < top; i++) 
	{
        printf("\nPlayer %d Details:\n", i + 1);
        printf("Name           : %s\n", ptr[i].name);
        printf("Jersey Number  : %d\n", ptr[i].jersey_number);
        printf("Runs           : %d\n", ptr[i].run);
        printf("Matches Played : %d\n", ptr[i].matches_played);
        printf("Wickets        : %d\n", ptr[i].wickets);
        printf("Team Name : %s\n",ptr[i].team);
    }
}

void TeamDisplay(player *ptr, int size, char team_name[]) {//team Display

    int found = 0;
    printf("\n--- Players from team \"%s\" ---\n", team_name);
    for (int i = 0; i < size; i++) {
        if (strcmp(ptr[i].team, team_name) == 0) {
            printf("\nPlayer Name       : %s\n", ptr[i].name);
            printf("Jersey Number     : %d\n", ptr[i].jersey_number);
            printf("Runs              : %d\n", ptr[i].run);
            printf("Matches Played    : %d\n", ptr[i].matches_played);
            printf("Wickets Taken     : %d\n", ptr[i].wickets);
            found = 1;
        }
    }
    if (!found)
        printf("No players found for team \"%s\".\n", team_name);
}
