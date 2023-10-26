#include <stdio.h>

int main()
{
    int team_A_Score = 0;
    int wickets = 0;
    int overs = 0;
    int choice;
    int runs;
    while (overs < 50 && wickets < 10)
  {
	printf("Cricket Score Display\n");
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
                team_A_Score += runs;
                overs += 1;
                break;

            case 2:
                wickets += 1;
                overs += 1;
                break;

            case 3:
                printf("Team A Score: %d/%d in %d overs\n", team_A_Score, wickets, overs);
                break;

            case 4:
                printf("Innings over. Team A scored %d for %d wickets in %d overs.\n", team_A_Score, wickets, overs);
                return 0;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
    
    }
  } 

    printf("Innings over. Team A scored %d for %d wickets in %d overs.\n", team_A_Score, wickets, overs);
    

    return 0;
}
