def pesquisa_binaria(lista, numero):
    baixo = 0
    alto = len(lista) - 1

    while (baixo <= alto):
        meio = (baixo + alto) // 2
        chute = lista[meio]
        if chute == numero:
            return meio
        if chute > numero:
            alto = meio - 1
        else:
            baixo = meio + 1
    return none

#programa principal
lista = [1,2,3,4,5,6,7,8,9,10]

numero = int(input("Digite um valor para ser pesquisado: "))

print("{} está na posicão {} do lista".format(numero, pesquisa_binaria(lista, numero)))
