public class Main {

	public static void main(String[] args) {
		
		int vetor[] = {5, 3, 1, 4, 2};
		
		selectionSort(vetor, 5);
		
		for(int i = 0; i < 5; i++) {
			System.out.println(vetor[i]);
		}
				
	}// fim do método main
	
	public static void selectionSort(int[] vetor, int n) {
		int menor, trocaPosicao;
		
		for(int i = 0; i < n - 1; i++) {
			menor = i; 
			for(int j = i + 1; j < n; j++) {
				if(vetor[menor] > vetor[j]) {
					menor = j;
				}
			}
			if (i != menor) {
				trocaPosicao = vetor[i];
				vetor[i] = vetor[menor];
				vetor[menor] = trocaPosicao;
			}
		}
	}// fim do método selectionSort

}// fim da classe Main
