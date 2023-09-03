class Pilha:
    def __init__(self):
        self.items = []

    def isVazia(self):
        return len(self.items) == 0

    def push(self, item):
        self.items.append(item)

    def pop(self):
        if self.isVazia():
            return None
        return self.items.pop()


pilha = Pilha()


print("Inserindo 'A'")
pilha.push("A")
print("Inserindo 'B'")
pilha.push("B")
print("Inserindo 'C'")
pilha.push("C")
print("Inserindo 'D'")
pilha.push("D")


print(pilha.items)

print("Removendo o topo")
print(pilha.pop())
print("Removendo o topo")
print(pilha.pop())
print("Removendo o topo")
print(pilha.pop())


print("Pilha com os elementos restantes.")
if pilha.isVazia():
    print("Pilha vazia")
else:
    print(pilha.items)
