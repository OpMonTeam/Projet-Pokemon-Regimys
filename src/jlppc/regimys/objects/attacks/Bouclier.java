package jlppc.regimys.objects.attacks;

import jlppc.regimys.enums.Type;
import jlppc.regimys.fight.EndOfTurn;
import jlppc.regimys.objects.Attaque;
import jlppc.regimys.objects.Pokemon;

public class Bouclier extends Attaque {

	public Bouclier(){
		super("Bouclier", 0, Type.PSI, 100, false, true, -1, true, 20);
	}
	
	@Override
	protected void effetAvant(Pokemon atk, Pokemon def) throws EndOfTurn {}

	@Override
	protected void effetApres(Pokemon atk, Pokemon def) {
		if(atk.changeDEF(2)){
			System.out.println("La d�fense de " + atk.getSurnom() + " augmente beaucoup!");
		}else{
			System.out.println("La d�fense de " + atk.getSurnom() + " ne peut plus augmenter!");
		}
	}

}
