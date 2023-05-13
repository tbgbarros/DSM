public class MediaAluno {
    public static int maiorNum(int num){
      
        int n = 4; // tamanho do vetor
        int vetor[] = new int[n]; // declaração e alocação de espaço para o vetor "v"
        int i, aux=0, media; // índice ou posição
        
        // processando os "n" elementos do vetor "v"
        for (i=0; i<n; i++) {
          vetor[i] = num; // na i-ésima posição do vetor "v" armazena o valor da variável "i"
        }
        
        for (i=0; i<n; i++) {
          aux = vetor[i] + aux; // na i-ésima posição do vetor "v" armazena o valor da variável "i"
        }
        media=aux/4;
        
        return media;
        }
        
}