package exercicioCarro;

public class Carro {
	
	//Atributos
	String nome;
	String marca;
	int ano;
	int vel;
	
	//Métodos
	void acelerar(int aceleracao) {
		vel+=aceleracao;
	}
	
	void frear(int reduzir) {
		vel-= reduzir;
	}
	
	void buzinar() {
		System.out.println("bibibi");
	}
}
