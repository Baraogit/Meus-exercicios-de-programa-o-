def validarEntradaDados(): #função para validar dado informado pelo usuário
    while True:
        try: # uma tentativa é feita: usuário informa o dado
            codigo_produto_local = int(input('Digite o código do produto: '))
        except ValueError:# se o dado não for do tipo inteiro, lhe é informado o erro e lhe dá um nova tentativa
            print('Valor inválido. Tente novamente, digitando um valor sem letra ou numero com ponto')
        else: #digitando um numero do tipo inteiro, um novo teste será feito
            if (codigo_produto_local < 10000) or (codigo_produto_local > 30000):# se o valor digitado estiver fora do intervalo
                print('Você digitou fora do intervalo de 10000 à 30000. Digite novamente!!')#informa o erro
                continue #e volta para o inicio do laço, para uma nova tentativa
            else: # se não, a função retorna para o programa principal o dado digitado pelo o usuário
                return codigo_produto_local

def calcularDigitoVerificador(codigo_produto_local):
    armazena_digitos_lista_local = [] #lista para armazenar os digitos retirados a partir do valor de codigoProduto
    #esse laço tem como função armazenar os digitos(algarismos) de codigoProduto em uma lista
    for i in range(5):
        digito = codigo_produto_local % 10 #reserva o resto da divisão a cada loop na variavel digito, a partir de codigoProduto
        armazena_digitos_lista_local.insert(i, digito)#esse digito é armazenado em uma lista, um a cada loop
        codigo_produto_local //= 10 #codigoProduto recebe um novo valor = codigoProduto menos o seu ultimo algarismo

    armazena_digitos_lista_local.reverse() #reverte a lista para ficar na ordem correta, mesma ordem de codigoProduto

    digito_verificador_local = 0 #variavel onde será armazenada o valor do digito verificador, depois de passar por calculos
    peso = 2 #variavel auxiliar para calcular o valor parcial do DV

    #esse laço tem como função calcular o valor parcial do digito verificador
    for i in range(5):
    # cada item(digito) da lista é multiplicado pela variavel peso, o resultado acumula-se na variavel digitoVerificador
        digito_verificador_local += (armazena_digitos_lista_local[i] * peso)
        peso += 1 #a cada loop, peso cresce +1

    digito_verificador_local = digito_verificador_local % 7 #o valor parcial de digitoVerificador recebe o resto dele dividido por 7
    return digito_verificador_local #o valor final de digitoVerificador retorna para o programa principal

#programa principal

#chamada da função para entrada e validação de dados
codigo_produto_global = validarEntradaDados() #dado verificado retorna e é armazenado na variavel codigoProduto

#chamada da função para calcular o digitado verificador, com codigoProduto passado como argumento para parâmentro da função
print('Codigo produto - dígito = {}-{}'.format(codigo_produto_global, calcularDigitoVerificador(codigo_produto_global)))
#retorna o valor final de dígito verificador e imprime na tela junto com o codigo do produto
