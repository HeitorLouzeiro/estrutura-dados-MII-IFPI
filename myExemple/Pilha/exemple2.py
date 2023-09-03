class ElementoPilha():
    def __init__(self, valorInicial):
        # Cria um elemento de pilha
        # contendo o valor empilhado
        self.valor = valorInicial
        # e a referência para o elemento abaixo dele na pilha
        self.anterior = None


class Pilha():
    def __init__(self):
        # Cria uma pilha vazia
        self.elementoPilha = None

    def empilha(self, valor):
        # Cria um elemento para a pilha
        novoElementoPilha = ElementoPilha(valorInicial=valor)

        # Se a pilha já tiver um elemento, coloque ele como um
        # elemento anterior ao novo elemento
        if self.elementoPilha is not None:
            novoElementoPilha.anterior = self.elementoPilha

        # Coloque o novo elemento no topo da pilha
        self.elementoPilha = novoElementoPilha

    def desempilha(self):
        # Se a pilha estiver vazia, não retorna nada (no caso, retorna None)
        if self.elementoPilha is None:
            return None

        # Se não estiver vazia, tira o elemento do topo
        elementoPilhaRemovido = self.elementoPilha

        # E substitui o elemento do topo pelo anterior
        self.elementoPilha = elementoPilhaRemovido.anterior
        return elementoPilhaRemovido.valor


# Cria uma pilha de teste
pilhaTeste = Pilha()

# Tenta desempilhar pilha vazia
print(pilhaTeste.desempilha())  # imprimirá: None

# Empilha 3 itens
pilhaTeste.empilha(1)
pilhaTeste.empilha(2)
pilhaTeste.empilha(3)

# Desempilha 4 itens
print(pilhaTeste.desempilha())  # imprimirá: 3
pilhaTeste.empilha(4)
print(pilhaTeste.desempilha())  # imprimirá: 4
print(pilhaTeste.desempilha())  # imprimirá: 2
print(pilhaTeste.desempilha())  # imprimirá: 1
print(pilhaTeste.desempilha())  # imprimirá: None
pilhaTeste.empilha(1)
print(pilhaTeste.desempilha())  # imprimirá: 1
