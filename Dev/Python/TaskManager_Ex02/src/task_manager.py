from task_list import TaskList
from menu import Menu

class TaskManager:
    def __init__(self):
        self.task_list = TaskList()
        self.menu = Menu()

    def run(self):
        while True:
            choice = self.menu.show_menu()

            if choice == "1":
                description = self.menu.get_user_input("Entrez la description de la tâche : ")
                self.task_list.add_task(description)
                self.menu.display_message("Tâche ajoutée avec succès !")

            elif choice == "2":
                self.menu.display_tasks(self.task_list.get_tasks())

            elif choice == "3":
                index = self.menu.get_user_input("Entrez le numéro de la tâche terminée : ")
                success = self.task_list.mark_task_completed(index)
                if success:
                    self.menu.display_message("Tâche marquée comme terminée avec succès !")
                else:
                    self.menu.display_message("Numéro de tâche invalide.")

            elif choice == "4":
                self.menu.display_message("Au revoir !")
                break

            else:
                self.menu.display_message("Option invalide. Veuillez réessayer.")
