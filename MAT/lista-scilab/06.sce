matriz = []
disp('Preencha uma matriz 5x5');
for i=1:5
    for j=1:5
     matriz(i,j) = input('Digite o valor: '+ string(i) + ':' + + string(j)+" ");
    end
end
[l, c] = size(matriz)
soma = sum(matriz);
media = soma/(l*c);
maior = max(matriz);
menor = min(matriz);

disp("Media do matriz "+ string(media));
disp("Soma do matriz "+ string(soma));
disp("Maior n do matriz "+ string(maior));
disp("menor n do matriz "+ string(menor));
