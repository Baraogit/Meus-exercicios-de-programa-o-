public class Main {

	public static void main(String[] args) {
		
		int vetor[] = {5, 3, 2, 4, 1};
		
		mergeSort(vetor, 0, 4);

		for(int x: vetor) {
			System.out.println(x);
		}
	}
	
	public static void merge(int[] vetor, int inicio, int meio, int fim) {
		boolean fim1 = true, fim2 = true;
		int tamanho = fim - inicio + 1;
		int parte1 = inicio;
		int parte2 = meio+1;
		int vetorAux[] = new int[tamanho];
		
		for(int i = 0; i < tamanho; i++) {
			if(fim1 && fim2) {
				if(vetor[parte1] < vetor[parte2])
					vetorAux[i] = vetor[parte1++];
				else
					vetorAux[i] = vetor[parte2++];
				
				if(parte1 > meio) fim1 = false;
				if(parte2 > fim) fim2 = false;
			}else {
				if(fim1)
					vetorAux[i] = vetor[parte1++];
				else
					vetorAux[i] = vetor[parte2++];
			}
		}
		for(int j = 0, k = inicio; j < tamanho; j++, k++)
			vetor[k] = vetorAux[j];
	}
	
	public static void mergeSort(int[] vetor, int inicio, int fim) {
		
		if(inicio < fim) {
			int meio = (inicio + fim) / 2;
			mergeSort(vetor, inicio, meio);
			mergeSort(vetor, meio+1, fim);
			merge(vetor, inicio, meio, fim);
		}
	}
}
