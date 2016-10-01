package jlppc.regimys.util.text;


import java.util.Vector;



import jlppc.utils.FormattedString;


public class StringKey {
	public static Vector<StringKey> keys = new Vector<>();
	
	
	protected String key;
	protected String string;
	
	public StringKey(String str, String key){
		this.key = key;
		string = str;
	}
	
	public String getString(Object...objects){
		return new FormattedString(string, objects).toString();
	}
	
	public FormattedString getFormattedString(Object...objects){
		return new FormattedString(string, objects);
	}
	
	public String getKey(){
		return key;
	}
	
	public static String getString(String key, Object...objects){
		StringKey searched = null;
		for(StringKey actual : keys){
			if(actual.getKey().equalsIgnoreCase(key)){
				searched = actual;
				break;
			}
		}
		return (searched != null) ? searched.getString(objects) : null;
		
	}
	
	public static StringKey getStringKey(String key){
		StringKey searched = null;
		for(StringKey actual : keys){
			if(actual.getKey().equalsIgnoreCase(key)){
				searched = actual;
				break;
			}
		}
		return searched;
		
	}
	
	public static void outStringKey(StringKey key, Object...objects){
		System.out.println(key.getString(objects));
	}
	
	public static void initialisateKeys(){
		//Stats
		keys.add(new StringKey("effects.stats.atk.low", "L'attaque de %o baisse!"));
		keys.add(new StringKey("effects.stats.atk.lowtwo", "L'attaque de %o baisse beaucoup!"));
		keys.add(new StringKey("effects.stats.atk.cantlow", "L'attaque de %o ne peut plus baisser!"));
		keys.add(new StringKey("effects.stats.atk.add", "L'attaque de %o augmente!"));
		keys.add(new StringKey("effects.stats.atk.addtwo", "L'attaque de %o augmente beaucoup!"));
		keys.add(new StringKey("effects.stats.atk.cantadd", "L'attaque de %o ne peut plus augmenter!"));
		
		keys.add(new StringKey("effects.stats.def.low", "La d�fense de %o baisse!"));
		keys.add(new StringKey("effects.stats.def.lowtwo", "La d�fense de %o baisse beaucoup!"));
		keys.add(new StringKey("effects.stats.def.cantlow", "La d�fense de %o ne peut plus baisser!"));
		keys.add(new StringKey("effects.stats.def.add", "La d�fense de %o augmente!"));
		keys.add(new StringKey("effects.stats.def.addtwo", "La d�fense de %o augmente beaucoup!"));
		keys.add(new StringKey("effects.stats.def.cantadd", "La d�fense de %o ne peut plus augmenter!"));
		
		keys.add(new StringKey("effects.stats.atkspe.low", "L'attaque sp�ciale de %o baisse!"));
		keys.add(new StringKey("effects.stats.atkspe.lowtwo", "L'attaque sp�ciale de %o baisse beaucoup!"));
		keys.add(new StringKey("effects.stats.atkspe.cantlow", "L'attaque sp�ciale de %o ne peut plus baisser!"));
		keys.add(new StringKey("effects.stats.atkspe.add", "L'attaque sp�ciale de %o augmente!"));
		keys.add(new StringKey("effects.stats.atkspe.addtwo", "L'attaque sp�ciale de %o augmente beaucoup!"));
		keys.add(new StringKey("effects.stats.atkspe.cantadd", "L'attaque sp�ciale de %o ne peut plus augmenter!"));
		
		keys.add(new StringKey("effects.stats.defspe.low", "La d�fense sp�ciale de %o baisse!"));
		keys.add(new StringKey("effects.stats.defspe.lowtwo", "La d�fense sp�ciale de %o baisse beaucoup!"));
		keys.add(new StringKey("effects.stats.defspe.cantlow", "La d�fense sp�ciale de %o ne peut plus baisser!"));
		keys.add(new StringKey("effects.stats.defspe.add", "La d�fense sp�ciale de %o augmente!"));
		keys.add(new StringKey("effects.stats.defspe.addtwo", "La d�fense sp�ciale de %o augmente beaucoup!"));
		keys.add(new StringKey("effects.stats.defspe.cantadd", "La d�fense sp�ciale de %o ne peut plus augmenter!"));
		
		keys.add(new StringKey("effects.stats.vit.low", "La vitesse de %o baisse!"));
		keys.add(new StringKey("effects.stats.vit.lowtwo", "La vitesse de %o baisse beaucoup!"));
		keys.add(new StringKey("effects.stats.vit.cantlow", "La vitesse de %o ne peut plus baisser!"));
		keys.add(new StringKey("effects.stats.vit.add", "La vitesse de %o augmente!"));
		keys.add(new StringKey("effects.stats.vit.addtwo", "La vitesse de %o augmente beaucoup!"));
		keys.add(new StringKey("effects.stats.vit.cantadd", "La vitesse de %o ne peut plus augmenter!"));
		
		
		//status
		keys.add(new StringKey("effects.status.fail", "%o est d�ja %o!"));
		keys.add(new StringKey("effects.status.para", "%o est paralys�!"));
		keys.add(new StringKey("effects.status.poison", "%o est empoisonn�"));
		keys.add(new StringKey("effects.status.brulure", "%o est br�l�!"));
		keys.add(new StringKey("effects.status.gel", "%o est gel�!"));
		keys.add(new StringKey("effects.status.sommeil", "%o s'endort profond�mement."));
		//sous-status
		keys.add(new StringKey("effects.status.peur", "%o est apeur�!"));
		keys.add(new StringKey("effects.status.confus", "%o tombe dans la confusion!"));
		keys.add(new StringKey("effects.status.love", "%o tombe amoureux de %o!"));
		//effets
		keys.add(new StringKey("effects.stats.pv.ctrcoup", "%o prend le contrecoup et perd %o pv!"));
		//attaque
		keys.add(new StringKey("attack.pkmn.attacked", "%o a perdu %o pv. Il lui reste %o pv."));
		keys.add(new StringKey("attack.pkmn.absord", "La vie %o est absorb�e! %o gagne %o pv!"));
		keys.add(new StringKey("attack.fail", "Mais cela �choue!"));
		
	}
	
}
