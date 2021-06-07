public class Main {

	public static void main(String[] args) {
		
		int vetor[] = {5, 3, 1, 4, 2};
		
		bubbleSort(vetor, 5);
		
		for(int i = 0; i < 5; i++) {
			System.out.print(vetor[i] + " ");
		}
				
	}
	
	public static void bubbleSort(int[] vetor, int nElementosVetor) {
		int trocaElemento, finalDoVetor = nElementosVetor - 1;
		boolean continuaLoopDoWhile;
		
		do {
			continuaLoopDoWhile = false; 
			for(int i = 0; i < finalDoVetor; i++) {
				if(vetor[i] > vetor[i+1]) {
					trocaElemento = vetor[i];
					vetor[i] = vetor[i+1];
					vetor[i+1] = trocaElemento;
					continuaLoopDoWhile = true;
				}
			}
			finalDoVetor--;
			
		}while(continuaLoopDoWhile != false);
	}

}
