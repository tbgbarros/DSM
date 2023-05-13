public class PrintParesImpares 
{
    public static void exibeImpar(){
        int soma=0, somai=0, n=0, t=0, somaPar=0, somaImpar=0,result=0, aux=0;
        
        for(int i=0; i<=30; i++){
            n=i;
            if(n %2 ==1){  
                aux=aux+n;
            }
        }
        System.out.println(" Soma dos Impares: " + result);
    }
    
    
    public static void exibeMultiplicacao(){
        long aux=1, par=1;
        
        for(int i=1; i<=30; i++){
            
            if(i %2 == 0){  
                par=par*i;
            }
        }
        System.out.println(" Multiplicacao dos Pares: " + par);
    }
}
    
