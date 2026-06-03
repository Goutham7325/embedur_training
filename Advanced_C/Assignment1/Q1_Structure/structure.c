#include <stdio.h>
#include <string.h>

#define DAYS 7
#define MAX_TASKS 3
#define MAX_TASK_LEN 100

// Structure for a day
struct Day
{
    char dayName[20];
    char tasks[MAX_TASKS][MAX_TASK_LEN];
    int taskCount;
};

int main()
{
    struct Day week[DAYS] = {
        {"Monday", {}, 0},
        {"Tuesday", {}, 0},
        {"Wednesday", {}, 0},
        {"Thursday", {}, 0},
        {"Friday", {}, 0},
        {"Saturday", {}, 0},
        {"Sunday", {}, 0}
    };

    int dayChoice, numTasks;

    printf("Days of the Week:\n");
    for (int i = 0; i < DAYS; i++)
    {
        printf("%d. %s\n", i + 1, week[i].dayName);
    }

    printf("\nEnter day number (1-7) to add tasks: ");
    scanf("%d", &dayChoice);
    getchar(); // consume newline

    if (dayChoice < 1 || dayChoice > 7)
    {
        printf("Invalid day selection.\n");
        return 1;
    }

    printf("Enter number of tasks (max %d): ", MAX_TASKS);
    scanf("%d", &numTasks);
    getchar();

    if (numTasks > MAX_TASKS)
        numTasks = MAX_TASKS;

    week[dayChoice - 1].taskCount = numTasks;

    for (int i = 0; i < numTasks; i++)
    {
        printf("Enter task %d: ", i + 1);
        fgets(week[dayChoice - 1].tasks[i], MAX_TASK_LEN, stdin);

        // Remove trailing newline
        week[dayChoice - 1].tasks[i][strcspn(
            week[dayChoice - 1].tasks[i], "\n")] = '\0';
    }

    printf("\n===== Weekly Calendar =====\n");

    for (int i = 0; i < DAYS; i++)
    {
        printf("\n%s:\n", week[i].dayName);

        if (week[i].taskCount == 0)
        {
            printf("  No tasks.\n");
        }
        else
        {
            for (int j = 0; j < week[i].taskCount; j++)
            {
                printf("  %d. %s\n", j + 1,
                       week[i].tasks[j]);
            }
        }
    }

    return 0;
}
