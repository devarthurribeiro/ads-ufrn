a = input("Digite o coeficiente a :");
b = input("Digite o coeficiente b :");
c = input("Digite o coeficiente c :");

if (a==0) & (b==0) // Equacao degenerada.
    printf("Equacao degenerada\n");
end

if (a==0) & (b<>0) // Equação do 1o grau
   printf("Raiz única em %g.\n",-c/b);
end

if (a<>0) & (c==0) // Equacao do 2o grau com raizes reais em 0 e -b/a
    x = -b\a;
    
    printf("Raiz1 = 0\n");
    printf("Raiz2 = %g\n",x);
end

if (a<>0) & (c<>0) // Equacao do 2o grau 
   disc = b*b - 4*a*c; // Cálculo do discriminante
  
  if disc >= 0 // Teste do discriminante
     x1 = -b/(2*a) + sqrt(disc)/(2*a);
     x2 = -b/(2*a) - sqrt(disc)/(2*a);
     
     printf("Raiz1 = %g\n",x1); 
     printf("Raiz2 = %g\n",x2);
  else

     // Raizes complexas
     pr = -b/(2*a);
     pi = sqrt(abs(disc))/(2*a);
     
     printf("Parte Real = %g\n",pr);
     printf("Parte Imaginária = %g\n",pi);
  end
end
