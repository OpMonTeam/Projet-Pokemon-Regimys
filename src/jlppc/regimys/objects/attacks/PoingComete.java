package jlppc.regimys.objects.attacks;

import jlppc.regimys.fight.EndOfTurn;
import jlppc.regimys.fight.SameAtkPartTwo;
import jlppc.regimys.launch.Start;
import jlppc.regimys.objects.Attaque;
import jlppc.regimys.objects.Pokemon;
import jlppc.regimys.objects.Type;
import jlppc.utils.FormattedString;

public class PoingComete extends Attaque {
	public PoingComete() {
		super("Poing Com�te", 18, Type.NORMAL, 85, false, false, 16, false, 15);
	}

	@Override
	protected void effetAvant(Pokemon atk, Pokemon def) throws EndOfTurn, SameAtkPartTwo {
		// TODO Auto-generated method stub

	}

	@Override
	protected void effetApres(Pokemon atk, Pokemon def) {
		FormattedString.outPrintln("%o attaque une 1�re fois!", atk.getSurnom());
		if(def.getPV() <= 0){
			return;
		}
		int i = 0;
		int coups = Start.rand.nextInt(4);
		for(i = 0; i != coups + 1; i++){
			FormattedString.outPrintln("%o attaque une %o�me fois!", atk.getSurnom(), (i + 2));
			def.attacked(pvPerdus);
			FormattedString.outPrintln("%o perd %o pv. Il lui reste %o pv.", def.getSurnom(), pvPerdus, def.getPV());
			if(def.getPV() <= 0){
				return;
			}
		}

	}
}
