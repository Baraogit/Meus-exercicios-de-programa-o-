public class Tabuleiro {
	
	private int vencedor;
	public char campo[][] = {
			{'_','_','_'},
			{'_','_','_'},
			{'_','_','_'}
	};
	
	
	public void limparCampos(){
		for(int i = 0; i < campo.length; i++) {
			for(int j = 0; j < campo.length; j++) {
				campo[i][j] = '_';
			}
		}
	}
	
	public void status() {
		for(int i = 0; i < campo.length; i++) {
			for(int j = 0; j < campo.length; j++) {
				System.out.print(campo[i][j] + " ");
			}
			System.out.println();
		}
	}
	
	public int resultado() {
		// 1 == jogador
		// 2 == computador
		vencedor = 0;
		if (campo[0][0] == 'O' && campo[0][1] == 'O' && campo[0][2] == 'O')
			vencedor = 1;
		else if (campo[1][0] == 'O' && campo[1][1] == 'O' && campo[1][2] == 'O')
			vencedor = 1;
		else if (campo[2][0] == 'O' && campo[2][1] == 'O' && campo[2][2] == 'O')
			vencedor = 1;
		else if (campo[0][0] == 'O' && campo[1][0] == 'O' && campo[2][0] == 'O')
			vencedor = 1;
		else if (campo[0][1] == 'O' && campo[1][1] == 'O' && campo[2][1] == 'O')
			vencedor = 1;
		else if (campo[0][2] == 'O' && campo[1][2] == 'O' && campo[2][2] == 'O')
			vencedor = 1;
		else if (campo[0][0] == 'O' && campo[1][1] == 'O' && campo[2][2] == 'O')
			vencedor = 1;
		else if (campo[0][2] == 'O' && campo[1][1] == 'O' && campo[2][0] == 'O')
			vencedor = 1;
		else {
			if (campo[0][0] == 'X' && campo[0][1] == 'X' && campo[0][2] == 'X')
				vencedor = 2;
			else if (campo[1][0] == 'X' && campo[1][1] == 'X' && campo[1][2] == 'X')
				vencedor = 2;
			else if (campo[2][0] == 'X' && campo[2][1] == 'X' && campo[2][2] == 'X')
				vencedor = 2;
			else if (campo[0][0] == 'X' && campo[1][0] == 'X' && campo[2][0] == 'X')
				vencedor = 2;
			else if (campo[0][1] == 'X' && campo[1][1] == 'X' && campo[2][1] == 'X')
				vencedor = 2;
			else if (campo[0][2] == 'X' && campo[1][2] == 'X' && campo[2][2] == 'X')
				vencedor = 2;
			else if (campo[0][0] == 'X' && campo[1][1] == 'X' && campo[2][2] == 'X')
				vencedor = 2;
			else if(campo[0][2] == 'X' && campo[1][1] == 'X' && campo[2][0] == 'X')
				vencedor = 2;
		}
		
		return vencedor; 
	}
	
}
