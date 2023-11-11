# Função para verificar a interseção entre dois retângulos
def intersecao_retangulos(rect1, rect2):
    x1, y1, largura1, altura1 = rect1
    x2, y2, largura2, altura2 = rect2
    
    # Calcula as coordenadas dos vértices do retângulo de interseção
    x_intersecao = max(x1, x2)
    y_intersecao = max(y1, y2)
    largura_intersecao = min(x1 + largura1, x2 + largura2) - x_intersecao
    altura_intersecao = min(y1 + altura1, y2 + altura2) - y_intersecao
    
    if largura_intersecao <= 0 or altura_intersecao <= 0:
        return None  # Não há interseção
    else:
        return (x_intersecao, y_intersecao, largura_intersecao, altura_intersecao)

# Lê os dados dos dois retângulos da entrada
rect1 = list(map(int, input().split()))
rect2 = list(map(int, input().split()))

# Verifica a interseção entre os retângulos
intersecao = intersecao_retangulos(rect1, rect2)

# Imprime o resultado
if intersecao is None:
    print("MISS")
else:
    print("HIT:", intersecao[0], intersecao[1], intersecao[2], intersecao[3])
