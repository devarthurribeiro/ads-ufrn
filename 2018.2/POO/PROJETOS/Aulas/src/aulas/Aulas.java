package aulas;

import aulas.Enum;

/**
 *
 * @author arthur
 */
public class Aulas {
    public static void main(String[] args) {
        while(true) {
            System.out.println(Enum.VERDE);
            espera(Enum.VERDE.tempo);
            System.out.println(Enum.AMARELO);
            espera(Enum.AMARELO.tempo);
            System.out.println(Enum.VERMELHO);
            espera(Enum.VERMELHO.tempo);
        }
    }
    public static void espera(int tempo) {
        try {
            Thread.sleep(tempo);
        } catch (Exception e) {
            System.out.println("Erro");
        }
    }
    
}
