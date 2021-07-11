import java.util.Random;

public class Computador3 extends Computador {
		
	public Computador3(char pecaTabuleiro) {
		super(pecaTabuleiro);
		this.pecaTabuleiro = pecaTabuleiro;
	}
    
	@Override
	public void jogar(char[][] campo) {
		Random aleatorio = new Random();
		int i, j;
		
		while(true) {
			i = aleatorio.nextInt(3);//cria aleatorios de 0 a 2
			j = aleatorio.nextInt(3);
			
			//se o campo estiver já marcado, retorna o loop até encontrar um campo disponível
			if(campo[i][j] != '_')
				continue;
			else {
				campo[i][j] = this.pecaTabuleiro;
				break;
			}	
		}
	
	}//fim do método

}

