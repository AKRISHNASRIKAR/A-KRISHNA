#include <stdio.h>

// Function to display the ball-wise scores in a table
void displayScoreTable(int ballWiseScores[], int overs)

 {
    printf("\n Ball-wise Score Table: \n");
    printf("-------------------------------\n");
    printf("||  Ball  ||  Score  ||  Total  ||\n");
    printf("-------------------------------\n");

    int totalScore = 0;

    for (int i = 0; i < overs * 6; ++i)
     {
        totalScore += ballWiseScores[i];
        printf("|   %2d   |   %2d    |   %3d   |\n", i + 1, ballWiseScores[i], totalScore);
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

    // Maximum number of balls in an innings (assuming 6 balls per over)
    int maxBalls = 50 * 6;

    // Array to store ball-wise scores
    int ballWiseScores[maxBalls];
   
    while (overs < 50 && wickets < 10)
     {
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
                printf("Enter runs scored in this ball: ");
                scanf("%d", &runs);

                // Store the run in the array
                ballWiseScores[overs * 6 + (overs % 6)] = runs;

                team_A_Score += runs;
                overs += 1; // error but still have to go ahead with this
            
                break;

            case 2:
                wickets += 1;
                overs += 1;
                break;

            case 3:
                printf("Team A Score: %d/%d in %d overs\n", team_A_Score, wickets, overs);
                displayScoreTable(ballWiseScores, overs);
                break;

            case 4:
                printf("Innings over. Team A scored %d for %d wickets in %d overs.\n", team_A_Score, wickets, overs);
                displayScoreTable(ballWiseScores, overs);
                return 0;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    printf("Innings over. Team A scored %d for %d wickets in %d overs.\n", team_A_Score, wickets, overs);
    displayScoreTable(ballWiseScores, overs);
    
    
    return 0;
}
