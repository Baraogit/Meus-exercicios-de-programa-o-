public class Main {

	public static void main(String[] args) {
		
		int vetor[] = {5, 2, 1, 4, 3};
		
		insertionSort(vetor);
				
		for (int x: vetor) {
			System.out.println(x + " ");
		}

	}// fim do método main
	
	public static void insertionSort(int[] vetor) {
		int j, elementoAtual; 
		
		for (int i = 1; i < vetor.length; i++) {
			elementoAtual = vetor[i];
			for (j = i; (j > 0) && (vetor[j - 1] > elementoAtual); j--) {
				vetor[j] = vetor[j - 1];
			}
			vetor[j] = elementoAtual; 
		}
	}
	

}// fim da classe Main
