
int main(void)
{
//get scores from different users
	int score1 = get_int("Score 1: ");
	int score2 = get_int("Score 2: ");
	int score3 = get_int("Score 3: ");
// generate the first bar
	printf("Score1: ");
for (int i = 0; i < score1; i++)
{
	printf("#");
}
printf("\n");

//generate the second bar
printf("Score2: ");
for (int i = 0; i < score2; i++)
{
	printf("#");
}
printf("\n");
 // generate the third bar
printf("Score3: ");
for (int i = 0; i < score3; i++)
{
printf("#");
}
