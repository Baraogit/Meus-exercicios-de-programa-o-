import java.util.Scanner;

import Entidades.Computador;
import Entidades.Computador1;
import Entidades.Computador2;
import Entidades.Computador3;
import Entidades.Jogador;
import Entidades.Tabuleiro;

public class Main {

	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		
		Tabuleiro tabuleiro = new Tabuleiro();
		Jogador jogador = new Jogador('O');
		Computador1 computador1 = new Computador1('X');
		Computador2 computador2 = new Computador2('X');
		Computador3 computador3 = new Computador3('X');
	
		char continuarJogo;
		do {
			// escolha do nível de difculdade
			int nivelDificuldade;
			do {
				System.out.println("1 - Fácil");
				System.out.println("2 - Moderado");
				System.out.println("3 - Difícil");
				System.out.print("Escolha o nível de dificuldade do seu oponente: ");
				nivelDificuldade = input.nextInt();
				
				if(nivelDificuldade < 1 || nivelDificuldade > 3 ) {
					System.out.println("Você digitou a opção errada. Tente novamente!");
					continue;
				}
					
			}while(nivelDificuldade < 1 || nivelDificuldade > 3);
			
			
			//mostra as posições dos campos do tabuleiro
			System.out.println("Posições do tabuleiro: ");
			System.out.println("01 | 02 | 03\n04 | 05 | 06\n07 | 08 | 09");
			
			
			
			int posicaoCampo;
			boolean marcacaoCampo = false; 
			//jogo em si
			for(int i = 0; i < 5; i++) {
				//jogador fará sua jogada escolhendo em qual posição irá jogar

				do {
					System.out.print("Escolha a posição que você quer jogar: ");
					posicaoCampo = input.nextInt();
					if(posicaoCampo < 1 || posicaoCampo > 9) {
						System.out.println("Você digitou fora do intervalo. Tente novamente.\n\n");
						continue;
					}
					
					marcacaoCampo = jogador.jogar(posicaoCampo, tabuleiro.campo);
					if(marcacaoCampo == false) {
						System.out.println("Posição já marcada. Tente outra.\n\n");
						continue;
					}

				}while(marcacaoCampo == false || (posicaoCampo < 1 || posicaoCampo > 9));
				
				

				/*Vez do computador. Se chegar na última rodada, o computador não joga, 
				 pois sobra somente um campo vazio que será preenchida pelo jogador*/
				if(i != 4) {
					switch(nivelDificuldade) {
					case 1: 
						computador1.jogar(tabuleiro.campo);// nível de dificuldade 1
						break;
					case 2: 
						computador2.jogar(tabuleiro.campo);// nível de dificuldade 2
						break;
					case 3: 
						computador3.jogar(tabuleiro.campo);// nível de dificuldade 3
						break;
					}
				}// fim do if
		
				
				
				tabuleiro.status();//mostra  status do tabuleiro
				
				
				
				//este bloco mostra o resultado do jogo
				int resultado = tabuleiro.resultado();
				if(resultado == 1) {
					System.out.println("Você venceu o computador!");
					break;
				}
				else if(resultado == 2) {
					System.out.println("O computador venceu!");
					break;
				}
				else if(i == 4) {// se chegar na última rodada e ninguém venceu, houve empate 
					System.out.println("Você empatou com o computador");
					break;
				}
			}//fim do for
			
			
			
			while(true) {
				System.out.print("Deseja jogar novamente?(s/n): ");
				continuarJogo = input.next().charAt(0);
				if(continuarJogo == 's' || continuarJogo == 'n') {
					break;
				}else {
					System.out.println("Ops! Escolha inválida, tente novamente.");
					continue;
				}	
			}//fim while
			
			if(continuarJogo == 's')//zera os campos caso aja um novo jogo
				tabuleiro.limparCampos();

				
		}while(continuarJogo != 'n');
		
	   input.close();
	}//fim método main

}// fim classe main
