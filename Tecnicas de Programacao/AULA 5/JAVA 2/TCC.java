import java.util.Date;

/**
 * Escreva uma descrição da classe TCC aqui.
 * 
 * @author (seu nome) 
 * @version (um número da versão ou uma data)
 */
public class TCC
{
    // variáveis de instância - substitua o exemplo abaixo pelo seu próprio
    private String titulo;
    private Date ano;
    private String situacao;
    private float notas;

    /**
     * Construtor para objetos da classe TCC
     */
    public TCC(String titulo, Date ano, String situacao, float notas)
    {
        // inicializa variáveis de instância
        this.titulo = titulo;
        this.ano = ano;
        this.situacao = situacao;
        this.notas = notas;
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
        System.out.println("Informacoes sobre TCC: ");
        System.out.println("Titulo: " +titulo);
        System.out.println("Ano: " +ano);
        System.out.println("Situacao : " +situacao);
        System.out.println("Notas : " +notas);
    }
}
