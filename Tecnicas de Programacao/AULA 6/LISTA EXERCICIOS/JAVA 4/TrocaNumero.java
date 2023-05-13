public class TrocaNumero{
    public static void trocaNum(int num1, int num2){
    int aux= num2;
    num2 = num1;
    num1 = aux;
    System.out.println(" Era numero 1 agora e numero 2: " + num2);
    System.out.println(" Era numero 2 agora e numero 1: " + num1);    
}
}