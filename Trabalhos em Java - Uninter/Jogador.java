public class Jogador {
	
	private char pecaTabuleiro;
	
	public Jogador(char pecaTabuleiro) {
		this.pecaTabuleiro = pecaTabuleiro;
	}
	
	public boolean jogar(int posicao, char[][] campo) {
		switch(posicao) {
		case 1:
			if (campo[0][0] != '_') // se o campo escolhido estiver marcada retorna false 
				return false;			
			campo[0][0] = this.pecaTabuleiro; break; //se estiver livre, marca o campo 
		case 2:
			if (campo[0][1] != '_') 
				return false;
			campo[0][1] = this.pecaTabuleiro; break; 
		case 3:
			if (campo[0][2] != '_') 
				return false;		
			campo[0][2] = this.pecaTabuleiro; break;
		case 4:
			if (campo[1][0] != '_') 
				return false;		
			campo[1][0] = this.pecaTabuleiro; break;
		case 5:
			if (campo[1][1] != '_') 
				return false;	
			campo[1][1] = this.pecaTabuleiro; break;
		case 6:
			if (campo[1][2] != '_') 
				return false;
			campo[1][2] = this.pecaTabuleiro; break;
		case 7:
			if (campo[2][0] != '_') 
				return false;
			campo[2][0] = this.pecaTabuleiro; break;
		case 8:
			if (campo[2][1] != '_') 
				return false;
			campo[2][1] = this.pecaTabuleiro; break;
		case 9:
			if (campo[2][2] != '_') 
				return false;
			campo[2][2] = this.pecaTabuleiro; break;
		}
		return true;	
	}

}
