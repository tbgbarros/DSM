import java.util.Date;
import java.text.*;
import java.util.Calendar;

/**
 * Escreva uma descrição da classe Pessoa aqui.
 * 
 * @author (seu nome) 
 * @version (um número da versão ou uma data)
 */
public class Pessoa
{
    // variáveis de instância - substitua o exemplo abaixo pelo seu próprio
    private String nome;
    private Date datanascimento;
    private int cpf;
    /**
     * Construtor para objetos da classe Pessoa
     */
    public Pessoa(String nome, Date datanascimento, int cpf)
    {
        // inicializa variáveis de instância
        this.nome = nome;
        this.datanascimento = datanascimento;
        this.cpf = cpf;
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
        System.out.println("Informações sobre a pessoa");
        System.out.println("Nome: " +nome);
        System.out.println("Data nascimento: " +datanascimento);
        System.out.println("CPF: " +cpf);
    }
}
