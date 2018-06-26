  for(int i = 0 ; i < TAM ; i++) {
      aux = matriz[t][i];
      matriz[t][i] = matriz[i][t];
      matriz[i][t] = aux;
    }