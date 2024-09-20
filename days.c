// Name: Michael Marotich
// user: mjmaroti
// Date 9/17/2024

#include <stdio.h>

int main()
{

        // TODO2: define variables for user input
        int year;
        int month;
        int day;
        char *final;
        // TODO3: define all the variables used in Zella's algorithm: Y, y, c, d, m, w
        int y;
        int c;
        int d;
        int m;
        int w;
        int Y;
        //
        // TODO4: prompt user to enter a date in the format of year/month/day
        printf("Enter a day using the format YYYY/MM/DD. I will tell you what day of the week it is.\n");
        // TODO5: Read the year, month and day.
        // Hint for debug: call printf to print year, month and day to make sure they have been read correctly
        scanf("%d/%d/%d", &year, &month, &day);
        //printf("year %d\n", year);
        //printf("month %d\n", month);
        //printf("day %d\n", day);
        // TODO6: assign value to variable Y according the rule in Zeller's algorithm
        // Hint: Use if or if-else statement
        // Hint for debug: call printf to print the value of Y.
        Y = year;
        if (month <= 2)
        {
        Y = year - 1;
        }
        //printf("Y is now %d\n", Y);
        // TODO7: assign value to variable y according the rule in Zeller's algorithm
        // Hint: use operator %
        // Hint for debug: call printf to print the value of y.
        y = Y%100;
        //printf("y is now %d\n", y);
        // TODO8: assign value to variable c according the rule in Zeller's algorithm
        // Hint: use operator /
        // Hint for debug: call printf to print the value of c.
        c= Y/100;
        //printf("c is now %d\n", c);
        // TODO9: assign value to variable d according the rule in Zeller's algorithm
        // Hint for debug: call printf to print the value of d.
        d = day;
        //printf("d is now %d\n", d);
        // TODO10: assign value to variable m according the rule in Zeller's algorithm
        // Hint: use if or if-else statement
        // Hint for debug: call printf to print the value of m.
        m = month;
        if (month <= 2)
        {
        m = m+12;
        }
        //printf("m is now %d\n", m);
        //Now I have everything for zellers algorithm
        w = ((13*(m+1)/5)+(y/4)+(c/4)+d+y-2*c)%7;
        //printf("w is now %d\n", w);
        // TODO11: assign value to variable w according the rule in Zeller's algorithm
        // Hint: The integer division gives the floor value already. For example 19/4 will give you 4.
        // Hint: mod is same as oper
        // Hint for debug: call printf to print the value of w.
        switch(w)
        {
                case 0:
                        final = "Saturday";
                        break;
                case 1:
                        final = "Sunday";
                        break;
                case 2:
                        final = "Monday";
                        break;
                case 3:
                        final = "Tuesday";
                        break;
                case 4:
                        final = "Wednesday";
                        break;
                case 5:
                        final = "Thursday";
                        break;
                case 6:
                       final = "Friday";
                        break;
        }
        // TODO12: print Monday, or Tuesday, ... or Sunday based on w's value according the rule in
        // Zeller's algorithm
        // Hint: use if or switch statement.
        printf("The day of the week on the date you entered was %s.\n", final);
        return 0;
}
