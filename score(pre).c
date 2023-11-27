#include <stdio.h>
#include <conio.h> // This header file includes getch and clrscr functions

#define MAX_OVERS 50
#define MAX_BATSMEN 11

void displayScoreTable(int overWiseScores[MAX_OVERS], int overs)
{
    printf("\n Over-wise Score Table: \n");
    printf("-------------------------------\n");
    printf("||  Over  ||  Score  ||  Total  ||\n");
    printf("-------------------------------\n");

    int totalScore = 0;

    for (int i = 0; i < overs; ++i)
    {
        totalScore += overWiseScores[i];
        printf("|   %d   |   %3d    |   %3d   |\n", i + 1, overWiseScores[i], totalScore);
    }

    printf("-------------------------------\n");
}

int main()
{
    int team_A_Score = 0;
    int wickets = 0;
    int overs = 0;
    int choice;
    int runs;

    int overWiseScores[MAX_OVERS] = {0};
    int batsmenScores[MAX_BATSMEN] = {0};

    while (overs < MAX_OVERS && wickets < 10)
    {
        clrscr(); // Clear the screen

        printf("\nCricket Score Display\n");
        printf("1. Run Scored\n");
        printf("2. Wicket Fell\n");
        printf("3. Display Score\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter runs scored in this over: ");
            scanf("%d", &runs);

            overWiseScores[overs] = runs;
            team_A_Score += runs;
            overs += 1;
            break;

        case 2:
            wickets += 1;
            overs += 1;
            break;

        case 3:
            printf("Team A Score: %d/%d in %d overs\n", team_A_Score, wickets, overs);
            displayScoreTable(overWiseScores, overs);
            break;

        case 4:
            printf("Innings over. Team A scored %d for %d wickets in %d overs.\n", team_A_Score, wickets, overs);
            displayScoreTable(overWiseScores, overs);
            getch(); // Wait for a key press before exiting
            return 0;

        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    printf("Innings over. Team A scored %d for %d wickets in %d overs.\n", team_A_Score, wickets, overs);
    displayScoreTable(overWiseScores, overs);
    getch(); // Wait for a key press before exiting

    return 0;
}
