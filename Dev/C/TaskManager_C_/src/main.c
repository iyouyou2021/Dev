#include <stdio.h>
#include "task.h"

int main() {
    Task tasks[MAX_TASKS];
    int taskCount = 0;

    int choice;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Ajouter une tache\n");
        printf("2. Afficher les taches\n");
        printf("3. Marquer une tache comme terminee\n");
        printf("4. Quitter\n");
        printf("Choix : ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addTask(tasks, &taskCount);
                break;
            case 2:
                displayTasks(tasks, taskCount);
                break;
            case 3:
                markTaskAsCompleted(tasks, taskCount);
                break;
            case 4:
                printf("Merci d'avoir utilise l'application. Au revoir!\n");
                break;
            default:
                printf("Choix invalide.\n");
                break;
        }
    } while (choice != 4);

    return 0;
}
