matriz = []
disp('Preencha uma matriz 5x5');
for i=1:5
    for j=1:5
     matriz(i,j) = input('Digite o valor: '+ string(i) + ':' + + string(j)+" ");
    end
end
disp('O determinate da matriz informada é: ");
disp(det(matriz));
