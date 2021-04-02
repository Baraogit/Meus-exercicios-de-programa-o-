def buscarMenorElemento(listaDesordenada):
    menor_elemento = listaDesordenada[0]
    menor_indice = 0
    for i in range(len(listaDesordenada)):
        if listaDesordenada[i] < menor_elemento:
            menor_elemento = listaDesordenada[i]
            menor_indice = i
    return menor_indice

def ordenacaoporSelecao(listaDesordenada):
    menor_indice = 0;
    listaOrdenada = []
    for i in range(len(listaDesordenada)):
        menor_indice = buscarMenorElemento(listaDesordenada)
        listaOrdenada.append(listaDesordenada.pop(menor_indice))
    return listaOrdenada

#programa principal
listaDesordenada = [2, 5, 9, 3, 10, 8, 7, 4, 6, 1]
print('Lista {}'.format(ordenacaoporSelecao(listaDesordenada)))

---------------------------------------------------------------------

list.pop([i])
Remove um item em uma dada posição na lista e o retorna. Se nenhum índice é especificado, a.pop() remove e devolve o último item da lista.
(Os colchetes ao redor do i na demonstração do método indica que o parâmetro é opcional, e não que é necessário escrever estes colchetes ao chamar o método. 
Você verá este tipo de notação frequentemente na Biblioteca de Referência Python.)
