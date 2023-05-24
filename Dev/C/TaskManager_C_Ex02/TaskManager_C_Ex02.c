#include <stdio.h>
#include <stdbool.h>

#define MAX_TASKS 20

typedef struct {
    char description[50];
    bool completed;
} Task;

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
            case 1: {
                
                if (taskCount < MAX_TASKS) {
                    Task newTask;
                    printf("Description de la tache : ");
                    scanf(" %[^\n]", newTask.description);
                    newTask.completed = false;
                    tasks[taskCount] = newTask;
                    taskCount++;
                    printf("Tache ajoutee avec succes.\n");
                } else {
                    printf("La liste des taches est pleine.\n");
                }
                break;
            }
            case 2: {
                
                if (taskCount > 0) {
                    printf("\n===== LISTE DES TaCHES =====\n");
                    for (int i = 0; i < taskCount; i++) {
                        printf("%d. %s [%s]\n", i+1, tasks[i].description, tasks[i].completed ? "Terminee" : "En cours");
                    }
                } else {
                    printf("Aucune tache e afficher.\n");
                }
                break;
            }
            case 3: {
                
                if (taskCount > 0) {
                    int taskIndex;
                    printf("Entrez l'indice de la tache e marquer comme terminee : ");
                    scanf("%d", &taskIndex);

                    if (taskIndex >= 1 && taskIndex <= taskCount) {
                        tasks[taskIndex-1].completed = true;
                        printf("Tache marquee comme terminee.\n");
                    } else {
                        printf("Indice de tache invalide.\n");
                    }
                } else {
                    printf("Aucune tache e marquer comme terminee.\n");
                }
                break;
            }
            case 4: {
                
                printf("Merci d'avoir utilise l'application. Au revoir!\n");
                break;
            }
            default:
                printf("Choix invalide.\n");
                break;
        }
    } while (choice != 4);

    return 0;
}
