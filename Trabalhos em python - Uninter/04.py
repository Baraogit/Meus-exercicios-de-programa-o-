from operator import itemgetter

contato_dict = {}  # irá armazenar um contato
agenda_com_contatos_lista = []  # irá armazenar os contatos
agenda_com_contatos_maior_de_18_lista = [] #irá armazenar os contatos maiores de 18 anos
agenda_com_contatos_menor_de_18_lista = [] #irá armazenar os contatos menores de 18 anos
while True:
    contato_dict['nome'] = input('Informe o nome do contato: ')  # pede para o usuário digitar um nome
    if contato_dict['nome'] == '':  # se o usuário não digitar nada e der enter
        break  # sai do laço
    else:
        contato_dict['idade'] = int(input('Informe a idade: '))
        contato_dict['telefone'] = int(input('Informe o telefone: '))
        agenda_com_contatos_lista.append(contato_dict.copy())#todos os contatos são armazenados nessa lista
        if (contato_dict['idade'] >= 18):# se contato for maior ou igual de 18 anos
            agenda_com_contatos_maior_de_18_lista.append(contato_dict.copy())# o contato é copiado para uma lista
        if (contato_dict['idade'] < 18):# se contato for menor de 18 anos
            agenda_com_contatos_menor_de_18_lista.append(contato_dict.copy())# o contato é copiado para uma outra lista

#ordena as listas com contatos, pelo nome
agenda_com_contatos_lista_ordenada = sorted(agenda_com_contatos_lista, key=itemgetter('nome'))  
agenda_com_contatos_maior_de_18_lista_ordenada = sorted(agenda_com_contatos_maior_de_18_lista, key=itemgetter('nome'))
agenda_com_contatos_menor_de_18_lista_ordenada = sorted(agenda_com_contatos_menor_de_18_lista, key=itemgetter('nome'))

print('Lista de contatos:')
for i in agenda_com_contatos_lista_ordenada:#imprime a lista de contatos em ordem alfabética pelo nome
    print(i)
list.remove(agenda_com_contatos_lista_ordenada)# remove a lista 
list.remove(agenda_com_contatos_lista) # remove a lista 

print('Contatos maiores de 18 anos')#imprime os contatos maiores ou iguais a 18 anos
for i in agenda_com_contatos_maior_de_18_lista_ordenada:
    print(i)
print('Contatos menores de 18 anos')#imprime os contatos menores de 18 anos
for i in agenda_com_contatos_menor_de_18_lista_ordenada:
    print(i)

----------------------------------------------------------------------------------------------------------
erro!!
from operator import itemgetter


agenda_com_contatos_lista = []
while True:
    nome_contato = input('Informe o nome do contato: ')
    if nome_contato == '':
        break
    else:
        contatos_dict = {nome_contato: []}
        contatos_dict[nome_contato].append(int(input('Informe a idade: ')))
        contatos_dict[nome_contato].append(int(input('Informe o telefone: ')))
        agenda_com_contatos_lista.append(contatos_dict.copy())

lista = sorted(agenda_com_contatos_lista, key=itemgetter(nome_contato))
print(lista)




