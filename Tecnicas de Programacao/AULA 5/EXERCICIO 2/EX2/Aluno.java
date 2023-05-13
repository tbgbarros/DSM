
/**
 * Escreva uma descrição da classe Aluno aqui.
 * 
 * @author (seu nome) 
 * @version (um número da versão ou uma data)
 */
public class Aluno
{
    // variáveis de instância - substitua o exemplo abaixo pelo seu próprio
    private String pai;
    private String mae;
    private int ra;
    /**
     * Construtor para objetos da classe Aluno
     */
    public Aluno(String pai, String mae, int ra)
    {
        // inicializa variáveis de instância
        this.pai = pai;
        this.mae = mae;
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
        System.out.println("Informações sobre o aluno");
        System.out.println("Pai do aluno: " +pai);
        System.out.println("Mae do aluno: " +mae);
        System.out.println("RA do aluno: " +ra);
    }
}
