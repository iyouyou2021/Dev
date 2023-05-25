#include <stdio.h>
#include "task.h"

void addTask(Task tasks[], int *taskCount) {
    if (*taskCount < MAX_TASKS) {
        Task newTask;
        printf("Description de la tache : ");
        scanf(" %[^\n]", newTask.description);
        newTask.completed = 0; 
        tasks[*taskCount] = newTask;
        (*taskCount)++;
        printf("Tache ajoutee avec succes.\n");
    } else {
        printf("La liste des taches est pleine.\n");
    }
}

void displayTasks(Task tasks[], int taskCount) {
    if (taskCount > 0) {
        printf("\n===== LISTE DES TaCHES =====\n");
        for (int i = 0; i < taskCount; i++) {
            printf("%d. %s [%s]\n", i + 1, tasks[i].description, tasks[i].completed ? "Terminee" : "En cours");
        }
    } else {
        printf("Aucune tache a afficher.\n");
    }
}

void markTaskAsCompleted(Task tasks[], int taskCount) {
    if (taskCount > 0) {
        int taskIndex;
        printf("Entrez l'indice de la tache a marquer comme terminee : ");
        scanf("%d", &taskIndex);

        if (taskIndex >= 1 && taskIndex <= taskCount) {
            tasks[taskIndex - 1].completed = 1; 
            printf("Tache marquee comme terminee.\n");
        } else {
            printf("Indice de tache invalide.\n");
        }
    } else {
        printf("Aucune tache a marquer comme terminee.\n");
    }
}
