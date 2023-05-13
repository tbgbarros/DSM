
/**
 * Escreva uma descrição da classe ALUNO aqui.
 * 
 * @author (seu nome) 
 * @version (um número da versão ou uma data)
 */
public class ALUNO
{
    // variáveis de instância - substitua o exemplo abaixo pelo seu próprio
    private String nome;
    private int ra;

    /**
     * Construtor para objetos da classe ALUNO
     */
    public ALUNO(String nome, int ra)
    {
        // inicializa variáveis de instância
        this.nome = nome;
        this.ra = ra;
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
        System.out.println("Informacoes sobre o aluno");
        System.out.println("Nome: " +nome);
        System.out.println("RA: " +ra);
    }
}
