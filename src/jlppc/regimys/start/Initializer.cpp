#include "Initializer.hpp"
#include "../enums/Enums.hpp"

#define ATK push_back(Stats::ATK)
#define ATKSPE push_back(Stats::ATKSPE)
#define DEFSPE push_back(Stats::DEFSPE)
#define DEF push_back(Stats::DEF)
#define VIT push_back(Stats::VIT)
#define PV push_back(Stats::PV)

namespace Initializer{


    void initEvs(){
        evs[0].ATK;

        evs[1].ATKSPE;

        evs[2].ATKSPE;
        evs[2].DEFSPE;

        evs[3].ATKSPE;
        evs[3].ATKSPE;
        evs[3].DEFSPE;

        evs[4].VIT;

        evs[5].VIT;
        evs[5].ATKSPE;

        evs[6].ATKSPE;
        evs[6].ATKSPE;
        evs[6].ATKSPE;

        evs[7].DEF;

        evs[8].DEF;
        evs[8].DEFSPE;

        evs[9].DEFSPE;
        evs[9].DEFSPE;
        evs[9].DEFSPE;

        evs[10].PV;

        evs[11].DEF;
        evs[11].DEF;

        evs[12].ATKSPE;
        evs[12].ATKSPE;
        evs[12].DEFSPE;

        evs[13].VIT;

        evs[14].DEF;
        evs[14].DEF;

        evs[15].ATK;
        evs[15].ATK;
        evs[15].DEFSPE;

        evs[16].VIT;

        evs[17].VIT;
        evs[17].VIT;

        evs[18].VIT;
        evs[18].VIT;
        evs[18].VIT;

        evs[19].VIT;

        evs[20].VIT;
        evs[20].VIT;

        evs[21].VIT;

        evs[22].VIT;
        evs[22].VIT;



    }

    void initPokemons(){
        initEvs();
        using namespace Evolutions;
         listePoke[0] = new Espece(136, 0, 1, 1, 29, 33, "MissingNo.", Type::NORMAL, Type::VOL, 0, 80, new E_Level(0, 80), evs[0], 0, 0, "ERROR : MISSINGNO.", 0, 1250000, 3, 0);
		 listePoke[1] = new Espece(49, 49, 65, 65, 45, 45, "Bulbizarre", Type::PLANTE, Type::POISON, 0, 16, new E_Level(2, 16), evs[1], 0.7, 6.9, "Il a une étrange graine plantée sur son dos. Elle grandit avec lui depuis sa naissance.", 64, 1059860, 45, 1);
		 listePoke[2] = new Espece(62, 63, 80, 80, 60, 60, "Herbizarre",Type::PLANTE, Type::POISON, 0, 32, new E_Level(3, 32), evs[2], 1, 13, "Lorsque le bourgeon sur son dos éclot, il répand un doux parfum pour célébrer sa floraison.", 141, 1059860, 45, 2);
		 listePoke[3] = new Espece(82, 83, 100, 100, 80, 80, "Florizarre", Type::PLANTE, Type::POISON, 0, -1, ne, evs[3], 2, 100, "Ses pétales lui servent à  capter la lumière du soleil. Il peut ainsi en canaliser l'énergie.", 236, 1059860, 45, 3);
		 listePoke[4] = new Espece(52, 43, 60, 50, 65, 39, "Salamèche", Type::FEU, Type::AUCUN, 0, 16, new E_Level(5, 16), evs[4] , 0.6, 8.5, "La flamme sur sa queue représente l'énergie vitale de Salamèche. Quand il est vigoureux, elle brà»le plus fort.", 65, 1059860, 45, 4);
		 listePoke[5] = new Espece(64, 58, 80, 65, 80, 58, "Reptincel", Type::FEU, Type::AUCUN, 0, 36, new E_Level(6, 36), evs[5], 1.1, 19, "En agitant sa gueue, il peut élever la température à  un niveau incroyable", 142, 1059860, 45, 5);
		 listePoke[6] = new Espece(84, 78, 109, 85, 100, 78, "Dracaufeu", Type::FEU, Type::VOL, 0, -1, ne, {Stats.ATKSPE, Stats.ATKSPE, Stats.ATKSPE}, 1.7, 90.5, "Quand il crache son souffle brà»lant, la flamme au bout de sa queue s'embrase.", 209, 1059860, 45, 6);
		 listePoke[7] = new Espece(48, 65, 50, 64, 43, 44, "Carapuce", Type::EAU, Type::AUCUN, 0, 16, new E_Level(8, 16), {Stats.DEF}, 0.5, 9, "Caché sous l'eau, il crache un jet d'eau sur sa proie et se cache à  l'intérieur de sa carapace.", 66, 1059860, 45, 7);
		 listePoke[8] = new Espece(63, 80, 65, 80, 58, 59, "Carabaffe", Type::EAU, Type::AUCUN, 0, 36, new E_Level(9, 36), {Stats.DEF, Stats.DEFSPE}, 1, 22.5,"On prétend qu'il vit 10 000 ans. Sa queue duveteuse est un symbole de longévité populaire.", 143, 1059860, 45, 8);
		 listePoke[9] = new Espece(83, 100, 85, 105, 78, 79, "Tortank", Type::EAU, Type::AUCUN, 0, -1,ne, {Stats.DEFSPE, Stats.DEFSPE, Stats.DEFSPE}, 1.6, 85.5, "Il écrase ses adversaires de tout son poids pour leur faire perdre connaissance. Il rentre dans sa carapace s'il se sent en danger.", 210, 1059860, 45, 9);
		 listePoke[10] = new Espece(30, 35, 20, 20, 45, 45, "Chenipan", Type::INSECTE, Type::AUCUN, 0, 7, new E_Level(11, 7), {Stats.PV}, 0.3, 2.9, "Ses pattes ont des ventouses lui permettant de grimper sur toute surface, notamment les arbres.", 53, 1000000, 255, 10);
		 listePoke[11] = new Espece(20, 55, 25, 25, 30, 50, "Chrysacier", Type::INSECTE, Type::AUCUN, 0, 10, new E_Level(12, 10), {Stats.DEF, Stats.DEF}, 0.7, 9.9, "Son corps frÃªle est protégé par sa carapace d'acier. Il encaisse les coups durs en attendant d'évoluer.", 72, 1000000, 120, 11);
		 listePoke[12] = new Espece(45, 50, 90, 80, 70, 60, "Papilusion", Type::INSECTE, Type::VOL, 0, -1, ne, {Stats.ATKSPE, Stats.ATKSPE, Stats.DEFSPE},1.1, 32, "Ses ailes sont recouvertes d'une poudre les protégeant de la pluie. Ce Pokémon peut donc voler pendant de grosses averses.", 160, 1000000, 45, 12);
		 listePoke[13] = new Espece(35, 30, 20, 20, 50, 40, "Aspicot", Type::INSECTE, Type::POISON, 0, 7, new E_Level(14, 7), {Stats.VIT}, 0.3, 3.2, "Son aiguillon empoisonné est très dangereux. Son corps est coloré afin de repousser ses ennemis.", 52, 1000000, 255, 13);
		 listePoke[14] = new Espece(25, 50, 25, 25, 35, 45, "Coconfort", Type::INSECTE, Type::POISON, 0, 10, new E_Level(15, 10), {Stats.DEF, Stats.DEF}, 0.6, 10, "Incapable de se déplacer de lui-mÃªme, il se défend en durcissant sa carapace.", 71, 1000000, 120, 14);
		 listePoke[15] = new Espece(80, 40, 45, 80, 75, 65, "Dardargnan", Type::INSECTE, Type::POISON, 0, -1, ne, {Stats.ATK, Stats.ATK, Stats.DEFSPE}, 1, 29.5, "Il se sert de ses trois aiguillons empoisonnés pour attaquer sans relâche ses adversaires.", 159, 1000000, 45, 15);
		 listePoke[16] = new Espece(45, 40, 35, 35, 56, 40, "Roucool", Type::NORMAL, Type::VOL, 0, 18, new E_Level(17, 18), {Stats.VIT}, 0.3, 1., "Ce Pokémon docile préfère éviter le combat. Toutefois, il se montre très féroce quand on l'agresse.", 55, 1059860, 255, 16);
		 listePoke[17] = new Espece(60, 55, 50, 50, 71, 63, "Roucoups", Type::NORMAL, Type::VOL, 0, 36, new E_Level(18, 36), {Stats.VIT, Stats.VIT}, 1.1, 30, "Il protège son territoire avec ardeur et repousse à  coup de bec tout intrus.", 113, 1059860, 120, 17);
		 listePoke[18] = new Espece(80, 75, 70, 70, 101, 83, "Roucarnage", Type::NORMAL, Type::VOL, 0, -1, ne, {Stats.VIT, Stats.VIT, Stats.VIT}, 1.5, 39.5, "Roucarnage déploie ses ailes majestueuses pour effrayer ses ennemis. Il peut voler à  Mach 2.", 172, 1059860, 45, 18);
		 listePoke[19] = new Espece(56, 35, 25, 35, 72, 30, "Rattata", Type::NORMAL, Type::AUCUN, 0, 20, new E_Level(20, 20), {Stats.VIT}, 0.3, 3.5, "Vivant là  où se trouve la nourriture, ce charognard passe ses journées à  la rechercher.", 57, 1000000, 255, 19);
		 listePoke[20] = new Espece(81, 60, 50, 70, 97, 55, "Rattatac", Type::NORMAL, Type::AUCUN, 0, -1, ne, {Stats.VIT, Stats.VIT}, 0.7, 18.5, "Ses pattes arrière lui permettent de traverser les rivières. Il est toujours en quÃªte de nourriture.", 127, 1000000, 127, 20);
		 listePoke[21] = new Espece(60, 30, 31, 31, 70, 40, "Piafabec", Type::NORMAL, Type::VOL, 0, 20, new E_Level(22, 20), {Stats.VIT}, 0.3, 2, "Il chasse les insectes dans les hautes herbes. Ses petites ailes lui permettent de voler très vite.", 58, 1000000, 255, 21);
		 listePoke[22] = new Espece(90, 65, 31, 31, 100, 65, "Rapasdepic", Type::NORMAL, Type::VOL, 0, -1, ne, {Stats.VIT, Stats.VIT}, 1.2, 3, "Il vole à  très grande vitesse et attaque en chargeant son ennemi.", 162, 1000000, 90, 22);
		 listePoke[23] = new Espece(60, 44, 40, 54, 55, 35, "Abo", Type::POISON, Type::AUCUN, 0, 22, new E_Level(24, 22), {Stats.ATK}, 2, 6.9, "Plus il est âgé, plus son corps est long. Il se love autour des arbres pour se reposer.", 62, 1000000, 255, 23);
         listePoke[24] = new Espece(85, 69, 65, 79, 80, 60, "Arbok", Type::POISON, Type::NORMAL, 0, -1, ne, {Stats.ATK, Stats.ATK}, 3.5, 65, "Pour apeurer ses ennemis, il gonfle sa poitrine et émet d'étranges sons avec sa bouche.", 147, 1000000, 90, 24);
		 listePoke[25] = new Espece(55, 40, 50, 50, 90, 35, "Pikachu", Type::ELECTRIQUE, Type::AUCUN, 0, -1, new E_Item(26, Item.getItem("Pierrefoudre")), {Stats.VIT, Stats.VIT}, 0.4, 6, "Il élève sa queue pour surveiller les environs. Elle attire souvent la foudre dans cette position.", 82, 1000000, 190, 25);
		 listePoke[26] = new Espece(90, 55, 90, 80, 110, 60, "Raichu", Type::ELECTRIQUE, Type::AUCUN, 0, -1, ne, {Stats.VIT, Stats.VIT, Stats.VIT}, 0., 30, "Il peut terrasser des ennemis bien plus imposants en libérant une décharge de 100 000 V.", 122, 1000000, 75, 26);
		 listePoke[27] = new Espece(75, 85, 20, 30, 40, 50, "Sabelette", Type::SOL, Type::AUCUN, 0, 22, new E_Level(28, 22), {Stats.DEF}, 0.6, 12, "Il s'enterre et vit dans les sous-sols. S'il se sent menacé, il se met en boule pour se protéger.", 93, 1000000, 255, 27);
		 listePoke[28] = new Espece(100, 110, 45, 55, 65, 75, "Sablaireau", Type::SOL, Type::AUCUN, 0, -1, ne, {Stats.DEF, Stats.DEF}, 1, 29.5, "Il se roule en boule hérissée de piques s'il est menacé, il peut ainsi s'enfuir ou attaquer.", 163, 1000000, 90, 28);
		 listePoke[29] = new Espece(47, 52, 40, 40, 41, 55, "Nidoran♂ ", Type::POISON, Type::AUCUN, 0, 16, new E_Level(30, 16), {Stats.PV}, 0.4, 7, "Petite et docile, elle se protège avec sa minuscule corne empoisonnée lorsqu'elle est attaquée.", 59, 1059860, 235, 29);
		 listePoke[30] = new Espece(62, 67, 55, 55, 56, 70, "Nidorina", Type::POISON, Type::AUCUN, 0, -1, new E_Item(31, Item.getItem("Pierre Lune")), {Stats.PV, Stats.PV}, 0., 20, "La femelle a un tempérament doux. Elle émet des cris ultrasoniques capables de déstabiliser ses ennemis.", 117, 1059860, 120, 30);
		 listePoke[31] = new Espece(92, 87, 75, 85, 76, 90, "Nidoqueen", Type::POISON, Type::SOL, 0, -1, ne, {Stats.PV, Stats.PV, Stats.PV}, 1.3, 60, "Son corps est recouvert d'écailles en forme de pointes. Quand ce Pokémon s'énerve, ses pointes se dressent de faà§on menaà§ante.", 194, 1059860, 45, 31);
		 listePoke[32] = new Espece(57, 40, 40, 40, 50, 46, "Nidoran♀‚", Type::POISON, Type::AUCUN, 0, 16, new E_Level(33, 16), {Stats.ATK}, 0.5, 9, "Il jauge le terrain en laissant ses oreilles dépasser de l'herbe. Il se défend avec sa corne toxique.", 60, 1059860, 235, 32);
		 listePoke[33] = new Espece(72, 57, 55, 55, 65, 61, "Nidorino", Type::POISON, Type::AUCUN, 0, -1,new E_Item(34, Item.getItem("Pierre Lune")), {Stats.ATK, Stats.ATK}, 0.9, 19.5, "Très agressif, il est prompt à  répondre à  la violence. La corne sur sa tÃªte est venimeuse.", 118, 1059860, 120, 33);
		 listePoke[34] = new Espece(102, 77, 85, 75, 85, 81, "Nidoking", Type::POISON, Type::SOL, 0, -1, ne, {Stats.ATK, Stats.ATK, Stats.ATK}, 1.4, 62, "Un coup de sa puissante queue peut briser un poteau téléphonique comme une allumette.", 195, 1059860, 45, 34);
		 listePoke[35] = new Espece(45, 48, 60, 65, 35, 70, "Mélofée", Type::FEE, Type::AUCUN, 0, -1, new E_Item(36, Item.getItem("Pierre Lune")), {Stats.PV, Stats.PV}, 06, 7.5, "La lumière de la lune qu'il emmagasine dans ses ailes dorsales lui permet de flotter dans les airs.", 68, 800000, 150, 35);
		 listePoke[36] = new Espece(70, 73, 95, 90, 60, 95, "Mélodelfe", Type::FEE, Type::AUCUN, 0, -1, ne, {Stats.PV, Stats.PV, Stats.PV}, 1.3, 40, "Il aime le calme des montagnes. Son ouà¯e exceptionnelle entendrait une aiguille tomber à  1km.", 129, 8000000, 25, 36);
		 listePoke[37] = new Espece(41, 40, 50, 65, 65, 38, "Goupix", Type::FEU, Type::AUCUN, 0, -1, new E_Item(38, Item.getItem("Pierre Feu")), {Stats.VIT}, 0.6, 9.9, "Avec l'âge, la fourrure de ses six queues devient de plus en plus belle et soyeuse. Elle est chaude au toucher.",63, 1000000, 190, 37);//TROP KAWAII!!!!
		 listePoke[38] = new Espece(76, 75, 81, 100, 100, 73, "Feunard", Type::FEU, Type::AUCUN, 0, -1, ne, {Stats.VIT, Stats.DEFSPE}, 1.1, 19.9, "Il a neuf longues queues et une fourrure qui brille comme de l'or. On dit qu'il peut vivre 1 000 ans.", 178, 1000000, 75, 38);
		 listePoke[39] = new Espece(45, 20, 45, 25, 20, 115, "Rondoudou", Type::NORMAL, Type::FEE, 0, -1, new E_Item(40, Item.getItem("Pierre Lune")), {Stats.PV, Stats.PV}, 0.5, 5.5, "En se gonflant, il peut chanter une longue berceuse qui endort inévitablement ses adversaires.", 76, 800000, 170, 39);
		 listePoke[40] = new Espece(70, 45, 85, 50, 45, 140, "Grodoudou", Type::NORMAL, Type::FEE, 0, -1, ne, {Stats.PV, Stats.PV, Stats.PV}, 1, 12, "En cas de danger, il gonfle d'air son corps doux et potelé dans des proportions gigantesques.", 109, 800000, 50, 40);
		 listePoke[41] = new Espece(45, 35, 30, 40, 55, 40, "Nosferapti", Type::POISON, Type::VOL, 0, 22, new E_Level(42, 22), {Stats.VIT}, 0., 7.5, "Ce pokemon est détesté en raison de sa forte présence dans les grottes. Malgré le fait qu'il n'aie pas d'yeux, ce pokemon arrive a voir avec des utltrasons.", 54, 1000000, 255, 41);
		 listePoke[42] = new Espece(80, 70, 65, 75, 90, 75, "Nosferalto", Type::POISON, Type::VOL, 0, -1, new E_Love(0), {Stats.VIT, Stats.VIT}, 1.6, 55, "Quand il se met à  sucer du sang, il ne s'arrÃªte qu'une fois rassasié. C'est un chasseur nocturne.", 171, 1000000, 90, 42);
		 listePoke[43] = new Espece(50, 55, 75, 65, 30, 45, "Mystherbe", Type::PLANTE, Type::POISON, 0, 21, new E_Level(44, 21), {Stats.ATKSPE}, 0.5, 5.4, "Le jour, il reste en sous-sol et évite le soleil. Il grandit en se baignant au clair de lune.", 78, 1059860, 255, 43);
		 listePoke[44] = new Espece(65, 70, 85, 75, 40, 60, "Ortide", Type::PLANTE, Type::POISON, 0, -1, new E_Item(45, Item.getItem("Pierre Plante")) , {Stats.ATKSPE, Stats.ATKSPE}, 0., 8.6, "Il sent très mauvais ! Mais une personne sur 1 000 aime la puanteur de son corps nauséabond.", 132, 1059860, 120, 44);
		 listePoke[45] = new Espece(80, 85, 110, 90, 50, 75, "Rafflesia", Type::PLANTE, Type::POISON, 0, -1, ne, {Stats.ATKSPE, Stats.ATKSPE, Stats.ATKSPE}, 1.2, 18.6, "Il possède des pétales énormes. à chaque pas, ils sèment d'épais nuages de pollen toxique.", 184, 1059860, 45, 45);
		 listePoke[46] = new Espece(70, 55, 45, 55, 25, 35, "Paras", Type::INSECTE, Type::PLANTE, 0, 24, new E_Level(47, 24), {Stats.ATK}, 0.3, 5.4, "Il s'enfouit sous terre pour ronger des racines afin de nourrir les champignons sur son dos.", 70, 1000000, 190, 46);
		 listePoke[47] = new Espece(95, 80, 60, 80, 30, 60, "Parasect", Type::INSECTE, Type::PLANTE, 0, -1, ne, {Stats.ATK, Stats.ATK, Stats.DEF}, 1, 29.5, "Un champignon parasite plus gros que Parasect contrôle son corps. Il répand des spores empoisonnées.", 128, 1000000, 75, 47);
		 listePoke[48] = new Espece(55, 50, 40, 55, 45, 60, "Mimitoss", Type::INSECTE, Type::POISON, 0, 31, new E_Level(49, 31), {Stats.DEFSPE}, 1, 30, "Il vit à  l'ombre des grands arbres où il se nourrit d'insectes. Il est attiré par la lumière.", 75, 1000000, 190, 48);
		 listePoke[49] = new Espece(65, 60, 90, 75, 90, 70, "Aéromite", Type::INSECTE, Type::POISON,0, -1, ne, {Stats.ATKSPE, Stats.VIT}, 1.5, 12.5, "Les écailles qu'il sème ont le pouvoir de paralyser totalement un ennemi.", 138, 1000000, 75, 49);
		 listePoke[50] = new Espece(55, 25, 35, 45, 95, 10, "Taupiqueur", Type::SOL, Type::AUCUN, 0, 26, new E_Level(51, 26), {Stats.VIT}, 0.2, 0., "Son épiderme est très fin. S'il est exposé au soleil, son sang se réchauffe, ce qui l'affaiblit.", 81, 1000000, 255, 50);
		 listePoke[51] = new Espece(80, 50, 50, 70, 120, 35, "Triopikeur", Type::SOL, Type::AUCUN, 0, -1, ne, {Stats.VIT, Stats.VIT}, 0.7, 33.3, "Terriblement puissants, ils peuvent creuser un tunnel dans tout type de sol et jusqu'à  100 km de profondeur.", 153, 1000000, 50, 51);
		 listePoke[52] = new Espece(45, 35, 40, 40, 90, 40, "Miaouss", Type::NORMAL, Type::AUCUN, 0, 28, new E_Level(53, 28), {Stats.VIT}, 0.4, 4.2, "Son regard s'anime à  la vue d'un objet brillant. C'est un Pokémon nocturne.", 69, 1000000, 255, 52);
		 listePoke[53] = new Espece(70, 60, 65, 65, 115, 65, "Persian", Type::NORMAL, Type::AUCUN, 0, -1, ne, {Stats.VIT, Stats.VIT}, 1, 32, "Un Pokémon très snob. La taille du joyau qui orne son front alimente bien des débats parmi ses fans.", 148, 1000000, 90, 53);
		 listePoke[54] = new Espece(52, 48, 65, 50, 55, 50, "Psykokwak", Type::EAU, Type::AUCUN, 0, 33, new E_Level(55, 33), {Stats.ATKSPE}, 0., 19.6, "Il ne se souvient pas qu'il a des pouvoirs psy. C'est pour cela qu'il a l'air si confus.", 80, 1000000, 190, 54);
		 listePoke[55] = new Espece(82, 78, 95, 80, 85, 80, "Akwakwak", Type::EAU, Type::AUCUN, 0, -1, ne, {Stats.ATKSPE, Stats.ATKSPE}, 1.7, 76.6, "Il apparaà®t dans les étendues d'eau au crépuscule. Si son front brille, il se sert de sa télékinésie.", 174, 1000000, 75, 55);
		 listePoke[56] = new Espece(80, 35, 35, 45, 70, 40, "Férosinge", Type::COMBAT, Type::AUCUN, 0, 28, new E_Level(57, 28), {Stats.ATK}, 0.5, 2, "Il ne peut dissocier ses amis de ses ennemis et a tendance à  enrager lorsqu'on l'approche.", 74, 1000000, 190, 56);
		 listePoke[57] = new Espece(105, 60, 60, 70, 95, 65, "Colossinge", Type::COMBAT, Type::AUCUN, 0, -1, ne, {Stats.ATK, Stats.ATK}, 1, 32, "Sa fureur prend fin quand il n'a plus personne à  frapper. Il est difficile d'en Ãªtre témoin.", 149, 1000000, 75, 57);
		 listePoke[58] = new Espece(70, 45, 70, 50, 60, 55, "Caninos", Type::FEU, Type::AUCUN, 0, -1, new E_Item(59, Item.getItem("Pierre Feu")), {Stats.ATK}, 0.7, 19, "Il est courageux et fier. Il se dresse vaillamment devant ses ennemis mÃªme s'ils sont plus puissants.", 91, 1250000, 190, 58);
		 listePoke[59] = new Espece(110, 80, 100, 80 , 95, 90, "Arcanin", Type::FEU, Type::AUCUN, 0, -1, ne, null ,null, {Stats.ATK, Stats.ATK}, 1.9, 155, "Son aboiement est tout simplement majestueux. On ne peut que ramper à  ses pieds après l'avoir entendu.", 213, 1250000, 75, 59);
		 listePoke[60] = new Espece(50, 40, 40, 40, 90, 40, "Ptitard", Type::EAU, Type::AUCUN, 0, 25, new E_Level(61, 25), {Stats.VIT}, 0.6, 12.4, "Sa peau est si mince qu'on voit ses organes internes. Il tient à  peine sur ses nouveaux pieds.", 77, 1059860, 255, 60);
		 listePoke[61] = new Espece(65, 65, 50, 50, 90, 65, "TÃªtarte", Type::EAU, Type::AUCUN, 0, -1, new E_Item(62, Item.getItem("Pierre Eau")), {Stats.VIT, Stats.VIT}, 1, 20, " Ce Pokémon amphibie transpire continuellement quand il est hors de l'eau afin d'hydrater son corps.", 131, 1059860, 120, 61);
		 listePoke[62] = new Espece(95, 95, 70, 90, 70, 90, "Tartard", Type::EAU, Type::COMBAT, 0, -1, ne, {Stats.DEF, Stats.DEF, Stats.DEF}, 1.3, 54, "Il possède de sacrés biscoteaux. Il peut parcourir sans relâche l'Océan Pacifique.", 185, 1059860, 45, 62);
		 listePoke[63] = new Espece(20, 15, 105, 55, 90, 25, "Abra", Type::PSY, Type::AUCUN, 0, 16, new E_Level(64, 16), {Stats.ATKSPE}, 0.9, 19.5, "Il prévoit les attaques futures et se téléporte pour se mettre à  l'abri et éviter le combat.", 75, 1059860, 200, 63);
		 listePoke[64] = new Espece(35, 30, 120, 70, 105, 40, "Kadabra", Type::PSY, Type::AUCUN, 0, -1, new E_Trade(65), {Stats.ATKSPE, Stats.ATKSPE}, 1.3, 56.5, "En utilisant ses pouvoirs, il émet des ondes alphas et cause des distorsions électroniques.", 145, 1059860, 100, 64);
		 listePoke[65] = new Espece(50, 45, 135, 95, 120, 55, "Alakazam", Type::PSY, Type::AUCUN, 0, -1, ne, {Stats.ATKSPE, Stats.ATKSPE, Stats.ATKSPE}, 1.5, 4, "Son cerveau hors du commun peut effectuer des opérations à  la vitesse d'un ordinateur. Il a un QI de 5 000.", 186, 1059860, 50, 65);
	 	 listePoke[66] = new Espece(80, 50, 35, 35, 35, 70, "Machoc", Type::COMBAT, Type::AUCUN, 0, 28, new E_Level(67, 28), {Stats.ATK}, 0., 19.5, "Son corps est essentiellement composé de muscles. MÃªme s'il a la taille d'un petit enfant, il peut soulever 100 adultes avec ses bras.", 75, 1059860, 180, 66);
		 listePoke[67] = new Espece(100, 70, 50, 60, 45, 80, "Machopeur", Type::COMBAT, Type::AUCUN, 0, -1, new E_Trade(68), {Stats.ATK, Stats.ATK}, 1.5, 70.5, "Son corps est si puissant qu'il lui faut une ceinture de force pour équilibrer ses mouvements.", 146, 1059860, 90, 67);
		 listePoke[68] = new Espece(130, 80, 65, 85, 55, 90, "Mackogneur", Type::COMBAT, Type::AUCUN, 0, -1, ne, {Stats.ATK, Stats.ATK, Stats.ATK}, 1.6, 130, "Ses deux paires de bras permettent à  Mackogneur d'envoyer une série de 1000 coups de poing en 2s.", 193, 1059860, 45, 68);
		 listePoke[69] = new Espece(75, 35, 70, 30, 40, 50, "Chétiflor", Type::PLANTE, Type::POISON, 0, 21, new E_Level(70, 21), {Stats.ATK}, 0.7, 4, "Son bourgeon ressemble à  un visage humain. Selon la légende, Chétiflor serait un type de mandragore légendaire.", 84, 1059860, 255, 69);
		 listePoke[70] = new Espece(90, 50, 85, 45, 55, 65, "Boustiflor", Type::PLANTE, Type::POISON, 0, -1, new E_Item(71, Item.getItem("Pierre Plante")), {Stats.ATK, Stats.ATK}, 1, 6.4, "Il crache de la Poudre Toxik pour immobiliser sa proie et il l'achève avec de l'Acide.", 151, 1059860, 120, 70);
		 listePoke[71] = new Espece(105, 65, 100, 70, 70, 80, "Empiflor", Type::PLANTE, Type::POISON, 0, -1, ne, {Stats.ATK, Stats.ATK, Stats.ATK}, 1.7, 15.5, "Tout corps ingéré par ce Pokémon est systématiquement dissout en bouillie.", 191, 1059860, 45, 71);
		 listePoke[72] = new Espece(40, 35, 50, 100, 70, 40, "Tentacool", Type::EAU, Type::POISON, 0, 30, new E_Level(73, 30), {Stats.DEFSPE}, 0.9, 45.5, "Il vit en bord de mer. Les pÃªcheurs se font souvent arroser d'acide quand ils en accrochent un.", 105, 1250000, 190, 72);
		 listePoke[73] = new Espece(70, 65, 80, 120, 100, 80, "Tentacruel", Type::EAU, Type::POISON, 0, -1, ne, {Stats.DEFSPE, Stats.DEFSPE}, 1.6, 55, "Ses tentacules sont rétractés au repos. En situation de chasse, ils s'allongent pour prendre ses proies au piège.", 205, 1250000, 60, 73);
		 listePoke[74] = new Espece(80, 100, 30, 30, 20, 40, "Racaillou", Type::ROCHE, Type::SOL, 0, 25, new E_Level(75, 25), {Stats.DEF}, 0.4, 20, "Il vit dans les plaines ou les montagnes. On le confond souvent avec un petit caillou.", 73, 1059860, 255, 74);
		 listePoke[75] = new Espece(95, 115, 45, 45, 35, 55, "Gravalanch", Type::ROCHE, Type::SOL, 0, -1, new E_Trade(76), {Stats.DEF, Stats.DEF}, 1, 105, "D'une nature téméraire, il se moque de perdre des parties de son corps quand il dévale les pentes.", 134, 1059860, 120, 75);
		 listePoke[76] = new Espece(120, 130, 55, 65, 45, 80, "Grolem", Type::ROCHE, Type::SOL, 0, -1, ne, {Stats.DEF, Stats.DEF, Stats.DEF}, 1.4, 300, "Aucun explosif ne pourrait entamer sa carapace de pierre. Il mue une fois par an.", 177, 1059860, 45, 76);
		 listePoke[77] = new Espece(85, 55, 65, 65, 90, 50, "Ponyta", Type::FEU, Type::AUCUN, 0, 40, new E_Level(48, 40), {Stats.VIT}, 1, 30, "    Chancelantes à  la naissance, ses pattes deviennent très vite sà»res et solides à  force de galoper.", 152, 1000000, 190, 77);
		 listePoke[78] = new Espece(100, 70, 80, 80, 105, 65, "Galopa", Type::FEU, Type::AUCUN, 0, -1, ne, {Stats.VIT, Stats.VIT}, 1.7, 95, "Au grand galop, sa crinière de feu disperse au vent une myriade d'étincelles ardentes.", 192, 1000000, 60, 78);
		 listePoke[79] = new Espece(65, 65, 40, 40, 15, 90, "Ramoloss", Type::EAU, Type::PSY, 0, 37, new E_Level(80, 37), {Stats.PV}, 1.2, 36, "Il est tellement paresseux qu'il lui faut une journée pour remarquer qu'on lui mord la queue.", 99, 1000000, 190, 79);
		 listePoke[80] = new Espece(75, 110, 100, 80, 30, 95, "Flagadoss", Type::EAU, Type::PSY, 0, -1, ne, {Stats.DEF, Stats.DEF}, 1.6, 78.5, "Le Kokiyas accroché à  sa queue est friand de ce qu'il dévore et ne veut pas lâcher prise.", 164, 1000000, 75, 80);
		 listePoke[81] = new Espece(35, 70, 95, 55, 45, 25, "Magneti", Type::ELECTRIQUE, Type::ACIER, 0, 30, new E_Level(81, 30), {Stats.ATKSPE},0.3, 6, "Les parties sur les côtés de son corps génèrent une énergie lui permettant de léviter.", 89, 1000000, 190, 81);
		 listePoke[82] = new Espece(60, 95, 120, 70, 70, 50, "Magnéton", Type::ELECTRIQUE, Type::ACIER, Espece.EVOLUTION_BY_PLACE, -1, new E_Land(0, "Grotte Electrac"), {Stats.ATKSPE, Stats.ATKSPE}, 1, 60, "Des groupes apparaissent si des taches solaires couvrent le soleil. Il brouillent les télévisions.", 161, 1000000, 60, 82);
		 listePoke[83] = new Espece(65, 55, 58, 62, 52, 52, "Canarticho", Type::NORMAL, Type::VOL, 0, -1, ne, {Stats.ATK}, 0., 15, "Il utilise le légume qu'il tient comme s'il s'agissait d'une épée.", 94, 1000000, 45, 83);
		 listePoke[84] = new Espece(85, 45, 35, 35, 75, 35, "Doduo", Type::NORMAL, Type::VOL, 0, 31, new E_Level(31, 85), {Stats.ATK}, 1.4, 39.2, "Ses deux cerveaux semblent communiquer leurs émotions grâce à  un lien télépathique.", 96, 1000000, 190, 84);
		 listePoke[85] = new Espece(110, 70, 60, 60, 110, 60, "Dodrio", Type::NORMAL, Type::VOL, 0, -1, ne, {Stats.ATK, Stats.ATK}, 1., 85.2, "Un ennemi ne faisant pas attention à  l'une des trois tÃªtes pendant une seconde se fait picorer.", 158, 1000000, 45, 85);
		 listePoke[86] = new Espece(45, 55, 45, 70, 45, 65, "Otaria", Type::EAU, Type::AUCUN, 0, 34, new E_Level(34, 87), {Stats.DEFSPE}, 1.1, 90, "Un habitant des icebergs. En mer, il utilise la corne sur sa tÃªte pour briser la banquise.", 100, 1000000, 190, 86);
		 listePoke[87] = new Espece(70, 80, 70, 95, 70, 90, "Lamantine", Type::EAU, Type::GLACE, 0, -1, ne, {Stats.DEFSPE, Stats.DEFSPE}, 1.7, 120, "Son corps hydrodynamique glisse dans l'eau. Plus l'eau est froide plus il se sent à  l'aise.", 176, 1000000, 75, 87);
		 listePoke[88] = new Espece(80, 50, 40, 50, 25, 80, "Tadmorv", Type::POISON, Type::AUCUN, 0, 38, new E_Level(38, 89), {Stats.PV}, 0.9, 30, "Vivant dans des tas d'ordures, il se nourrit des déchets polluants rejetés par les usines.", 90, 1000000, 190, 88);
		 listePoke[89] = new Espece(105, 75, 65, 100, 50, 105, "Grotadmorv", Type::POISON, Type::AUCUN, 0, -1, ne, {Stats.PV, Stats.ATK}, 1.2, 30, "Son corps exsude un fluide toxique qui tue instantanément les plantes et les arbres au contact.", 157, 1000000, 75, 89);
		 listePoke[90] = new Espece(65, 100, 45, 25, 40, 30, "Kokiyas", Type::EAU, Type::AUCUN, 0, -1, new E_Item(91, Item.getItem("Pierre Feu")), {Stats.DEF}, 0.3, 4, "Il se referme sur un ennemi pour attaquer mais ceci le rend vulnérable et il ne le fait que rarement.", 97, 1250000, 190, 90);
		 listePoke[91] = new Espece(95, 180, 85, 45, 70, 50, "Crustabri", Type::EAU, Type::GLACE, 0, -1, ne, {Stats.DEF, Stats.DEF}, 1.5, 132.5, "Sa coquille est extrÃªmement résistante. Rien ne peut la détruire, pas mÃªme une bombe. Il ne l'ouvre que lorsqu'il attaque.", 203, 1250000, 60, 91);
		 listePoke[92] = new Espece(35, 30, 100, 35, 80, 30, "Fantominus", Type::SPECTRE, Type::POISON, 0, 25,new E_Level(93, 25), {Stats.ATKSPE}, 1.3, 0.1, "Son corps composé de gaz toxique pourrait asphyxier n'importe qui en quelques secondes.", 95, 1059860, 190, 92);
		 listePoke[93] = new Espece(50, 45, 115, 55, 95, 45, "Spectrum", Type::SPECTRE, Type::POISON, 0, -1, new E_Trade(94), {Stats.ATK, Stats.ATK}, 1.6, 0.2, "Il vole l'énergie vitale de l'ennemi d'un coup de langue gazeuse. Il aime chasser dans l'ombre.", 126, 1059860, 90, 93);
		 listePoke[94] = new Espece(65, 60, 130, 75, 110, 60, "Ectoplasma", Type::SPECTRE, Type::POISON, 0, -1, ne, {Stats.ATKSPE, Stats.ATKSPE, Stats.ATKSPE}, 1.5, 40.5, "Si vous frissonnez soudainement, c'est qu'un Ectoplasma en veut à  votre vie. Vous ne pouvez y échapper. Abandonnez toute espérance.", 190, 1059860, 45, 94);
 		 listePoke[95] = new Espece(45, 160, 30, 45, 70, 35, "Onix", Type::ROCHE, Type::SOL, 0, -1, ne, {Stats.DEF}, 8., 210, "Onix vit généralement sous terre. Il cherche de la nourriture en creusant à  plus de 80km/h.", 108, 1000000, 45, 95);
		 listePoke[96] = new Espece(48, 45, 43, 90, 42, 60, "Soporifik", Type::PSY, Type::AUCUN, 0, 26,new E_Level(97, 26), {Stats.DEFSPE}, 1, 32, "Si vous pensez avoir rÃªvé mais que vous ne vous en souvenez pas, c'est que Soporifik a tout mangé.", 102, 1000000, 190, 96);
		 listePoke[97] = new Espece(73, 70, 73, 115, 67, 85, "Hypnomade", Type::PSY, Type::AUCUN, 0, -1, ne, {Stats.DEFSPE, Stats.DEFSPE}, 1, 75, "La vue de son pendule oscillant endort en trois secondes, mÃªme quand on vient de se réveiller.", 165, 1000000, 75, 97);
		 listePoke[98] = new Espece(105, 90, 25, 25, 50, 30, "Krabby", Type::EAU, Type::AUCUN, 0, 28,new E_Level(99, 28), {Stats.ATK}, 0.4, 6.5, "Il creuse son terrier sur des plages sablonneuses. Ses pinces repoussent si on les brise.", 115, 1000000, 255, 98);
		 listePoke[99] = new Espece(130, 115, 50, 50, 75, 55, "Kraboss", Type::EAU, Type::AUCUN, 0, -1, ne, {Stats.ATK, Stats.ATK}, 1.3, 60, "Sa pince devient énorme. S'il la soulève trop vite, il risque de perdre l'équilibre.", 206, 1000000, 60, 99);
		 listePoke[100] = new Espece(30, 50, 55, 55, 100, 40, "Voltorbe", Type::ELECTRIQUE, Type::AUCUN, 0, 30,new E_Level(101, 30), {Stats.ATK, Stats.ATK}, 0.5, 10.4, "DÃ©couvert en mÃªme temps que les Poké Balls. Il paraà®t qu'il existe un lien entre les deux.", 103, 1000000, 190, 100);
		 listePoke[101] = new Espece(50, 70, 80, 80, 140, 60, "Electrode", Type::ELECTRIQUE, Type::AUCUN, 0, -1, ne, {Stats.VIT, Stats.VIT}, 1.2, 66.6, "Il stocke tellement d'énergie dans son corps qu'une simple secousse peut le faire exploser.", 150, 1000000, 60, 101);
		 listePoke[102] = new Espece(40, 80, 60, 45, 140, 60, "Noeunoeuf", Type::PLANTE, Type::PSY, 0, -1, new E_Item(103, Item.getItem("Pierre Plante")), {Stats.DEF}, 0.4, 2.5, "Il stocke tellement d'énergie dans son corps qu'une simple secousse peut le faire exploser.", 98, 1250000, 90, 102);
		 listePoke[103] = new Espece(95, 85, 125, 65, 55, 95, "Noadkoko", Type::PLANTE, Type::PSY, 0, -1, ne, {Stats.DEF}, 2, 120, "Il stocke tellement d'énergie dans son corps qu'une simple secousse peut le faire exploser.", 215, 1250000, 45, 103);
		 listePoke[104] = new Espece(50, 95, 40, 50, 35, 50, "Osselait", Type::SOL, Type::AUCUN, 0, 28,new E_Level(105, 28), {Stats.DEF}, 0.4, 6.5, "Il porte constamment le crâne de sa mère. Personne ne sait à  quoi il ressemble sans ce crâne.", 87, 1000000, 190, 104);
		 listePoke[105] = new Espece(80, 110, 50, 80, 45, 60, "Ossatueur", Type::SOL, Type::AUCUN, 0, -1, ne, {Stats.DEF, Stats.DEF}, 1, 45, "Il porte constamment le crâne de sa mère. Personne ne sait à  quoi il ressemble sans ce crâne.", 124, 1000000, 75, 105);
		 listePoke[106] = new Espece(120, 53, 35, 110, 87, 50, "Kicklee", Type::COMBAT, Type::AUCUN, 0, -1, ne, {Stats.ATK, Stats.ATK}, 1.4, 49., "Ses pattes élastiques s'allongent, ce qui ne manque jamais de surprendre au premier combat.", 139, 1000000, 45, 106);
		 listePoke[107] = new Espece(105, 79, 35, 110, 76, 50, "Tygnon", Type::COMBAT, Type::AUCUN, 0, -1, ne, {Stats.DEFSPE, Stats.DEFSPE}, 1.4, 50.2, "MÃªme le béton cède sous ses poings dévastateurs. Au combat, il s'essouffle au bout de 3 minutes.", 140, 1000000, 45, 107);
        	 listePoke[108] = new Espece(55, 75, 60, 75, 30, 90, "Excelangue", Type::NORMAL, Type::AUCUN, 0, -1, ne, {Stats.PV, Stats.PV}, 1.2, 65.5, "Chaque fois qu'Excelangue découvre quelque chose de nouveau, il le lèche. Sa mémoire est basée sur le goà»t et la texture des objets. Il n'aime pas les choses acides.", 127, 1000000, 45, 108);
		 listePoke[109] = new Espece(65, 95, 60, 45, 35, 40, "Smogo", Type::POISON, Type::AUCUN, 0, 35,new E_Level(110, 35), {Stats.DEF}, 0.6, 1, "Son corps très fin en forme de ballon est rempli d'un horrible gaz toxique. L'air est nauséabond à  proximité de ce Pokémon.", 114, 1000000, 190, 109);
		 listePoke[110] = new Espece(90, 120, 85, 70, 60, 65, "Smogogo", Type::POISON, Type::AUCUN, 0, -1, ne, {Stats.DEF}, 1.2, 9.5, "Il peut arriver que deux Smogo mutent et s'associent pour former un Smogogo, mais c'est très rare.", 173, 1000000, 60, 110);
		 listePoke[111] = new Espece(85, 95,  30, 30, 25, 30, "Rhinocorne", Type::SOL, Type::ROCHE,0, 42, new E_Level(112, 42), {Stats.DEF}, 1, 115, "Ses petites jambes ne lui permettent pas de tourner facilement. Il ne peut charger que tout droit.", 135, 1250000, 120, 111);
		 listePoke[112] = new Espece(130, 120, 45, 45, 40, 105, "Rhinoféros", Type::SOL, Type::ROCHE,0, -1, new E_TradeItem(0, Item.getItem("Protecteur")), {Stats.ATK, Stats.ATK}, 1.9, 120, "Son épiderme très épais lui permet de survivre dans un environnement où il fait plus de 2000Ã‚Â°c.", 204, 1250000, 60, 112);
		 listePoke[113] = new Espece(5, 5, 35, 105, 50, 250, "Leveinard", Type::NORMAL, Type::AUCUN,0, -1, ne, {Stats.PV, Stats.PV}, 1.1, 34.6, "Il est censé apporter la joie. Ce Pokémon charitable offre ses Ã…Â“ufs aux blessés.", 395, 800000, 30, 113);
		 listePoke[114] = new Espece(55, 115, 100, 40, 60, 65, "Saquedeneu", Type::PLANTE, Type::AUCUN, 0, -1, ne, {Stats.DEF}, 1, 35, "Il paralyse tout ce qui bouge avec ses lianes. Elles vous chatouillent si vous Ãªtes capturé.", 166, 1000000, 45, 114);
		 listePoke[115] = new Espece(95, 80, 40, 80, 90, 105, "Kangourex", Type::NORMAL, Type::AUCUN, 0, -1, ne, {Stats.PV, Stats.PV}, 2.2, 80, "Il élève ses petits dans sa poche ventrale. Il attend d'Ãªtre en lieu sà»r pour les laisser jouer dehors.", 175, 1000000, 45, 115);
		 listePoke[116] = new Espece(40, 70, 70, 25, 60, 30, "Hypotrempe", Type::EAU, Type::AUCUN, 0, 32, new E_Level(117, 32), {Stats.ATKSPE}, 0.4, , "Il abat les insectes volants en leur tirant un jet d'encre depuis la surface de l'eau. Ses tirs sont toujours précis.", 83, 1059860, 255, 116);
         	 listePoke[117] = new Espece(65, 95, 95, 45, 85, 55, "Hypocéan", Type::EAU, Type::AUCUN, 0, -1, ne, {Stats.DEF, Stats.ATKSPE}, 1.2, 25, "Il peut nager à  l'envers en agitant ses petites nageoires pectorales.", 155, 1000000, 75, 117);
		 listePoke[118] = new Espece(67, 60, 35, 50, 63, 45, "Poissirène", Type::EAU, Type::AUCUN, 0, 33, new E_Level(119, 33), {Stats.ATK}, 0.6, 15, "Ses nageoires dorsales et pectorales bougent avec élégance. Il est surnommé le danseur des flots", 111, 1000000, 225, 118);
		 listePoke[119] = new Espece(92, 65, 65, 80, 68, 80, "Poissoroy", Type::EAU, Type::AUCUN, 0, -1, ne, {Stats.ATK, Stats.ATK}, 1.3, 39, "Il niche dans les rochers du ruisseau qu'il évide avec sa corne. Il donnerait sa vie pour ses Ã…Â’ufs.", 170, 1000000, 60, 119);
		 listePoke[120] = new Espece(45, 55, 70, 55, 85, 30, "Stari", Type::EAU, Type::AUCUN, 0, -1, new E_Item(121, Item.getItem("Pierre Eau")), {Stats.VIT}, 0., 34.5, "MÃªme si son corps est détruit, il peut se régénérer aussi longtemps que son cÃ…Â“ur est en bon état.", 106, 1250000, 225, 120);
		 listePoke[121] = new Espece(75, 85, 100, 85, 115, 60, "Staross", Type::EAU, Type::AUCUN, 0, -1, ne, {Stats.VIT, Stats.VIT}, 1.1, 80, "Son cÃ…Â“ur brille des couleurs de l'arc-en-ciel. On raconte que c'est une pierre précieuse.", 207, 1250000, 60, 121);
		 listePoke[122] = new Espece(45, 65, 100, 120, 90, 40, "M.Mime", Type::PSY, Type::FEE, 0, -1, ne, {Stats.DEFSPE, Stats.DEFSPE}, 1.3, 54.5, "Il adore imiter les gens. On le dit capable de créer de véritables murs pour les migrants juste en les mimant.", 136, 10000000, 45, 122);
		 listePoke[123] = new Espece(110, 80, 55, 80, 105, 70, "Insecateur", Type::INSECTE, Type::VOL, 0, -1, ne, {Stats.ATK}, 1.5, 56, "Il fauche les herbes avec ses lames acérées. Il bouge si vite qu'on ne peut le voir à  l'Ã…Â“il nu.", 187, 1000000, 45, 123);//TODO evolution a completer
		 listePoke[124] = new Espece(50, 35, 115, 95, 95, 65, "Lippoutou", Type::GLACE, Type::PSY, 0, -1, ne, {Stats.ATKSPE, Stats.ATKSPE}, 1.4, 40.6, "Elle communique en utilisant un langage qui semble Ãªtre humain. Des recherches sont en cours pour déterminer ce qu'elle dit.", 137, 1000000, 45, 124);
		 listePoke[125] = new Espece(83, 87, 95, 85, 105, 65, "Elektek", Type::ELECTRIQUE, Type::AUCUN, 0, -1, ne, {Stats.VIT, Stats.VIT}, 1.1, 30, "Il adore se nourrir d'électricité. Il apparaà®t occasionnellement près des grandes centrales électriques.", 156, 1000000, 45, 125);
		 listePoke[126] = new Espece(95, 57, 100, 85, 93, 65, "Magmar", Type::FEU, Type::AUCUN, 0, -1, ne, {Stats.ATKSPE, Stats.ATKSPE}, 1.3, 44.5, "On trouve ce Pokémon près des bouches de volcans. Son corps incandescent atteint 1 200 Ã‚Â°C.", 127, 1000000, 45, 126);
		 listePoke[127] = new Espece(125, 100, 55, 70, 85, 65, "Scarabrute", Type::INSECTE, Type::AUCUN, 0, -1, ne, {Stats.ATK, Stats.ATK}, 1.5, 55, "Il attaque sauvagement avec ses cornes. En hiver, il se cache au plus profond des forÃªts.", 200, 1250000, 45, 127);
		 listePoke[128] = new Espece(100, 95, 40, 70, 110, 75, "Tauros", Type::NORMAL, Type::AUCUN, 0, -1, ne, {Stats.ATK, Stats.VIT}, 1.4, 88.4, "Juste avant d'utiliser Charge, ce Pokémon agite frénétiquement ses trois grandes queues.", 211, 1250000, 45, 128);
		 listePoke[129] = new Espece(10, 55, 15, 20, 80, 20, "Magicarpe", Type::EAU, Type::AUCUN, 0, 20, new E_Level(130, 20), {Stats.VIT}, 0.9, 10, "Ce pokémon ne mérite mÃªme pas  de description tellement il respire l'inutilité", 20, 1250000, 255, 129);
		 listePoke[130] = new Espece(95, 125, 79, 60, 100, 81, "Léviator", Type::EAU, Type::VOL, 0, -1, ne, {Stats.VIT, Stats.VIT}, 6.5, 235, "La littérature ancienne fait état d'un Léviator qui aurait rasé un village sous le coup de la colère.", 214, 1250000, 40, 130);
		 listePoke[131] = new Espece(85, 80, 85, 95, 60, 130, "Lokhlass", Type::EAU, Type::GLACE, 0, -1, ne, {Stats.PV, Stats.PV}, 2.5, 220, "Ils sont d'une nature gentille. Comme ils se défendent rarement, ils sont en voie d'extinction.", 219, 1250000, 45, 131);
		 listePoke[132] = new Espece(48, 48, 48, 48, 48, 48, "Métamorph", Type::NORMAL, Type::AUCUN, 0, -1, ne, {Stats.PV}, 0.3, 4, "Métamorph peut modifier sa structure moléculaire pour prendre d'autres formes. Lorsqu'il essaie de se transformer de mémoire, il lui arrive de se tromper sur certains détails.", 61, 1000000, 35, 132);
                 listePoke[133] = new Espece(55, 50, 45, 65, 55, 55, "Evoli", Type::NORMAL, Type::AUCUN, 0, -1, new E_Item(134, Item.getItem("Pierre Eau")), {Stats.DEFSPE}, 0.3, 6.5, "L'ADN de ce Pokémon très particulier recèle de nombreuses possibilités d'évolution.", 92, 1000000, 45, 133);
         	 listePoke[134] = new Espece(65, 60, 110, 95, 65, 130, "Aquali", Type::EAU, Type::AUCUN, 0, -1, ne, {Stats.PV, Stats.PV}, 1, 29, "Il a évolué pour s'adapter au milieu aquatique. Il peut se fondre et disparaà®tre dans l'élément liquide.",  196, 1000000, 45, 134);
	         listePoke[135] = new Espece(65, 60, 110, 95, 130, 65, "Voltali", Type::ELECTRIQUE, Type::AUCUN, 0, -1, ne, {Stats.VIT, Stats.VIT}, 0., 24.5, "Chaque poil sur son corps se dresse quand il se charge en électricité.", 197, 1000000, 45, 135);
	         listePoke[136] = new Espece(130, 60, 95, 110, 65, 65, "Pyroli", Type::FEU, Type::AUCUN, 0, -1, ne, {Stats.ATK, Stats.ATK}, 0.9, 25.9, "Son corps contient une glande enflammée. Sa température monte à  900Ã‚Â°C avant le combat.", 198, 1000000, 45, 136);
		 listePoke[137] = new Espece(60, 70, 85, 75, 40, 65, "Porygon", Type::NORMAL, Type::AUCUN, 0, -1, new E_TradeItem(0, Item.getItem("Ameliorator")), {Stats.ATK}, 0., 36.5, "Ce Pokémon a été développé en Java, il adore se fofiler dans les programmes pour tout modifier.", 133, 1000000, 45, 137);
		 listePoke[138] = new Espece(40, 100, 90, 55, 35, 35, "Amonita", Type::ROCHE, Type::EAU, 0, 40,new E_Level(138, 40), {Stats.DEF}, 0.4, 7.5, "Recréé à  partir d'un fossile, il utilise l'air dans sa coquille pour s'enfoncer dans l'eau ou faire surface.", 99, 1000000, 45, 138);
		 listePoke[139] = new Espece(60, 125, 115, 70, 55, 70, "Amonistar", Type::ROCHE, Type::EAU, 0, -1, ne, {Stats.DEF, Stats.DEF}, 1, 35, "Une fois enroulé autour de sa proie, il ne la laisse pas repartir et la dévore avec ses crocs.", 199, 1000000, 45, 139);
		 listePoke[140] = new Espece(80, 90, 55, 45, 55, 30, "Kabuto", Type::ROCHE, Type::EAU, 0, 40,new E_Level(140, 40), {Stats.DEF}, 0.5, 11.5, "Ce Pokémon a été reconstitué à  partir du fossile d'une ancienne créature. Il se protège à  l'aide de sa carapace.", 99, 1000000, 45, 140);
		 listePoke[141] = new Espece(115, 105, 65, 70, 80, 60, "Kabutops", Type::ROCHE, Type::EAU, 0, -1,new E_Level(140, 40), {Stats.ATK, Stats.ATK}, 1.3, 40.5, "C'est un très bon nageur. Il lacère sa proie de ses longues griffes et en absorbe les fluides corporels.", 199, 1000000, 45, 141);
		 listePoke[142] = new Espece(105, 65, 60, 75, 130, 80, "Ptéra", Type::ROCHE, Type::VOL, 0, -1, ne, {Stats.VIT, Stats.VIT}, 1., 59, "Ce terrible Pokémon a dominé les cieux d'une autre époque, terrorisant ses ennemis.", 202, 1250000, 45, 142);
		 listePoke[143] = new Espece(110, 65, 65, 110, 30, 160, "Ronflex", Type::NORMAL, Type::AUCUN, 0, -1, ne, {Stats.PV, Stats.PV}, 2.1, 460, "Les journées de Ronflex se résument aux repas et aux siestes. IL est tellement gentil que les enfants n'hésitent pas à  jouer sur son énorme ventre.", 154, 1250000, 25, 143);
		 listePoke[144] = new Espece(85, 100, 95, 125, 85, 90, "Artikodin", Type::ELECTRIQUE, Type::VOL, 0, -1, ne, {Stats.DEFSPE, Stats.DEFSPE, Stats.DEFSPE}, 1.7, 55.4, "Le légendaire oiseau des glaces. On dit qu'il apparaà®t aux gens perdus dans les sommets.", 215, 1250000, 3, 144);
		 listePoke[145] = new Espece(90, 85, 125, 90, 100, 90, "Electhor", Type::ELECTRIQUE, Type::VOL, 0, -1, ne, {Stats.ATKSPE, Stats.ATKSPE, Stats.ATKSPE}, 1.6, 52.6, "Un Pokémon Oiseau légendaire dont on dit qu'il vit dans les nuages d'orage. Il contrôle la foudre.", 216, 1250000, 3, 145);
		 listePoke[146] = new Espece(100, 90, 125, 85, 90, 90, "Sulfura", Type::FEU, Type::VOL, 0, -1, ne, {Stats.ATKSPE, Stats.ATKSPE, Stats.ATKSPE}, 2, 60, "C'est un Pokémon oiseau légendaire capable de contrôler le feu. On raconte que lorsqu'il est blessé, il se baigne dans le magma d'un volcan pour se soigner.", 217, 1250000, 3, 146);
                 listePoke[147] = new Espece(64, 45, 50, 50, 50, 41, "Minidraco", Type::DRAGON, Type::AUCUN, 0, 0,new E_Level(148, 30), {Stats.ATK}, 1., 3.3, "Minidraco mue constamment, renouvelant sans arrÃªt sa peau. En effet, l'énergie vitale de son corps augmente régulièrement et sa mue lui permet d'éviter d'atteindre des niveaux incontrôlables.", 67, 1250000, 45, 147);
		 listePoke[148] = new Espece(84, 65, 70, 70, 70, 61, "Draco", Type::DRAGON, Type::AUCUN, 0, 1,new E_Level(149, 55), {Stats.ATK, Stats.ATK}, 4, 16.5, "Draco stocke une quantité d'énergie considérable dans son corps. On raconte qu'il peut modifier les conditions climatiques autour de lui en déchargeant l'énergie contenue dans les cristaux de son cou et de sa queue.", 144, 1250000, 45, 148);
		 listePoke[149] = new Espece(134, 95, 100, 100, 80, 91, "Dracoloss", Type::DRAGON, Type::VOL, 0, -1, ne, {Stats.ATK, Stats.ATK, Stats.ATK}, 2.2, 210, "On raconte qu'il vit quelque part en mer. Il guide les équipages naufragés jusqu'à  la terre ferme.", 218, 1250000, 45, 149);
		 listePoke[150] = new Espece(110, 90, 154, 90, 130, 106, "Mewtwo", Type::PSY, Type::AUCUN, 0, -1, ne, {Stats.ATKSPE, Stats.ATKSPE, Stats.ATKSPE}, 2, 122, "Il est le fruit de nombreuses expériences génétiques horribles et malsaines.", 220, 1250000, 3, 150);
	         listePoke[151] = new Espece(100, 100, 100, 100, 100, 100, "Mew",  Type::PSY, Type::AUCUN, 0, -1, ne, {Stats.PV, Stats.PV, Stats.PV}, 0.4, 4, "Nombre de scientifiques voient en lui l'ancÃªtre des Pokémon car il maà®trise toutes leurs capacités.", 64, 1059860, 45, 151);
		 listePoke[152] = new Espece(49, 65, 45, 69, 45, 45, "Germignon", Type::PLANTE, Type::AUCUN, 0, 16, new E_Level(153, 16), {Stats.DEFSPE}, 0.9, 6.4, "Un doux parfum émane de la feuille placée sur sa tÃªte. Il est très gentil et aime dormir au soleil.", 64, 1059860, 45, 152);
		 listePoke[153] = new Espece(62, 80, 63, 80, 60, 60, "Macronium", Type::PLANTE, Type::AUCUN, 0, 32, new E_Level(154, 32), {Stats.DEF, Stats.DEFSPE}, 1.2, 15.,  "Le collier de bourgeons Ã  son cou répand un arÃ´me épicé qui vous donne du tonus", 141, 1059860, 45, 153);
		 listePoke[154] = new Espece(82, 100, 83, 100, 80, 80 , "Méganium", Type::PLANTE, Type::AUCUN, 0, -1, ne, {Stats.DEF, Stats.DEFSPE,Stats.DEFSPE}, 1., 100.5, "L'arÃ´me qui émane de ses pétales contient une substance qui calme les pulsions sexuelles.", 208, 1059860, 45, 154);
		 listePoke[155] = new Espece(52, 43, 60, 50, 65, 39 , "Héricendre", Type::FEU, Type::AUCUN, 0, 14, new E_Level(156, 14), {Stats.VIT}, 0.5, 7.9, " Il est timide et se roule en boule pour se protéger. Attaqué, il s'enflamme le dos pour riposter.", 65, 1059860, 45, 155);
		 listePoke[156] = new Espece(64, 58, 80, 65, 80, 58 ,"Feurisson", Type::FEU, Type::AUCUN, 0, 36, new E_Level(157, 36), {Stats.ATKSPE, Stats.VIT}, 0.9, 19, "Avant chaque combat, il tourne le dos et montre la puissance de sa queue", 142, 1059860, 45, 156);
		 listePoke[157] = new Espece(84, 78, 109, 85, 100, 78, "Typlosion", Type::FEU, Type::AUCUN, 0, -1, ne, {Stats.ATKSPE, Stats.ATKSPE, Stats.ATKSPE}, 1.7, 79.5, "Il a un coup secret dévastateur. En frottant sa fourrure ardente, il crée une forte explosion.", 209, 1059860, 45, 157);
		 listePoke[158] = new Espece(65, 64, 44, 48, 43, 50, "Kaiminus", Type::EAU, Type::AUCUN, 0, 18, new E_Level(158, 18), {Stats.ATK}, 9,5, "Petit mais costaud, il n'hésite pas Ã  mordre tout ce qui passe Ã  portée de ses dents.", 66, 1059860, 45, 158);
		 listePoke[159] = new Espece(80, 80, 59, 63, 58, 65, "Crocrodil", Type::EAU, Type::AUCUN, 0, 30, new E_Level(159, 30), {Stats.ATK, Stats.DEF}, 1.1, 25, "Quand il perd un croc, il en repousse un autre. Sa bouche est en permanence composée de 48 dents.", 143, 1059860, 45, 159);
		 listePoke[160] = new Espece(105, 100, 79, 83, 78, 85, "Aligatueur", Type::EAU, Type::AUCUN, 0, -1, ne, {Stats.ATK, Stats.ATK, Stats.DEF}, 2.3, 88., "Ce Pokémon Ã  l'air pataud est capable d'attaquer Ã  la vitesse de l'éclair pour mordre sa proie.", 210, 1059860, 45, 160);
		 listePoke[161] = new Espece(46, 34, 35, 45, 20, 35, "Fouinette", Type::NORMAL, Type::AUCUN, 0, 15, new E_Level(162, 15), {Stats.ATK}, 0., 6, "S'il fait le guet, il prévient les autres d'un danger en criant et en frappant avec sa queue le sol.", 57, 1000000, 255, 161);
		 listePoke[162] = new Espece(76, 64, 45, 55, 90, 85, "Fouinar", Type::NORMAL, Type::AUCUN, 0, -1, ne, {Stats.VIT, Stats.VIT}, 1., 32.5, "Il fabrique un nid qui convient Ã  son corps très fin, et oÃ¹ lui seul peut entrer.", 116, 1000000, 90, 162);
		 listePoke[163] = new Espece(30, 30, 36, 56, 50, 60, "Hoothoot", Type::NORMAL, Type::VOL, 0, 20, new E_Level(164, 20), {Stats.PV}, 0.7, 21.2, "Il a un sens du timing parfait. Il reste toujours en rythme en balanÃ§ant la tÃªte.", 58, 1000000, 255, 163);
		 listePoke[164] = new Espece(50, 50, 86, 96, 70, 100, "Noarfang", Type::NORMAL, Type::VOL, 0, -1, ne, {Stats.PV, Stats.PV}, 1.6, 40., "Quand il réfléchit, il tourne sa tête sur 180° pour optimiser son mode de pensée.", 162, 1000000, 90, 164);
		 listePoke[165] = new Espece(20, 30, 40, 80, 55, 40, "Coxy", Type::INSECTE, Type::VOL, 0, 18, new E_Level(166, 18), {Stats.DEFSPE}, 1, 10., "Il est timide et reste près de ses semblables. Il a un sens du toucher très développé.", 54, 1000000, 255, 165);
		 listePoke[166] = new Espece(35, 50, 55, 110, 85, 55, "Coxyclaque", Type::INSECTE, Type::VOL, 0, -1, ne, {Stats.DEFSPE}, 1.4, 35.6, "Les points sur son dos deviennent plus grands ou plus petits selon le nombre d'étoiles dans le ciel.", 134, 800000, 90, 166);
		 listePoke[167] = new Espece(60, 40, 40, 40, 30, 40, "Mimigal", Type::INSECTE, Type::POISON, 0, 22, new E_Level(168, 22), {Stats.ATK}, 0.5, 8.5, "Il tisse une toile en utilisant un fil fin mais solide, puis il attend tranquillement sa proie.", 54, 800000, 255, 167);
		 listePoke[168] = new Espece(90, 70, 60, 70, 40, 70, "Migalos", Type::INSECTE, Type::POISON, 0, -1, ne, {Stats.ATK, Stats.ATK}, 1.1, 33.5, "Il attache un fil à sa proie avant de la libérer. Il s'en servira pour la retrouver, elle et ses amis.", 134, 800000, 90, 168);
		 listePoke[169] = new Espece(90, 80, 70, 80, 130, 85, "Nostenfer", Type::POISON, Type::VOL, 0, -1, ne , {Stats.VIT ,Stats.VIT, Stats.VIT}, 1., 75, "Ses quatre ailes lui permettent de voler furtivement pour approcher ses proies sans les effrayer.", 204, 1000000, 90, 169);
		 listePoke[170] = new Espece(38, 38, 56, 56, 67, 75, "Loupio", Type::EAU, Type::ELECTRIQUE, 0, 27, new E_Level(171, 27), {Stats.PV}, 0.5, 12, "Il émet avec ses antennes des impulsions positives et négatives qui peuvent électrocuter ses ennemis.", 90, 1250000, 190, 170);
		 listePoke[171] = new Espece(58, 58, 76, 76, 67, 125, "Lanturn", Type::EAU, Type::ELECTRIQUE, 0, -1, ne, {Stats.PV, Stats.PV}, 1.2, 22.5, "La lumière de Lanturn surgit des profondeurs. On le surnomme « étoile des profondeurs ».", 156, 1250000, 75, 171);
		 listePoke[172] = new Espece(40, 15, 35, 35, 60, 20, "Pichu", Type::ELECTRIQUE, Type::AUCUN, 0, -1, new E_Love(0), {Stats.VIT}, 0.3, 2, "Il ne sait pas encore stocker l'électricité. Il envoie des décharges par jeu ou par peur.", 42,1000000, 190, 172);
		 listePoke[173] = new Espece(25, 28, 45, 55, 15, 50, "Mélo", Type::FEE, Type::NORMAL, 0, -1, new E_Love(35), {Stats.DEFSPE}, 0.3, 3, "On en voit beaucoup lorsque le ciel se remplit d'étoiles filantes. Ils s'éclipsent au lever du soleil.", 37, 800000, 150, 173);
		 listePoke[174] = new Espece(90, 30, 15, 40, 20, 15, "Toudoudou", Type::FEE, Type::AUCUN, 0, -1, new E_Love(0), {Stats.PV}, 0.3, 1, "Son corps est très doux. Quand il commence à rebondir, il est impossible de l'arrêter.", 45, 800000, 39, 174);
		 listePoke[175] = new Espece(20, 65, 40, 65, 20, 35, "Togepi", Type::FEE, Type::AUCUN, 0, -1, new E_Item(175, Item.getItem("Bonheur")), {Stats.DEFSPE}, 0.3, 1.5, "Sa coquille est remplie de joie. On dit que s’il est bien traité, il porte chance.", 74, 800000, 190, 175);
		 listePoke[176] = new Espece(40, 85, 80, 105, 40, 55, "Togetic", Type::FEE, Type::VOL, 0, -1, new E_Item(176, Item.getItem("Pierre Eclat")), {Stats.VIT, Stats.VIT}, 0.6, 3.2, "Il se démoralise vite s'il n'est pas avec des gens sympathiques. Il peut léviter sans battre des ailes.", 114, 800000, 75, 176);
		 listePoke[177] = new Espece(50, 45, 70, 45, 70, 40, "Natu", Type::VOL, Type::PSY, 0, 25, new E_Level(178, 25), {Stats.ATKSPE}, 0.2, 2, "Ses ailes ne sont pas assez développées et il ne peut que planer péniblement. Il fixe toujours quelque chose.", 73, 1000000, 190, 177);
		 listePoke[178] = new Espece(75, 70, 95, 70, 95, 65, "Xatu", Type::PSY, Type::VOL, 0, -1, ne, {Stats.ATKSPE, Stats.VIT}, 1.5, 15, "On dit qu'il est calme et tranquille car il peut voir en permanence le passé et le futur grâce à ses yeux en forme de tétons.", 171, 1000000, 75, 178);
		 listePoke[179] = new Espece(55, 40, 40, 65, 45, 35, "Wattouat", Type::ELECTRIQUE, Type::AUCUN, 0, 15, new E_Level(180, 15), {Stats.ATKSPE}, 0.6, 7., "Sa laine fournie enfle lorsqu'il accumule de l'électricité statique. Son contact peut choquer.", 235, 1059860, 59, 179);
		 listePoke[180] = new Espece(55, 55, 80, 60, 45, 70, "Lainergie", Type::ELECTRIQUE, Type::AUCUN, 0, 30, new E_Level (181, 30), {Stats.ATKSPE, Stats.ATKSPE}, 0., 13.3, "Sa queue s'allume lorsque sa laine se charge d'électricité. Il projette des poils électrifiés.", 117, 1059860, 120, 180);
	         listePoke[181] = new Espece(75, 85, 115, 90, 55, 90, "Pharamp", Type::ELECTRIQUE, Type::AUCUN, 0, -1, ne, {Stats.ATKSPE, Stats.ATKSPE, Stats.ATKSPE}, 1.4, 61.5, "Le bout de sa queue brille si fort qu'il peut être vu de très loin. Il sert de balise aux gens.", 196, 1059860, 45, 181);
		 listePoke[182] = new Espece(80, 85, 90, 100, 50, 75, "Joliflor", Type::PLANTE, Type::AUCUN, 0, -1, ne, {Stats.DEFSPE, Stats.DEFSPE, Stats.DEFSPE}, 0.4, 5., "Les Joliflor se réunissent souvent pour danser. On pense que c'est un rituel pour appeler le soleil", 184, 1059860, 45, 182);
		 listePoke[183] = new Espece(20, 50, 20, 50, 40, 70, "Marill", Type::EAU, Type::FEE, 0, 18, new E_Level(184, 18), {Stats.DEFSPE, Stats.DEFSPE, Stats.DEFSPE}, 0.4, 8.5, "Sa fourrure est imperméable, si bien qu'il reste sec même en jouant dans l'eau", 58, 800000, 190, 183);
		 listePoke[184] = new Espece(100, 50, 80, 80, 50, 105, "Azumarill", Type::EAU, Type::FEE, 0, -1, ne, {Stats.PV, Stats.PV, Stats.PV}, 0., 28.5, "Ses longues oreilles font un radar efficace. Elles décèlent les mouvements dans le lit des rivières.", 153, 800000, 75, 184);
		 listePoke[185] = new Espece(100, 115, 30, 65, 30, 70, "Simularbre", Type::ROCHE, Type::AUCUN, 0, -1, ne, {Stats.DEF, Stats.DEF}, 1.4, 61.5, "Il se déguise en arbre pour éviter les problèmes. Il déteste l'eau et se cache par temps de pluie.", 135, 1059860, 65, 185);
		 listePoke[186] = new Espece(75, 75, 90, 100, 70, 90, "Tarpaud", Type::EAU, Type::AUCUN, 0, -1, ne, {Stats.DEFSPE}, 1.1, 33.9, "Si Ptitard et Têtarte entendent son cri, ils se rassemblent pour venir le rencontrer.", 185, 1059860, 45, 186);
		 listePoke[187] = new Espece(35, 40, 35, 55, 50, 35, "Granivol", Type::PLANTE, Type::VOL, 0, 18, new E_Level(188, 18), {Stats.DEFSPE}, 0.4, 0.5, "Il dérive avec le vent. Sa présence en nombre dans les champs et les montagnes annonce le printemps.", 74, 1059860, 255, 187);
		 listePoke[188] = new Espece(45, 50, 45, 65, 80, 55, "Floravol", Type::PLANTE, Type::VOL, 0, 18, new E_Level(189, 27), {Stats.VIT, Stats.VIT}, 0.6, 1, "Il étend ses pétales pour absorber la lumière du soleil. Il flotte pour se rapprocher du soleil.", 136, 1059860, 120, 188);
		 listePoke[189] = new Espece(75, 55, 70, 55, 95, 110, "Cotovol", Type::PLANTE, Type::VOL, 0, -1, ne, {Stats.VIT, Stats.VIT, Stats.VIT},0., 3, "Même sous un vent très violent, il contrôle sa destination en bougeant ses appendices.", 136, 1059860, 45, 189);
		 listePoke[190] = new Espece(70, 55, 40, 55, 85, 55, "Capumain", Type::NORMAL, Type::AUCUN, 0, -1, ne, {Stats.VIT}, 0., 11.5, "Sa queue est si forte qu'il peut l'utiliser pour se suspendre aux branches des arbres.", 94, 800000, 45, 190);
		 listePoke[191] = new Espece(30, 30, 30, 30, 30, 30, "Tournegrin", Type::PLANTE, Type::AUCUN, 0, -1, new E_Item(192, Item.getItem("Pierre Soleil")), {Stats.ATKSPE}, 0.3, 1., "Il tombe du ciel soudainement. S'il est attaqué par un Piafabec, il secoue violemment ses feuilles.", 52, 1059860, 235, 191);// ajoutez la pierre soleil
		 listePoke[192] = new Espece(75, 55, 105, 85, 30, 75, "Héliatronc", Type::PLANTE, Type::AUCUN, 0, -1, ne, {Stats.ATKSPE, Stats.ATKSPE}, 0., 8.5, "À l'approche des beaux jours, les pétales entourant sa tête deviennent plus chatoyants.", 146, 1059860, 120, 192);
		 listePoke[193] = new Espece(65, 45, 75, 45, 95, 65, "Yanma", Type::INSECTE, Type::VOL, 0, -1, ne, {Stats.PV, Stats.VIT}, 1.2, 3, "Il voit à 360° sans avoir à tourner la tête. Il ne loupe jamais une proie, même dans son dos.", 147, 1000000, 75, 193);
		 listePoke[194] = new Espece(100, 50, 80, 80, 50, 105, "Axoloto", Type::EAU, Type::FEE, 0, 20, new E_Level(195,20), {Stats.PV}, 0.4, 8.5, "Il émerge de l'eau lorsque l'air se rafraîchit pour partir chasser sur les berges.", 52, 1000000, 255, 194);
		 listePoke[195] = new Espece(85, 85, 65, 65, 35, 95, "Maraiste", Type::EAU, Type::FEE, 0, -1, ne, {Stats.PV, Stats.PV}, 0., 28.5, "Ce Pokémon est très insouciant. Quand il nage, il fonce tête première dans la coque des bateaux", 137, 1000000, 90, 195);
		 listePoke[196] = new Espece(65, 60, 130, 95, 110, 65, "Mentali", Type::PSY, Type::AUCUN, 0, -1, new E_Nope(), {Stats.ATKSPE, Stats.ATKSPE}, 0.9, 26.5, "Sa fourrure ultraswagg détecte les vibrations de l'air. Il peut ainsi prédire le temps ou lire les pensées adverses.", 197, 1000000, 45, 196);
		 listePoke[197] = new Espece(65, 110, 60, 130, 65, 95, "Noctali", Type::TENEBRES, Type::AUCUN, 0, -1, ne, {Stats.DEFSPE, Stats.DEFSPE}, 1, 27, "Quand il s'énerve, ses pores sécrètent une sueur empoisonnée qu'il envoie dans les yeux de ses ennemis.", 197, 1000000, 45, 197);
                 listePoke[198] = new Espece(85, 42, 85, 42, 91, 60, "Cornèbre ", Type::TENEBRES, Type::VOL, 0, -1, new E_Item(0, Item.getItem("Pierre Lune")), {Stats.VIT}, 0.5, 2.1, "Jadis, Cornèbre était craint et détesté, car on disait qu'il portait malheur. Ce Pokémon est attiré par tout ce qui brille. Parfois, il essaye de voler les bagues des filles.", 107, 1059860, 45, 198);
		 listePoke[199] = new Espece(75, 90, 100, 110, 30, 95, "Roigada", Type::EAU, Type::PSY, 0, -1, new E_Nope(), {Stats.DEFSPE, Stats.DEFSPE, Stats.DEFSPE}, 2, 80, "Tous les jours, Roigada entreprend des recherches pour résoudre les mystères du monde. Cependant, ce Pokémon oublie tout ce qu'il a appris si le Kokiyas qui se trouve sur sa tête s'en va.", 164, 1000000, 70, 199);
		 listePoke[200] = new Espece(60, 60, 85, 85, 85, 60, "Feuforêve", Type::SPECTRE, Type::AUCUN, 0, -1, new E_Item(0, Item.getItem("Pierre Nuit")), {Stats.ATKSPE, Stats.DEFSPE}, 0.7, 1.0, "Il pousse des hurlements la nuit pour effrayer les gens.", 147, 800000, 45, 200);//Ajoutez la pierre nuit
		 listePoke[201] = new Espece(72, 48, 72, 48, 48, 48, "Zarbi", Type::FEE, Type::AUCUN, 0, -1, ne, {Stats.ATK, Stats.ATKSPE}, 0.5, 5, "Son corps plat et fin est toujours collé aux murs. On pense que sa forme a une signification.", 61, 1000000, 225; 201);
		 listePoke[202] = new Espece(33, 58, 33, 58, 33, 190, "Qulbutoké", Type::PSY, Type::AUCUN, 0, -1, ne, {Stats.PV, Stats.PV}, 1.3, 28.5, "Pour cacher sa queue imposante, il vit discrètement dans l'obscurité. Il n'attaque jamais le premier.", 177, 1000000, 45, 202);
		 listePoke[203] = new Espece(80, 65, 90, 65, 85, 70, "Girafarig", Type::NORMAL, Type::PSY, 0, -1, ne, {Stats.ATKSPE, Stats.ATKSPE}, 1.5, 41.5, "Sa queue possède un cerveau. Si vous vous en approchez, elle vous sentira et vous mordra.", 149, 1000000, 60, 203);
		 listePoke[204] = new Espece(65, 90, 35, 35, 15, 50, "Pomdepik", Type::INSECTE, Type::AUCUN, 0, 31, new E_Level(205, 31), {Stats.DEF}, 0.6, 7.2, "Il renforce sa carapace en y ajoutant des écorces d'arbre. Il devient alors plus lourd.", 60, 1000000, 190, 204);
		 listePoke[205] = new Espece(90, 140, 60, 60, 40, 75, "Foretress", Type::INSECTE, Type::ACIER, 0, -1, ne, {Stats.DEF, Stats.DEF}, 1.2, 125., "Il est totalement fixé à son arbre. Il lance des morceaux de sa carapace pour faire fuir son ennemi, comme un gros lâche", 118, 1000000, 75, 205);
		 listePoke[206] = new Espece(70, 70, 65, 65,  45, 100, "Insolourdo", Type::NORMAL, Type::AUCUN, 0, -1, ne, {Stats.PV}, 1.5, 14, "Ce Pokemon mérite t'il vraiment une description ?", 125, 1000000, 190, 206);
		 listePoke[207] = new Espece(75, 105, 35, 65, 85, 65, "Scorplane", Type::VOL, Type::SOL, 0, -1, ne, {Stats.DEF}, 1.1, 64., "Il vole droit vers le visage de sa cible effrayée et s'y accroche pour lui injecter son poison.", 220, 1059860, 60, 207);//EVOLUTION A CORRIGER
		 listePoke[208] = new Espece(85, 200, 55, 65, 30, 75, "Steelix", Type::ACIER, Type::SOL, 0, -1, ne, {Stats.DEF, Stats.DEF}, 9.2, 400, "Grâce à la température élevée et à la haute pression souterraines, son corps est plus dur que le métal.", 196, 1000000, 25, 208);
		 listePoke[209] = new Espece(80, 50, 40, 40, 30, 60, "Snubbull", Type::FEE, Type::AUCUN, 0, 23, new E_Level(210, 23), {Stats.PV}, 0.6, 7., "Il est d'une nature joviale. De nombreuses femmes l'apprécient pour sa gentillesse.", 63, 800000, 190, 209);
		 listePoke[210] = new Espece(120, 75, 60, 60, 45, 90, "Granbull", Type::AUCUN, Type::FEE, 0, -1, ne, {Stats.ATK, Stats.ATK}, 1.4, 48.7, "Il peut faire fuir presque tous les Pokémon en ouvrant très largement sa mâchoire.", 178, 800000, 75, 210);
		 listePoke[211] = new Espece(95, 85, 55, 55, 85, 65, "Qwilfish", Type::EAU, Type::FEE, 0, -1, ne, {Stats.ATK},  0.5, 3.9, "Pour tirer ses dards empoisonnés, il gonfle son corps en buvant 10 L d'eau subitement.", 100, 800000, 45, 211);
		 listePoke[212] = new Espece(130, 100, 55, 80, 65, 70, "Cizayox", Type::INSECTE, Type::ACIER, 0, -1, ne, {Stats.ATK, Stats.ATK}, 1., 11, "Les pinces de ce Pokémon contiennent de l'acier et peuvent réduire en miettes quasiment n'importe quoi.", 200, 1000000, 25, 212);
		 listePoke[213] = new Espece(10, 230, 10, 230, 5, 20, "Caratroc", Type::INSECTE, Type::ROCHE, 0, -1, ne, {Stats.DEF, Stats.DEFSPE}, 0.6, 20.5, "Il garde des Baies dans sa coquille. Pour éviter les attaques, il s'immobilise sous les rochers.", 80, 1059860, 190, 213);
		 listePoke[214] = new Espece(125, 75, 40, 95, 85, 80, "Scarhino", Type::INSECTE, Type::COMBAT, 0, -1, ne, {Stats.ATK, Stats.ATK}, 1.5, 54, "Sa force herculéenne lui permet de soulever et de jeter plus de 100 fois son poids.", 200, 1250000, 45, 214);
		 listePoke[215] = new Espece(95, 55, 35, 75, 115, 55, "Farfuret", Type::TENEBRES, Type::GLACE, 0, -1, ne, {Stats.PV, Stats.PV, Stats.PV}, 0.9, 2, "Il se nourrit d'œufs volés dans des nids. Ses griffes crochues percent les défenses de l'ennemi.", 132, 1059860, 60, 215);//EVOLUTION A CORRIGER
		 listePoke[216] = new Espece(80, 50, 50, 50, 40, 60, "Teddiursa", Type::NORMAL, Type::AUCUN, 0, 30, new E_Level(217,30), {Stats.VIT}, 0.6, 8., "Il se fait des réserves de nourriture dans des cachettes avant l'arrivée de l'hiver.", 70, 1000000, 120, 216);
         listePoke[217] = new Espece(130, 75, 75, 75, 55, 90, "Ursaring", Type::NORMAL, Type::AUCUN, 0, -1, ne, {Stats.ATK, Stats.ATK}, 1., 125., "Bien que d'une large corpulence, il grimpe aux arbres pour s'y nourrir et y dormir.", 189, 1000000, 60, 217);
		 listePoke[218] = new Espece(40, 40, 70, 40, 20, 40, "Limagma", Type::FEU, Type::AUCUN, 0, 38, new E_Level(219,38), {Stats.ATKSPE}, 0.7, 35, "Son corps est fait de magma. S'il cesse de bouger, il refroidit et durcit.", 78, 1000000, 190, 218);
		 listePoke[219] = new Espece(50, 120, 90, 80, 30, 60, "Volcaropod", Type::FEU, Type::ROCHE, 0, -1, ne, {Stats.DEF}, 0., 55, "Son corps en ébullition est aussi chaud que de la lave. Des flammes sortent de sa coquille.", 154, 1000000, 75, 219);
		 listePoke[220] = new Espece(50, 40, 30, 30, 50, 50,"Marcacrin", Type::GLACE, Type::SOL, 0, 33, new E_Level(221,33), {Stats.ATK}, 0.4, 6.5, "S'il sent une odeur attirante, il fonce tête baissée pour en trouver l'origine.", 78, 1250000, 225, 220);
		 listePoke[221] = new Espece(100, 80, 60, 60, 50, 100, "Cochignon", Type::GLACE, Type::SOL, 0, -1, ne, {Stats.PV, Stats.ATK}, 1.1, 55., "Bien que pourvu de courtes pattes, ses sabots sont pointus pour l'empêcher de glisser sur la glace.", 160, 1250000, 75, 221);
		 listePoke[222] = new Espece(55, 95, 65, 95, 35, 65, "Corayon", Type::EAU, Type::ROCHE, 0, -1, ne, {Stats.DEF, Stats.DEFSPE}, 0.6, 5, "Il grandit en permanence. Les exquises excroissances de sa tête sont très recherchées.", 113, 800000, 45, 222);
         listePoke[223] = new Espece(65, 35, 65, 35, 65, 35, "Rémoraid", Type::EAU, Type::AUCUN, 0, 25,new E_Level(223, 25), {Stats.ATKSPE}, 0, 12, "Se servant de sa nageoire dorsale, il s'accroche sous un Démanta pour récupérer ses restes.", 78, 1000000,190, 223);
		 listePoke[224] = new Espece(105, 75, 105, 75, 45, 75, "Octillery", Type::EAU, Type::ACIER, 0, -1, new E_Nope(), {Stats.ATKSPE}, 0, 2, "  Il adore se cacher dans les fissures et les épaves, d’où il attaque en crachant de l'encre.", 164, 1000000,75, 224);
		 listePoke[225] = new Espece(55, 45, 65, 45, 75, 45, "Cadoizo", Type::GLACE, Type::VOL, 0, -1, new E_Nope(), {Stats.VIT}, 0, 16, "Il dépose sa nourriture dans sa queue enroulée. Il l'offre souvent aux gens égarés en montagne.", 183, 800000,45, 225);
		 listePoke[226] = new Espece(40, 70, 80, 140, 70, 85, "Démenta", Type::EAU, Type::VOL, 0, -1, new E_Nope(), {Stats.DEFSPE, Stats.DEFSPE}, 2, 220, "Il peut planer au-dessus des vagues sur plus de 100 m en prenant son élan dans la mer.", 168, 1250000, 45, 226);
		 listePoke[227] = new Espece(80, 140, 40, 70, 70, 65, "Airmur", Type::ACIER, Type::VOL, 0, -1, new E_Nope(), {Stats.DEF}, 1, 50, "Comme il fait son nid dans les ronces, ses petits s'endurcissent à force d'être sans cesse éraflés", 168, 12500000, 35, 227);
		 listePoke[228] = new Espece(60, 30, 80, 50, 65, 45, "Malosse", Type::TENEBRES, Type::FEU, 0, 24,new E_Level(228, 24), {Stats.ATKSPE}, 1, 11, "Il hurle dès l'aube pour délimiter son territoire. On l'entend à des kilomètres à la ronde.", 114, 1250000,120, 228);
         listePoke[229] = new Espece(90, 50, 110, 80, 95, 75, "Démolosse", Type::TENEBRES, Type::FEU, 0, -1, new E_Nope(), {Stats.ATKSPE, Stats.ATKSPE}, 1, 35, "Jadis, les gens prenaient son étrange hurlement pour l'appel de la Faucheuse.", 204, 1250000,45, 229);
		 listePoke[230] = new Espece(95, 95, 95, 95, 85, 75, "Hyporoi", Type::EAU, Type::DRAGON, 0, -1, new E_Nope(), {Stats.ATK,Stats.ATKSPE,Stats.DEFSPE}, 2, 152, "Hyporoi vit au fin fond des profondeurs océaniques généralement inhabitées. On a longtemps cru que le bâillement de ce Pokémon créait les tourbillons dans les océans", 207, 1000000, 45, 230);//TAG : TODO : A vérifier : Taux de capture
		 listePoke[231] = new Espece(60, 60, 40, 40, 40, 40, "Phanpy", Type::SOL, Type::AUCUN, 0, 25,new E_Level(231, 25), {Stats.PV}, 1, 33, "Il se cogne sur celui ou celle qu'il apprécie. Il est cependant si fort qu'il fait souvent mal.", 124, 1000000, 45, 231);
		 listePoke[232] = new Espece(120, 120, 60, 60, 50, 90, "Donphan", Type::SOL, Type::AUCUN, 0, -1, new E_Nope(), {Stats.ATK,Stats.DEF}, 1, 120, "Si Donphan décidait de charger, il pourrait détruire une maison. Grâce à sa force étonnante, ce Pokémon peut aider à déplacer les rochers et les coulées de boue qui bloquent les chemins de montagne.", 189, 1000000, 45, 232);//TAG : TODO : A vérifier : Taux de capture
		 listePoke[233] = new Espece(80, 90, 105, 95, 60, 85, "Porygon2", Type::NORMAL, Type::AUCUN, 0, -1, ne, {Stats.ATKSPE, Stats.ATKSPE}, 0.6, 32.5, "Version évoluée de Porygon, créée dans l'espoir de pouvoir un jour terraformer des planètes, un rêve loin d'être concrétisé pour l'instant.", 180, 1000000, 45, 233);
		 listePoke[234] = new Espece(95, 62, 85, 65, 85, 73, "Cerfrousse", Type::NORMAL, Type::AUCUN, 0, -1, ne, {Stats.ATK}, 1.4, 71.2, " Ce Pokémon fut chassé et l'espèce proche de l'extinction à cause des gens qui recherchaient leurs précieux bois.", 165, 1250000, 45, 234);
		 listePoke[235] = new Espece(20, 35, 20, 45, 75, 55, "Quelorior", Type::NORMAL, Type::AUCUN, 0, -1, ne, {Stats.VIT}, 1.2, 5, "Ce Pokémon peint pour marquer son territoire. On reconnaît les villes peuplées de nombreux Queulorior à leurs murs recouverts de graffitis", 106, 800000, 45, 235);
		 listePoke[236] = new Espece(35, 35, 35, 35, 35, 35, "Debugant", Type::COMBAT, Type::AUCUN, 0, -1, ne, {Stats.ATK, Stats.ATK}, 0.7, 21, "Pour augmenter ses capacités, il cherche à se battre contre n'importe qui. Il est très courageux.", 91, 1000000, 75, 236);//EVOLUTION A CORRIGER
	 	 listePoke[237] = new Espece(95, 95, 35, 110, 70, 50, "Kapoera", Type::COMBAT, Type::AUCUN, 0, -1, ne, {Stats.DEFSPE, Stats.DEFSPE}, 1.4, 4, "Il combat en tournoyant comme une toupie. La force centrifuge décuple sa puissance destructrice.", 137, 1000000, 45, 237);//EVOLUTION A CORRIGER
   		 listePoke[238] = new Espece(30, 15, 85, 65, 65, 45, "Lippouti", Type::GLACE, Type::PSY, 0, 30, new E_Level (124, 30), {Stats.ATKSPE}, 0.6, 6, "Il goûte à tout du bout des lèvres. Elles gardent en mémoire ses goûts et ses dégoûts.", 87, 1000000, 45, 238);
	 	 listePoke[239] = new Espece(63, 37, 65, 55, 95, 45, "Elekid", Type::ELECTRIQUE, Type::AUCUN, 0, 30, new E_Level(125,30), {Stats.VIT}, 0.6, 23.5, "Il génère de l'électricité en battant des bras, mais il n'a aucun moyen de stocker cette énergie.", 106, 1000000, 45, 239);
		 listePoke[240] = new Espece(75, 37, 70, 55, 83, 45, "Magby", Type::FEU, Type::AUCUN, 0, 30, new E_Level (126,30), {Stats.VIT}, 0.7, 21.4, "Ce Pokémon est souvent aperçu dans les régions volcaniques. Donnez-lui à manger et il vous déclarera sa flamme... littéralement.", 117, 1000000, 45, 240);
		 listePoke[241] = new Espece(80, 105, 40, 70, 100, 95, "Écrémeuh", Type::NORMAL, Type::AUCUN, 0, -1, ne, {Stats.VIT}, 1.2, 75.5, "Son lait est aussi nutritif qu'hypercalorique. A consommer avec modération", 200, 1250000, 45, 241);
		 listePoke[242] = new Espece(10, 10, 75, 135, 55, 255, "Leuphorie", Type::NORMAL, Type::AUCUN, 0, -1, ne, {Stats.PV, Stats.PV, Stats.PV}, 1.5, 46., "Le pelage de ce Pokémon lui fait office de radar à émotions. Il est ainsi capable de capter les humeurs des Pokémon et humains alentour", 608, 800000, 30, 242);//
		 listePoke[243] = new Espece(85, 75, 115, 110, 115, 90, "Raikou", Type::ELECTRIQUE, Type::AUCUN, 0, -1, ne, {Stats.ATKSPE, Stats.VIT, Stats.VIT}, 1.9, 17, "Le nuage de pluie qu'il porte peut relâcher la foudre à volonté. On dit de lui qu'il est venu avec l'orage.", 216, 1250000, 3, 243);
		 listePoke[244] = new Espece(115, 85, 90, 75, 100, 115, "Entei", Type::FEU, Type::AUCUN, 0, -1, ne, {Stats.PV, Stats.ATK, Stats.ATK}, 2.1, 19, "Un Pokémon qui parcourt le monde. On dit qu'il en naît un à chaque fois qu'un volcan apparaît", 217, 1250000, 3, 244);
		 listePoke[245] = new Espece(75, 115, 90, 115, 85, 100, "Suicune", Type::EAU, Type::AUCUN, 0, -1, ne, {Stats.DEF, Stats.DEFSPE, Stats.DEFSPE}, 2, 187, "Il serait la réincarnation du vent du nord. Il peut purifier instantanément les eaux polluées.", 216, 1250000, 3, 245);
		 listePoke[246] = new Espece(64, 50, 45, 50, 41, 50, "Embrylex", Type::ROCHE, Type::SOL, 0, 30, new E_Level (247,30), {Stats.ATK}, 0.6, 72, "Il vit très profond sous terre. Il n'en sort pour évoluer qu'après avoir dévoré tout ce qui l'entourait.", 67, 1250000, 45, 246);
		 listePoke[247] = new Espece(84, 70, 65, 70, 51, 70, "Ymphect", Type::ROCHE, Type::SOL, 0, 55, new E_Level (248,55), {Stats.ATK, Stats.ATK}, 1.2, 152, "Sa carapace est aussi dure que la pierre et il est très fort. Ses coups peuvent raser une montagne.", 144, 1250000, 45, 247);
		 listePoke[248] = new Espece(134, 110, 95, 100, 61, 100, "Tyranocif", Type::ROCHE, Type::TENEBRES, 0, -1, ne, {Stats.ATK, Stats.ATK, Stats.ATK}, 2, 202, "Lorsqu'il est en colère, il abat des montagnes et enterre des fleuves. On doit alors modifier les cartes.", 218, 1250000, 45, 248);
		 listePoke[249] = new Espece(90, 130, 90, 154, 110, 106, "Lugia", Type::PSY, Type::VOL, 0, -1, ne, {Stats.DEFSPE, Stats.DEFSPE, Stats.DEFSPE}, 5.2, 216, "Il dort dans une faille des grands fonds. Ses battements d'ailes génèrent une tempête de 40 jours.", 220, 1250000, 3, 249);
		 listePoke[250] = new Espece(130, 90, 110, 154, 90, 106, "Ho-Oh", Type::FEU, Type::VOL, 0, -1, ne, {Stats.DEFSPE, Stats.DEFSPE, Stats.DEFSPE}, 3., 199, "Une légende raconte que son corps brille de sept couleurs. Un arc-en-ciel se forme derrière lui quand il vole.", 211, 1250000, 3, 250);
		 listePoke[251] = new Espece(100, 100, 100, 100, 100, 100, "Celebi", Type::PSY, Type::PLANTE, 0, -1, ne, {Stats.PV, Stats.PV, Stats.PV}, 0.6, 5, "Ce Pokémon voyage dans le temps. Les forêts où il apparaît deviennent prodigieusement luxuriantes.", 64, 1059860, 45, 251);
    }

    void initAtkLvls(){

    }

    void initSprites(){
        initBackgrounds();
    }

    void initBackgrounds(){

    }

    void initKeys(){

    }

    void initItems(){

    }

    void init(){
        initKeys();
        initSprites();
        initItems();
        initAtkLvls();
        initPokemons();
    }
}
