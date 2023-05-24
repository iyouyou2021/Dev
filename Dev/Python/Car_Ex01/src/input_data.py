from car import Car

class InputData:
    def __init__(self, car: Car):
        self.car = car

    def input_data(self):
        print("//------------------------------------------------------------//")
        print("     Veuillez entrer les caracteristiques de la voiture :")
        print("//------------------------------------------------------------//\n\n\n")

        self.car.year = int(input("Entrez l'annee de fabrication : "))

        self.car.horse_power = int(input("Entrez la puissance en chevaux : "))

        while True:
            self.car.doors = int(input("Entrez le nombre de portes : "))
            if self.car.doors in [2, 3, 4, 5]:
                break
            else:
                print("Erreur ! Le nombre de portes est incorrect. Veuillez reessayer.")

        self.car.seats = int(input("Entrez le nombre de sieges : "))

        self.car.mileage = int(input("Entrez le kilometrage : "))

        self.car.engine_size = float(input("Entrez la taille du moteur (litres) : "))

        self.car.fuel_economy = float(input("Entrez la consommation de carburant (litres/100km) : "))

        self.car.make = input("Entrez la marque de la voiture : ")

        self.car.model = input("Entrez le modele de la voiture : ")

        self.car.color = input("Entrez la couleur de la voiture : ")

        while True:
            trans_choice = int(input("Entrez le type de transmission :\n1 pour manuel\n2 pour automatique\n Choix : "))
            if trans_choice == 1:
                self.car.transmission = "manuel"
                break
            elif trans_choice == 2:
                self.car.transmission = "automatique"
                break
            else:
                print("Erreur ! Veuillez entrer 1 pour manuel ou 2 pour automatique.")

        self.car.fuel_type = input("Entrez le type de carburant (essence, diesel, electrique) : ")

        if self.car.mileage > 100:
            self.car.condition = "occasion"
        else:
            self.car.condition = "neuve"
        print("\n\n")
        
