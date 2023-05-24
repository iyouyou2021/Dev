from car import Car
from input_data import InputData
from print_data import PrintData

class CarApplication:
    def __init__(self):
        self.car = Car()
        self.input_data = InputData(self.car)
        self.print_data = PrintData(self.car)

    def run(self):
        self.input_data.input_data()
        self.print_data.print_data()

if __name__ == "__main__":
    app = CarApplication()
    app.run()

