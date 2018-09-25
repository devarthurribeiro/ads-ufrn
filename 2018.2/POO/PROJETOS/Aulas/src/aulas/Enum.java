package aulas;

/**
 *
 * @author arthur
 */
public enum Enum {
    VERDE(10000),
    AMARELO(5000),
    VERMELHO(15000);
    
    int tempo;

    private Enum(int tempo) {
        this.tempo = tempo;
    }
    
}
