quantidade_alunos = int(input("Digite a quantidade de alunos que você quer cadastrar as notas: "))#usuário digita a qto de alunos
todos_boletins_lista = []#lista que servirá para guardar todos os boletins dos alunos, armazenados no dicionário boletim_aluno
media_notas_lista = []#guardará a média das notas de cada aluno

# esse laço tem a função de captar os dados e guardá-los em um dicionário, que logo serão copiados e armazenados em uma lista
for i in range(quantidade_alunos):#o número de loops será definido pela quantidade de alunos que o usuário quer cadastrar
    aluno = input('Nome do aluno: ')#informa o nome do aluno para variável aluno
    boletim_aluno_dicionario = {aluno: []}#essa variável aluno servirá como chave, tendo como o seu conteúdo 4 notas
    nota1 = float(input('Primeira nota: '))#primeiro conteúdo
    nota2 = float(input('Segunda nota: '))#segundo conteúdo
    nota3 = float(input('Terceira nota: '))#terceiro conteúdo
    nota4 = float(input('Quarta nota: '))#quarto conteúdo
    media_notas_lista.append((nota1 + nota2 + nota3 + nota4) / 4)#calcula a média das notas e armazena na lista media_notas
    boletim_aluno_dicionario[aluno].append(nota1)#primeiro conteúdo é acrescentado na lista da chave aluno
    boletim_aluno_dicionario[aluno].append(nota2)#segundo conteúdo é acrescentado na lista da chave aluno
    boletim_aluno_dicionario[aluno].append(nota3)#terceiro conteúdo é acrescentado na lista da chave aluno
    boletim_aluno_dicionario[aluno].append(nota4)#quarto conteúdo é acrescentado na lista da chave aluno
    todos_boletins_lista.append(boletim_aluno_dicionario.copy())#dicionário boletim_aluno nesse loop teus seus dados copiados e acrescentados
                                               #para dentro da lista todos_boletins
print('\n\n')
print('Notas dos alunos')
print('-' * 30)
for i in range(quantidade_alunos):#imprime os dados armazenados na lista todos_boletins
    if media_notas_lista[i] >= 7.0: # se média das notas for igual ou maior que 7.0
        print('{} - {}'.format(todos_boletins_lista[i], 'Aprovado'))#imprime o nome do aluno, suas notas e a mensagem de aprovado
    else:# se for menor que 7.0
        print('{} - {}'.format(todos_boletins_lista[i], 'Reprovado'))#imprime o nome do aluno, suas notas e a mensagem de reprovado
