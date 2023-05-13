
/**
 * Escreva uma descrição da classe Atividade aqui.
 * 
 * @author (seu nome) 
 * @version (um número da versão ou uma data)
 */
public class Atividade
{
    // variáveis de instância - substitua o exemplo abaixo pelo seu próprio
    private String nome;
    private String descricao;
    private int valor;
    /**
     * Construtor para objetos da classe Atividade
     */
    public Atividade(String nome, String descricao, int valor)
    {
        // inicializa variáveis de instância
        this.nome = nome;
        this.descricao = descricao;
        this.valor = valor;
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
        System.out.println("Informações sobre a atividade");
        System.out.println("Nome da atividade: " +nome);
        System.out.println("Descricao da atividade: " +descricao);
        System.out.println("Valor da atividade: " +valor);
    }
}
