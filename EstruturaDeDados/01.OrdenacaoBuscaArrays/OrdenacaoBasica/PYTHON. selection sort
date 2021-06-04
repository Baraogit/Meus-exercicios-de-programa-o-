def selection_sort(lista):

    for i in range(len(lista)):
        menor = i
        for j in range(i+1, len(lista)):
            if(lista[menor] > lista[j]):
                menor = j
        if(i != menor):
            lista[i], lista[menor] = lista[menor], lista[i]

###Main###
lista = [5 , 3 , 2, 1, 4]
selection_sort(lista)
print(lista)
