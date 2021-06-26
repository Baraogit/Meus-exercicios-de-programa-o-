def pesquisa_binaria(lista, numero):
    comeco = 0
    final = len(lista) - 1
    flag = False

    while (comeco <= final) and (flag == False):
        meio = (comeco + final) // 2
        if numero == lista[meio]:
            flag = True
        elif numero < lista[meio]:
                final = meio - 1
        else:
            comeco = meio + 1
    if flag == True:
        print("{} esta na posicao {}" .format(numero, meio))
    else:
        print("{} não foi encontrado" .format(numero))

#programa principal
lista = [1,2,3,4,5,6,7,8,9,10]

numero = int(input("Digite um valor para ser pesquisado: "))

pesquisa_binaria(lista, numero)
