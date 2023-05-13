
/**
 * Escreva uma descrição da classe Professor aqui.
 * 
 * @author (seu nome) 
 * @version (um número da versão ou uma data)
 */
public class Professor
{
    // variáveis de instância - substitua o exemplo abaixo pelo seu próprio
    private int matricula;
    private String formacao;
    private String endereco;
    private int tel_celular;
    private int tel_residencial;
    /**
     * Construtor para objetos da classe Professor
     */
    public Professor(int matricula, String formacao, String endereco, 
                    int tel_celular, int tel_residencial)
    {
        // inicializa variáveis de instância
        this.matricula = matricula;
        this.formacao = formacao;
        this.endereco = endereco;
        this.tel_celular = tel_celular;
        this.tel_residencial = tel_residencial;
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
        System.out.println("Informações sobre o professor");
        System.out.println("Matricula: " +matricula);
        System.out.println("Formação: " +formacao);
        System.out.println("Endereço: " +endereco);
        System.out.println("Celular: " +tel_celular);
        System.out.println("Fixo: " +tel_residencial);  
    }
}
