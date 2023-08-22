import cs50
from cs50 import get_float
from math import floor

def main():

#Inicio
    while True:
        troco_devido = get_float("Troco Devido: ")
        if troco_devido >= 0:
            break
    centavos = int(troco_devido * 100)
    print(cash(centavos))


#Calculo
def cash(centavos):
    return centavos // 25 + (centavos %25) // 10 + (centavos %25 %10) // 5 + (centavos %25 %10 %5) // 1 + centavos %25 %10 %5 %1
    #Resultado
if __name__ == "__main__":
     main()