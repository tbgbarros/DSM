
/**
 * Escreva uma descrição da classe Responsavel aqui.
 * 
 * @author (seu nome) 
 * @version (um número da versão ou uma data)
 */
public class Responsavel
{
    // variáveis de instância - substitua o exemplo abaixo pelo seu próprio
    private String parentesco, endereco;
    private int tel_residencial, tel_celular;
    /**
     * Construtor para objetos da classe Responsavel
     */
    public Responsavel(String parentesco, String endereco, 
                int tel_residencial, int tel_celular)
    {
        // inicializa variáveis de instância
        this.parentesco = parentesco;
        this.endereco = endereco;
        this.tel_residencial = tel_residencial;
        this.tel_celular = tel_celular;
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
        System.out.println("Informações sobre o responsavel");
        System.out.println("Parentesco: " +parentesco);
        System.out.println("Endereco: " +endereco);
        System.out.println("Celular: " +tel_celular);
        System.out.println("Fixo: " +tel_residencial); 
    }
}
