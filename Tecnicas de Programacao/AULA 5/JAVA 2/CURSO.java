
/**
 * Escreva uma descrição da classe CURSO aqui.
 * 
 * @author (seu nome) 
 * @version (um número da versão ou uma data)
 */
public class CURSO
{
    // variáveis de instância - substitua o exemplo abaixo pelo seu próprio
    private String nome;
    private String sigla;
    private String area;
    /**
     * Construtor para objetos da classe CURSO
     */
    public CURSO(String nome, String sigla, String area)
    {
        // inicializa variáveis de instância
        this.nome = nome;
        this.sigla = sigla;
        this.area = area;
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
        System.out.println("Informacoes sobre o curso: ");
        System.out.println("Nome curso: " +nome);
        System.out.println("Sigla curso: " +sigla);
        System.out.println("Area curso: " +area);
    }
}
