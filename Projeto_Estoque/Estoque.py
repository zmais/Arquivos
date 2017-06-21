import os
Codigo = []
Produtos = []
Quantidade = []
Valor = []
Total = 0.0
pos = 0
while True:
    #Ordenando
    for c2 in range(1, len(Codigo)):
        c3 = c2
        while c3 > 0 and Codigo[c3 - 1] > Codigo[c3]:
            temp = Codigo[c3]
            Codigo[c3] = Codigo[c3 - 1]
            Codigo[c3 - 1] = temp
            temp = Produtos[c3]
            Produtos[c3] = Produtos[c3 - 1]
            Produtos[c3 - 1] = temp
            temp = Quantidade[c3]
            Quantidade[c3] = Quantidade[c3 - 1]
            Quantidade[c3 - 1] = temp
            temp = Valor[c3]
            Valor[c3] = Valor[c3 - 1]
            Valor[c3 - 1] = temp
            c3 -= 1
    #Escolhendo a Opçao
    c1 = 0
    igual = False
    a = int(input("Selecione a opção :\n [1] Adicionar Produto\n [2] Remover Produto\n [3] Mostrar Produtos\n [4] Saida de Produto\n [5] Valor recebido no dia"))
    os.system("cls")
    #Comparando qual opçao e a escolhida
    if a == 1:
        c = int(input("\nDigite o codigo: "))
        for c1 in range(len(Codigo)):
            if c == Codigo[c1]:
                igual = True
                pos = c1
            else:
                igual = False
        if (igual ==  True):
            q = int(input("\nDigite a quantidade a ser adicionada : "))
            Quantidade[pos] += q

        else:
            b = input("\nDigite o nome do produto: ")
            q = int(input("\nDigite a quantidade : "))
            preco = float(input("\nDigite o preço : "))

            Codigo += [c]
            Produtos += [b]
            Quantidade += [q]
            Valor += [preco]
        print("\n\nAdicionado com sucesso!")
    elif a == 2:
        c = int(input("Digite o codigo: "))
        for c1 in range(len(Codigo)):
            if c == Codigo[c1]:
                igual = True
                pos = c1
        if (igual == True):
            print("\nCodigo = %s" % Codigo[pos])
            print("\nProduto = %s" %Produtos[pos])
            print("\n\nDeletado com Sucesso!!")
            del(Codigo[pos] , Produtos[pos] , Quantidade[pos])
        else:
            print("\nCodigo invalido!")

    elif a == 3:
        print("|    Codigo      |      Produtos    |         Quantidade        |       Preço      |")
        for c1 in range(len(Codigo)):
            print(84*'_')
            print("      ",Codigo[c1] , "            "  , Produtos[c1] , "                "  , Quantidade[c1] , "               " , " R$  %.2f" %Valor[c1] , "     ")
            print(84 * '_')
    elif a == 4:
        c = int(input("\nDigite o codigo: "))
        for c1 in range(len(Codigo)):
            if c == Codigo[c1]:
                igual = True
                pos = c1
        if (igual == True):
            print("\nCodigo = %s" % Codigo[pos])
            print("\nProduto = %s" % Produtos[pos])
            saida = int(input("\nQuantidade de produtos vendidos : "))
            print("\nValor a pagar sera R$ %.2f" %(Valor[pos] * saida))
            confirmacao = int(input("\nConfirmar Venda :\n [1] Sim \n [2] Não\n"))
            if confirmacao == 1:
                Quantidade[pos] -= saida
                Total += Valor[pos] * saida
                print("\n\nOperação concluida!")
            else:
                print("\n\nOperação cancelada!")
        else:
            print("Codigo invalido!")
    elif a == 5:
        print("\nValor recebido hoje ate o momento e de : R$ %.2f" %Total)
    print("\n")
    input("Pressione <ENTER> para continuar")
    os.system("cls")
