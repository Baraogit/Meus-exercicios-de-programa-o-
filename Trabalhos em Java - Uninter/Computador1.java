public class Computador1 extends Computador {
	
	
	public Computador1(char pecaTabuleiro) {
		super(pecaTabuleiro);
		this.pecaTabuleiro = pecaTabuleiro;
	}

	@Override
	public void jogar(char[][] campo) {
		boolean flag = false;

		for(int i = 0; i < campo.length; i++) {
			for(int j = 0; j < campo.length; j++) {
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
		
	}

}
