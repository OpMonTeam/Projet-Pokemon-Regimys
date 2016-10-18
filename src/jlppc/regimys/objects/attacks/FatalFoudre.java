package jlppc.regimys.objects.attacks;

import jlppc.regimys.fight.EndOfTurn;
import jlppc.regimys.enums.Type;
import jlppc.regimys.fight.SameAtkPartTwo;
import jlppc.regimys.objects.Attaque;
import jlppc.regimys.objects.Pokemon;
import jlppc.regimys.objects.Pokemon.Status;

public class FatalFoudre extends Attaque {
	public FatalFoudre() {
		super("Fatal-Foudre", 110, Type.ELECTRIQUE, 70, true, false, 16, false, 10);
	}

	@Override
	protected void effetAvant(Pokemon atk, Pokemon def) throws EndOfTurn, SameAtkPartTwo {
		// TODO Auto-generated method stub

	}

	@Override
	protected void effetApres(Pokemon atk, Pokemon def) throws SameAtkPartTwo {
		if(rand(10) > 3){
			if(def.setStatus(Status.PARALYSIE)){
				keyout(key("effects.status.para"), def.getSurnom());
			}
		}

	}
}
