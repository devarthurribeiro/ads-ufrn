disp("Preencha um vetor de 10 elementos:");

for( i=1:10)
    vetor(i) = input("Digite o numero da posição "+ string(i) + ": ");    
end
soma = sum(vetor);
media = soma/10;
maior = max(vetor);
menor = min(vetor);
disp("Media do vetor "+ string(media));
disp("Soma do vetor "+ string(soma));
disp("Maior n do vetor "+ string(maior));
disp("menor n do vetor "+ string(menor));
