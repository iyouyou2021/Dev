class TaskList:
    def __init__(self):
        self.tasks = []

    def add_task(self, description):
        self.tasks.append({"description": description, "completed": False})

    def get_tasks(self):
        return self.tasks

    def mark_task_completed(self, index):
        try:
            index = int(index)
            if 1 <= index <= len(self.tasks):
                task = self.tasks[index - 1]
                task["completed"] = True
                return True
            else:
                return False
        except ValueError:
            return False
