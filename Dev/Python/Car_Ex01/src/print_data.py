from car import Car

class PrintData:
    def __init__(self, car: Car):
        self.car = car

    def print_data(self):
        print("//------------------------------------------------------------//")
        print("     La voiture a les caracteristiques suivantes :")
        print("//------------------------------------------------------------//")
        print("Annee: {}".format(self.car.year))
        print("Puissance: {} ch".format(self.car.horse_power))
        print("Portes: {}".format(self.car.doors))
        print("Sieges: {}".format(self.car.seats))
        print("Kilometrage: {} km".format(self.car.mileage))
        print("Taille du moteur: {} L".format(self.car.engine_size))
        print("Consommation de carburant: {} L/100km".format(self.car.fuel_economy))
        print("Marque: {}".format(self.car.make))
        print("Modele: {}".format(self.car.model))
        print("Couleur: {}".format(self.car.color))
        print("Transmission: {}".format(self.car.transmission))
        print("Type de carburant: {}".format(self.car.fuel_type))
        print("Condition: {}".format(self.car.condition))
        print("//------------------------------------------------------------//\n\n")


