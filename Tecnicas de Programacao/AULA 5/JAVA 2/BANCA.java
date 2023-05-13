import java.util.Date;

/**
 * Escreva uma descrição da classe BANCA aqui.
 * 
 * @author (seu nome) 
 * @version (um número da versão ou uma data)
 */
public class BANCA
{
    // variáveis de instância - substitua o exemplo abaixo pelo seu próprio
    private Date data;
    private String parecer;
    /**
     * Construtor para objetos da classe BANCA
     */
    public BANCA(Date data, String parecer)
    {
        // inicializa variáveis de instância
        this.data = data;
        this.parecer = parecer;
    }

    /**
     * Um exemplo de um método - substitua este comentário pelo seu próprio
     * 
     * @param  y   um exemplo de um parâmetro de método
     * @return     a soma de x e y 
     */
    public void exibirInformacoes()
    {
        // escreva seu código aqui
        System.out.println("Informacoes da banca: ");
        System.out.println("Data da avaliacao da banca: " +data);
        System.out.println("Parecer da banca: " +parecer);
    }
}
