def intersecao_retangulos(retan1, retan2):
    x1, y1, largura1, altura1 = retan1
    x2, y2, largura2, altura2 = retan2
    x_intersec = max(x1, x2)
    y_intersec = max(y1, y2)
    largura_ret = min(x1 + largura1, x2 + largura2) - x_intersec
    altura_ret = min(y1 + altura1, y2 + altura2) - y_intersec
    
    if largura_ret <= 0 or altura_ret <= 0:
        return None  
    else:
        return (x_intersec, y_intersec, largura_ret, altura_ret)

retan1 = list(map(int, inp  t().split()))
retan2 = list(map(int, input().split()))
intersecao = intersecao_retangulos(retan1, retan2)

if intersecao is None:
    print("MISS")
else:
    print("HIT:", intersecao[0], intersecao[1], intersecao[2], intersecao[3])
         