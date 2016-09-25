package jlppc.regimys.objects.attacks;

import jlppc.regimys.fight.EndOfTurn;
import jlppc.regimys.fight.SameAtkPartTwo;
import jlppc.regimys.objects.Attaque;
import jlppc.regimys.objects.Pokemon;
import jlppc.regimys.objects.Type;
import jlppc.utils.FormattedString;

public class GodAttackPleaseDontHackAndCheat extends Attaque {
	public GodAttackPleaseDontHackAndCheat() {
		super("Headshot", 65565, Type.NORMAL, 150, true, false, 0, true, 9999);
	}

	@Override
	protected void effetAvant(Pokemon atk, Pokemon def) throws EndOfTurn, SameAtkPartTwo {
		this.type = atk.getType1();

	}

	@Override
	protected void effetApres(Pokemon atk, Pokemon def) throws SameAtkPartTwo {
		FormattedString.outPrintln("BOOOOOM HEADSHOT!!! Pv restaur�s et pokemon tu�!");
		atk.attacked(-atk.getStatPV());
		def.attacked(99999999);

	}
}
