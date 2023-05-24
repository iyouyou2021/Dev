class Menu:
    def show_menu(self):
        print("\nMENU :")
        print("1. Ajouter une tâche")
        print("2. Afficher les tâches")
        print("3. Marquer une tâche comme terminée")
        print("4. Quitter l'application")

        return input("Choisissez une option : ")

    def get_user_input(self, prompt):
        return input(prompt)

    def display_tasks(self, tasks):
        print("\nTÂCHES :")
        for i, task in enumerate(tasks, start=1):
            status = "Terminée" if task["completed"] else "En cours"
            print(f"{i}. {task['description']} ({status})")

    def display_message(self, message):
        print(message)
