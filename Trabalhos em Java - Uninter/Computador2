public class Computador2 extends Computador {
	
	public Computador2(char pecaTabuleiro) {
		super(pecaTabuleiro);
		this.pecaTabuleiro = pecaTabuleiro;
	}

	@Override
	public void jogar(char[][] campo) {
	    boolean flag = false;
	    
		for(int i = campo.length - 1; i >= 0; i--) {
			for(int j = campo.length - 1; j >= 0; j--) {
				if(campo[i][j] != '_')
				  continue;
				else{
				    campo[i][j] = pecaTabuleiro;
				    flag = true;
				    break;
				}
			}
			if(flag == true)
			   break;
		}
	}//fim do método

}
