#ifndef TASK_H
#define TASK_H

#define MAX_TASKS 20

typedef struct {
    char description[50];
    int completed; 
} Task;

void addTask(Task tasks[], int *taskCount);
void displayTasks(Task tasks[], int taskCount);
void markTaskAsCompleted(Task tasks[], int taskCount);

#endif
