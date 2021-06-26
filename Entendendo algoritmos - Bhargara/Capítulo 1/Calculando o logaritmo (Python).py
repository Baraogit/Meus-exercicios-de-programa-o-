Em quantas tentativas precisamos para acertar o número desconhecido, usando pesquisa binária?

2 = base  n = logaritmando x = logaritmo

Em uma pesquisa de n números, a pesquisa binária precisa de log2n = x para retornar o número máximo de tentativas até acertar o número.
Em que x (o logaritmo) é o número de tentativas. 



def fatorarLogaritmando(logaritmando):
    cont = 1.0
    if (logaritmando == 1):
        return 0
    else:
        return cont + fatorarLogaritmando(logaritmando / 2)

#programa principal
logaritmando = int(input("Digite o valor do logaritmando: "))

print("Valor de logaritmando = {}" .format(fatorarLogaritmando(logaritmando)))
