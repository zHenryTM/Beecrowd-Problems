unidades = ["", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"]
dezenas = ["", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"]
centenas = ["", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"]

numero = int(input())

centena = int(numero / 100)

numero = int(numero % 100)

dezena = int(numero / 10)

numero = int(numero % 10)

unidade = int(numero)

print(f"{centenas[centena]}{dezenas[dezena]}{unidades[unidade]}")
