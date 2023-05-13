public class EstacaoDoAno {//DEFINICAO DA CLASSE CHAMADA EXECUTA
    public static void main(int mes){//metodo que inicia o programa 
        String estacao; // armazona o nome do mes
        
        if(mes==12 || mes==1 || mes==2){
            estacao="Verão";
        }else if(mes ==3 || mes==4 || mes ==5){
            estacao="Outono";
        }else if(mes ==6 || mes==7 || mes==8){
            estacao="Inverno";
        }else if(mes==9 || mes==10 || mes==11){
            estacao="Primavera";
        }else //else para mes invalido
        estacao="Desconhecido";
        System.out.println("Mês: " +mes + " - Estação: " +estacao + " . ");//exibe
               
     }//fecha o metodo main
    }//fecha a definição da classe