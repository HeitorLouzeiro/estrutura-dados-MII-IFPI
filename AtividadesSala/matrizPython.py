""" Em Python (ou na linguagem que preferir) criar uma matriz 3x3 
que receba no primeiro espaço de cada linha o nome do departamento 
e nas duas outras o nome do diretor e do vice desse departamento.
Para cada get que nos laços, colocar uma mensagem para o usuário. """

# Criação da matriz
matriz = []

# Laço para inserir os dados na matriz
for i in range(3):
    linha = []
    for j in range(3):
        if j == 0:
            linha.append(input("Digite o nome do departamento: "))
        elif j == 1:
            linha.append(input("Digite o nome do diretor: "))
        else:
            linha.append(input("Digite o nome do vice-diretor: "))
    matriz.append(linha)
print(matriz)
