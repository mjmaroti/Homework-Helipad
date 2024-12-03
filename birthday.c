#include <stdio.h>
#include <string.h>

// it was said to define them on the assignment page
#define MAX_STUDENTS 10
#define MAX_NAME_LEN 20
#define MAX_DATE_LEN 10

typedef struct {
        int id;
        char name[20];
        char birthday[10];
} Student_t;

int main(int argc, char *argv[]) {
        if (argc != 2) {
                printf("Usage: %s <filename>\n", argv[0]);
                return 1;
        }

        FILE *file = fopen(argv[1], "r");
        if (!file) {
                perror("Error opening file");
                return 1;
        }

        Student_t students[MAX_STUDENTS];
        int processed[MAX_STUDENTS] = {0};
        int studentCount = 0;

        // read that student data
        while (fscanf(file, "%d %s %s", &students[studentCount].id,
                                students[studentCount].name,
                                students[studentCount].birthday) == 3) {
                studentCount++;
                if (studentCount >= MAX_STUDENTS) break;
        }
        fclose(file);

        // process these birthdays
        for (int i = 0; i < studentCount; i++) {
                if (processed[i]) continue;

                printf("%s: ", students[i].birthday);
                for (int j = 0; j < studentCount; j++) {
                        if (strcmp(students[i].birthday, students[j].birthday) == 0) {
                                printf("%s(%d) ", students[j].name, students[j].id);
                                processed[j] = 1; // marking it as processed
                        }
                }
                printf("\n");
        }

        return 0;
}
