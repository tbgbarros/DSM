
/**
 * Escreva uma descrição da classe CORDENADOR aqui.
 * 
 * @author (seu nome) 
 * @version (um número da versão ou uma data)
 */
public class CORDENADOR
{
    // variáveis de instância - substitua o exemplo abaixo pelo seu próprio
    private int ramal;
    private int cargaHoraria;

    /**
     * Construtor para objetos da classe CORDENADOR
     */
    public CORDENADOR(int ramal, int cargaHoraria)
    {
        // inicializa variáveis de instância
        this.ramal = ramal;
        this.cargaHoraria = cargaHoraria; 
    }

    /**
     * Um exemplo de um método - substitua este comentário pelo seu próprio
     * 
     * @param  y   um exemplo de um parâmetro de método
     * @return     a soma de x e y 
     */
    public void exibeInformacoes()
    {
        // escreva seu código aqui
        System.out.println("Informacoes do cordenador: ");
        System.out.println("Ramal: " +ramal);
        System.out.println("Carga horaria: " +cargaHoraria);
    }
}
