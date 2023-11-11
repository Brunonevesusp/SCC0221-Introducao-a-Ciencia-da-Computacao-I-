def calcular_posicao(N, P):
    L = N * N
    if P > L:
        print(f"O astronauta já saiu em missão há {P - L} chamadas.")
    else:
        i, j = 0, 0
        deslocamentos = 0
        direcao = 0
        limite_direita = N -1
        limite_esquerda = N -1
        limite_superior = N-1
        limite_inferior = N -1

        while deslocamentos < L:
            if deslocamentos == P:
                print(f"O astronauta está na posição: {i} {j}\nAinda faltam {L - P} chamadas para a sua vez!")
                break

            if direcao == 0:  # Mover para a direita
                if j < limite_direita:
                    j += 1
                else:
                    direcao = 1
                    limite_superior += 1
                    i += 1

            elif direcao == 1:  # Mover para baixo
                if i < limite_inferior:
                    i += 1
                else:
                    direcao = 2
                    limite_direita -= 1
                    j -= 1

            elif direcao == 2:  # Mover para a esquerda
                if j > limite_esquerda:
                    j -= 1
                else:
                    direcao = 3
                    limite_inferior -= 1
                    i -= 1

            elif direcao == 3:  # Mover para cima
                if i > limite_superior:
                    i -= 1
                else:
                    direcao = 0
                    limite_esquerda += 1
                    j += 1

            deslocamentos += 1

N, P = map(int, input().split())
calcular_posicao(N, P)
