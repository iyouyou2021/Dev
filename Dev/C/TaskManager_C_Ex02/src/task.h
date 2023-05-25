#ifndef TASK_H
#define TASK_H

#define MAX_TASKS 20
#define MAX_NOTES 10

typedef enum {
    LOW,
    MEDIUM,
    HIGH
} Priority;

typedef union {
    int duration;
    float percentage;
} TaskInfo;

typedef struct {
    char description[50];
    int completed;
    Priority priority;
    TaskInfo info;
    char note[100];
} Task;

void addTask(Task tasks[], int *taskCount);
void displayTasks(Task tasks[], int taskCount);
void markTaskAsCompleted(Task tasks[], int taskCount);

#endif
