/* name: Michael Marotich
 * username: mjmaroti@mtu.edu
 * Date:9/24/2024
 */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
        //Declare variables for questions and numbers
        int rand();
        int questions, correct, i, one, two, check, score, flip;
        char *operator;
        //ask this dude how many questions he wants
        printf("How many questions would you like? ");
        scanf("%d", &questions);
        //A counter is the only way I can imagine printing these questions i am also going to set some values
        // Seeding random number as well
        srand(time(NULL));
        correct = 0;
        i = 0;
        score = 0;
        while (i < questions)
        {
                // this rand function is giving me very large numbers
                // I am going to use a rand to decide a 0 or 1 and then set those to a plus or minus using an if
                flip = rand() % 2;
                if (flip == 1)
                {
                        operator = "+";
                }
                else
                {
                        operator = "-";
                }
                one = (rand() % 100) + 1;
                two = (rand() % 100) + 1;
                printf("%d %s %d = ", one, operator, two);
                scanf("%d", &check);
                i = i + 1;
                // this prints the correct amount of questions, but now I will need code to check IF they are right.
                if (flip == 1)
                {
                        correct = one + two;
                }
                else
                {
                        correct = one - two;
                }
                if (check == correct)
                {
                        score = score + 1;
                }
        }
        printf("You got %d/%d correct.\n", score, questions);
        return 0;
}
                //now check to see if it was correct

