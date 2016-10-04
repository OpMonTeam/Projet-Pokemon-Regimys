package jlppc.regimys.enums;
/**
 * Tout ce qui attrait au type.
 * @author Jlppc
 *
 */
public enum Type {
	
	EAU(3, "Eau"), FEU(6, "Feu"), PLANTE(10, "Plante"), ELECTRIQUE(4, "Electrique"), PSI(12, "Psy"), TENEBRES(16,"T�n�bres"), DRAGON(2, "Dragon"), COMBAT(1, "Combat"), ROCHE(13, "Roche"), SOL(14,"Sol"), NORMAL(9, "Normal"), FEE(5, "F�e"), SPECTRE(15, "Spectre"), POISON(11, "Poison"), ACIER(0, "Acier"), INSECTE(8, "Insecte"), VOL(17, "Vol"), GLACE(7, "Glace"), AUCUN(-1, "Aucun");
	/**
	 * L'ID du type.
	 */
	public final int id;
	//Variables de repere pour le tableau.
	public static final float PE = 0.5f;//Peu efficace
	public static final float NE = 1f;//Neutre
	public static final float IN = 0f;//INnefficace
	public static final float TP = 0.25f;//Tr�s peu efficace
	public static final float TE = 2f;//Tr�s efficace
	public static final float SE = 4f;//Super efficace
	/**
	 * Contient les resistance et faiblesses du types seuls.
	 * Le type defenseur est le premier IND, le type attaquant le 2e
	 */
	public static float[][] tabUnType = {
			{PE, TE, PE, NE, NE, PE, TE, PE, PE, PE, PE, IN, PE, PE, TE, NE, NE, PE},//Acier
			{NE, NE, NE, NE, NE, TE, NE, NE, PE, NE, NE, NE, TE, PE, NE, NE, PE, TE},//Combat
			{NE, NE, TE, PE, PE, TE, PE, TE, NE, NE, PE, NE, NE, NE, NE, NE, NE, NE},//Dragon
			{PE, NE, NE, PE, TE, NE, PE, PE, NE, NE, TE, NE, NE, NE, NE, NE, NE, NE},//Eau
			{PE, NE, NE, NE, PE, NE, NE, NE, NE, NE, NE, NE, NE, NE, TE, NE, NE, PE},//Electrique
			{TE, PE, IN, NE, NE, NE, NE, NE, PE, NE, NE, TE, NE, NE, NE, NE, PE, NE},//F�e
			{PE, NE, NE, TE, NE, PE, PE, PE, PE, NE, PE, NE, NE, TE, TE, NE, NE, NE},//Feu
			{TE, TE, NE, NE, NE, NE, TE, PE, NE, NE, NE, NE, NE, TE, NE, NE, NE, NE},//Glace
			{NE, PE, NE, NE, NE, NE, TE, NE, NE, NE, PE, NE, NE, TE, PE, NE, NE, TE},//Insecte
			{NE, TE, NE, NE, NE, NE, NE, NE, NE, NE, NE, NE, NE, NE, NE, IN, NE, NE},//Normal
			{NE, NE, NE, PE, PE, NE, TE, TE, TE, NE, PE, TE, NE, NE ,PE, NE, NE, TE},//Plante
			{NE, PE, NE, NE, NE, PE, NE, NE, PE, NE, PE, PE, TE, NE, TE, NE, NE, NE},//Poison
			{NE, PE, NE, NE, NE, NE, NE, NE, TE, NE, NE, NE, PE, NE, NE, TE, TE, PE},//Psy
			{TE, TE, NE, TE, NE, NE, PE, NE, NE, PE, TE, PE, NE, NE, TE, NE, NE, PE},//Roche
			{NE, NE, NE, TE, IN, NE, NE, TE, NE, NE, TE, PE, NE, PE, NE, NE, NE, NE},//Sol
			{NE, IN, NE, NE, NE, NE, NE, NE, PE, IN, NE, PE, NE, NE, NE, TE, TE, NE},//Spectre
			{NE, TE, NE, NE, NE, TE, NE, NE, TE, NE, NE, NE, IN, NE, NE, PE, PE, NE},//Tenebres
			{NE, PE, NE, NE, TE, NE, NE, TE, PE, NE, PE, NE, NE, TE, IN, NE, NE, NE}//Vol
	};
	
	public static float[][] tableAcier = {
			{PE, TE, PE, NE, NE, PE, TE, PE, PE, PE, PE, IN, PE, PE, TE, NE, NE, PE},//Acier + Acier
			{PE, TE, PE, NE, NE, NE, TE, PE, TP, PE, PE, IN, NE, TP, TE, NE, PE, NE},//Acier + Combat
			{PE, TE, NE, PE, PE, NE, NE, NE, PE, PE, TP, IN, PE, PE, TE, NE, NE, PE},//Acier + Dragon
			{TP, TE, PE, PE, TE, PE, NE, TP, PE, PE, NE, IN, PE, PE, TE, NE, NE, PE},//Acier + Eau
			{TP, TE, PE, NE, PE, PE, TE, PE, PE, PE, PE, IN, PE, PE, SE, NE, NE, TP},//Acier + Electrique
			{NE, NE, IN, NE, NE, PE, TE, PE, TP, PE, PE, IN, PE, PE, TE, NE, PE, PE},//Acier + Fee
			{TP, TE, PE, TE, NE, TP, NE, TP, TP, PE, TP, IN, PE, NE, SE, NE, NE, PE},//Acier + Feu
			{NE, SE, PE, NE, NE, PE, SE, TP, PE, PE, PE, IN, PE, NE, TE, NE, NE, PE},//Acier + Glace
			{PE, NE, PE, NE, NE, TP, SE, PE, PE, PE, TP, IN, NE, NE, NE, PE, PE, NE},//Acier + Insecte
			{PE, SE, PE, NE, NE, PE, TE, PE, PE, PE, PE, IN, PE, PE, TE, IN, NE, PE},//Acier + Normal
			{PE, TE, PE, PE, PE, PE, SE, NE, NE, PE, TP, IN, PE, PE, NE, NE, NE, NE},//Acier + Plante
			{PE, NE, PE, NE, NE, TP, TE, PE, TP, PE, TP, IN, NE, PE, SE, NE, NE, PE},//Acier + Poison
			{PE, NE, PE, NE, NE, PE, TE, PE, NE, PE, PE, IN, TP, PE, TE, TE, TE, PE},//Acier + Psi
			{NE, SE, PE, TE, NE, PE, NE, PE, PE, TP, NE, IN, PE, PE, SE, NE, NE, TP},//Acier + Roche
			{PE, TE, PE, TE, IN, PE, TE, NE, PE, PE, NE, IN, PE, TP, TE, NE, NE, PE},//Acier + Sol
			{PE, IN, PE, NE, NE, PE, TE, PE, TP, IN, PE, IN, PE, PE, TE, TE, TE, PE},//Acier + Spectre
			{PE, SE, PE, NE, NE, NE, TE, PE, NE, PE, PE, IN, IN, PE, TE, PE, PE, PE},//Acier + T�n�bres
			{PE, NE, PE, NE, TE, PE, TE, NE, TP, PE, TP, IN, PE, NE, IN, NE, NE, PE}//Acier + Vol
			
			
	};
	/**
	 * Le nom du type en String
	 */
	public final String nom;
	private Type(int id, String nom){
		this.id = id;
		this.nom = nom;
	}
	/**
	 * Calcule l'efficacit� d'une type attaquant contre des types defenseurs.
	 * @param atk - Le type attaquant
	 * @param def1 - Le type defenseur 1
	 * @param def2 - Le type defenseur 2
	 * @return L'efficacit�.
	 */
	public static float calcEfficacite(Type atk, Type def1, Type def2){
		if(def2 == AUCUN){
			return tabUnType[def1.id][atk.id];
		}else{
			return 1f;
		}
	}
	
}
