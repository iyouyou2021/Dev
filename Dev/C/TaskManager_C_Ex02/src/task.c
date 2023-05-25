#include <stdio.h>
#include "task.h"

void addTask(Task tasks[], int *taskCount) {
    if (*taskCount < MAX_TASKS) {
        Task newTask;
        printf("Description de la tache : ");
        scanf(" %[^\n]", newTask.description);
        newTask.completed = 0; // Initialiser a false (0)

        int priorityChoice;
        printf("Priorite de la tache (0: LOW, 1: MEDIUM, 2: HIGH) : ");
        scanf("%d", &priorityChoice);
        newTask.priority = (Priority)priorityChoice;

        printf("Informations supplementaires (1: duree, 2: pourcentage) : ");
        int infoChoice;
        scanf("%d", &infoChoice);
        if (infoChoice == 1) {
            printf("Duree de la tache : ");
            scanf("%d", &newTask.info.duration);
        } else if (infoChoice == 2) {
            printf("Pourcentage de la tache : ");
            scanf("%f", &newTask.info.percentage);
        }

        printf("Note pour la tache : ");
        scanf(" %[^\n]", newTask.note);

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
            printf("%d. %s [Priorite: %d] ", i + 1, tasks[i].description, tasks[i].priority);

            if (tasks[i].info.duration != 0) {
                printf("[Duree: %d] ", tasks[i].info.duration);
            } else if (tasks[i].info.percentage != 0) {
                printf("[Pourcentage: %.2f%%] ", tasks[i].info.percentage);
            }

            printf("[Note: %s] [%s]\n", tasks[i].note, tasks[i].completed ? "Terminee" : "En cours");
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
            tasks[taskIndex - 1].completed = 1; // Marquer comme true (1)
            printf("Tache marquee comme terminee.\n");
        } else {
            printf("Indice de tache invalide.\n");
        }
    } else {
        printf("Aucune tache a marquer comme terminee.\n");
    }
}
