public class Soma {//DEFINICAO DA CLASSE CHAMADA EXECUTA
    public static void main(String[] args){//metodo que inicia o programa 
        //converte os parametros me inteiros e os armazena em a e b
        int a = Integer.parseInt(args[0]);
        int b = Integer.parseInt(args[1]);
        int c = a + b; //realiza soma
        
        System.out.println("Resultado da Soma: " +c);//comando de escrita        
     }//fecha o metodo main
    }//fecha a definição da classe