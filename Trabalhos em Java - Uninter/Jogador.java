public class Jogador {
	
	private char pecaTabuleiro;
	
	public Jogador(char pecaTabuleiro) {
		this.pecaTabuleiro = pecaTabuleiro;
	}
	
	public boolean validarIntervaloPosicao(int posicao) {
		boolean validade; 
		if(posicao < 1 || posicao > 9)
			validade = false;
		else
			validade = true;
	    
		return validade;
	}

	public boolean jogar(int posicao, char[][] campo) {
		switch(posicao) {
		case 1:
			if (campo[0][0] != '_') 
				return false;			
			campo[0][0] = pecaTabuleiro; break;
		case 2:
			if (campo[0][1] != '_') 
				return false;
			campo[0][1] = pecaTabuleiro; break; 
		case 3:
			if (campo[0][2] != '_') 
				return false;		
			campo[0][2] = pecaTabuleiro; break;
		case 4:
			if (campo[1][0] != '_') 
				return false;		
			campo[1][0] = pecaTabuleiro; break;
		case 5:
			if (campo[1][1] != '_') 
				return false;	
			campo[1][1] = pecaTabuleiro; break;
		case 6:
			if (campo[1][2] != '_') 
				return false;
			campo[1][2] = pecaTabuleiro; break;
		case 7:
			if (campo[2][0] != '_') 
				return false;
			campo[2][0] = pecaTabuleiro; break;
		case 8:
			if (campo[2][1] != '_') 
				return false;
			campo[2][1] = pecaTabuleiro; break;
		case 9:
			if (campo[2][2] != '_') 
				return false;
			campo[2][2] = pecaTabuleiro; break;
		}
		return true;	
	}

}

