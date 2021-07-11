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
				if(campo[i][j] != '_') // se campo já estiver marcado
				  continue;//pula a posição do campo atual
				else{
				    campo[i][j] = this.pecaTabuleiro;//se não, marca o campo com uma peça
				    flag = true;
				    break; //sai do loop interno
				}
			}
			if(flag == true)
			   break;//sai do loop externo
		}
	}//fim do método

}
