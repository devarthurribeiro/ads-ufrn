a = input("Informe o coeficiente a :");
b = input("Informe o coeficiente b :");
c = input("Informe o coeficiente c :");

if (a==0) & (b==0)
    printf("Equacao degenerada\n");
end

if (a==0) & (b<>0)
   printf("Raiz única em %g.\n",-c/b);
end

if (a<>0) & (c==0)
    x = -b\a;
    
    printf("Raiz 1 = 0\n");
    printf("Raiz 2 = %g\n",x);
end

if (a<>0) & (c<>0) 
   d = b*b - 4*a*c; 
  
  if disc >= 0
     x1 = -b/(2*a) + sqrt(d)/(2*a);
     x2 = -b/(2*a) - sqrt(d)/(2*a);
     
     printf("Raiz1 = %g\n",x1); 
     printf("Raiz2 = %g\n",x2);
  else
     pr = -b/(2*a);
     pi = sqrt(abs(d))/(2*a);
     
     printf("Parte real = %g\n",pr);
     printf("Parte imaginária = %g\n",pi);
  end
end
