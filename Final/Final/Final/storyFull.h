#include <iostream>
#include <string>
#include <windows.h>
#include "tavern.h"
#include "fighting.h"
using namespace std;

void fighting();
void s0(int tSpeed)
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int x = tSpeed;
	system("cls");											//Clears screen
	char story0[] = { "The Kingdom of Makuria, like most Kingdoms, was quite peaceful. The King \nwas in good political standings with surrounding villages, the Kingdom was \nwealthy, crime was very minimal, and most importantly the people were \nhappy. \n\nThis peace lasted for centuries... But... like most stories of Heroism, \nthis peace was inevitably disrupted. \n\nOne day Monsters began to appear and started terrorizing the Kingdom. The \nguard, through their centuries of peace, grew lazy and weak proving that \nthey were no match for these malevolent beasts. Many-a-folk died in the \nfollowing years. \n\nThe King, reluctantly, was forced to shut the gates of Makuria in order \nto find a solution to their problem. The entire city was cut off from the \noutside world. The vast fortune that was collected over the years was used \nto repair the continuous damage to their walls, nearly emptying their \ncoffers. The city was on high alert with many of the citizens barricading \nthemselves in their homes, hoping that they'd have enough rations to \nsurvive the week, and the vast amount of dormant criminals took advantage \nof this mass hysteria to perform their vicious acts. \n\nWith no salvation in sight, these were truly dark times...\n \n\n\n\n\n\n\n\n\n                           One Year Later \n                        Where our story begins\n\n\n\n\n\n\n\n\n" };
	for (int i = 0; i < strlen(story0); i++)				//Causes the text ^^ to have a slight delay between characters
	{
		switch (i)											//Changes color of text
		{
		case 293:
			SetConsoleTextAttribute(hConsole, 14);			//Sets text color to Yellow
			break;
		case 349:
			SetConsoleTextAttribute(hConsole, 12);			//Sets text color to Red
			break;
		case 300: case 358:									//Sets text color to White
			SetConsoleTextAttribute(hConsole, 7);
			break;
		default:
			break;
		}
		cout << story0[i];
		Sleep(x);
		if (i == 1211)										//Allows for the user to decide when the text continues
		{
			system("pause");
			system("cls");
			x = x * 2;
		}
	}
	Sleep(3000);
	system("pause");
}
void s1(int tSpeed)
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int x = tSpeed;
	system("cls");			//Clears screen
	char story1[] = { "We see a young man with dark black hair and basic brown clothing running \nthrough a narrow alleyway with two heavily armoured men in close pursuit. \nThe dark haired man is leaping over barrels while holding a large brown \nbag, and doing anything to evade his pursuers. At one point one of the \narmoured man yells after the man... \n\nGuard #1: \"You can't run forever Felix! We'll catch you eventually!!\" \nFelix Smirks \nFelix: \"You've been saying that for months, Anthony; when are you gonna \ndeliver?\" \n\nAs soon as Felix finished his quip, he reached a cross section in the \nalleyway, and without skipping a beat, he turned right and, almost \nmechanically, he reached towards the nearby stack of crates and knocked \nthem over, blocking the alleyway. A few moments after the clanging of the \nguards armour stops at the crates, Felix smiles, turns, and begins to \ntrot down the muddy alleyway, leaving the cursing guards behind. \n\nA few moments later, Felix exits the alleyways onto the cobblestone main \nroad. The sun has just about to rise, casting a golden light onto the \ngray housing of the kingdom, almost creating a facade that the city was \nin its golden age of wealth and jubilation. \n\nFelix paid no mind to the empty streets that used to be cluttered with \nmerchants and people; in less than a minute, Felix walked towards a small \nwooden and stone shack that was dwarfed by the surrounding buildings. \nWith the brown bag clutched between his arms, Felix walks towards the \nbuildings door and knocks. After a brief moment of silence the door opens, \nbut only slightly, to reveal a skinny, short, gray haired, old man \npeering out into the streets. \n\nAs soon as the man saw Felix, though, his eyes widened and he swung the \ndoor all the way open to usher Felix inside. As soon as Felix was inside \nthe old shack the man closed and locked the door, and as soon as he turned \naround Felix thrusted the bag into the man's arms. Felix retreated to the \nold wooden table, that was in the far left corner of the one room building, \nwhere he plopped down into one of the many old looking chairs surrounding \nit, where the man began to speak in a frantic raspy voice. \n\nOld Man Jenkins: \"OH!.. Uhh.. T-Thank you Felix..\" \nAt which point the man opens the sack to reveal an assortment of stale \nbread and old cheeses. \nFelix: \"Yea.. Don't mention it, Herold..\" \nFelix Leaned back in his chair, exhausted, and closed his eyes, leaving \nthe room and the man, who was staring at the brown bag, in silent. After a \nbrief pause, the man spoke, not looking away from the bag, in an almost \ntimid fashion. \n\nOld Man Jenkins: \"So.. Uhh... where did you get them this time?..\" \nFelix smirks with his eyes still closed \nFelix: \"Heh.. Just a few greedy nobles on the other side of town who think \nthey can hoard food while others starve.\" \n\nFelix opens his eyes and meets the gaze of the man now looking at him. \nFelix: \"You should of heard the tantrum they threw! They were screaming \nand yelling at me telling me to bring the stuff back.\" \nFelix, now looking even more amused. \nFelix: \"One even tried to chase me! But, the fat prick got winded easily!\" \nHe lets out a slight laugh while the man stares at him stone eyed \n\nFelix: \"They even sent the guard after me! Seven of'em I think! Chased \nme right across town, but I managed to lose them in the alleyw--\" \nThe old man, now with a sudden new amount of courage, says \nOld Man Jenkins: \"THAT’S ENOUGH!\" \nFelix looks at him dumbfounded. \n\nOld Man Jenkins: \"You can’t keep doing this Felix! Stealing food, in \nthese times, is punishable by death, and yet you go out each and every \nnight, breaking into people's homes, stealing from their pantries, and \nputting yourself into danger! I can’t take it, Felix, you have such a life \nand you waste it by being a petty thief!\" \n\nFelix stares at the the man, who's staring back. There's a moment of \nsilence as the old man's words echos in the silent room. Felix, in a more \nserious tone, then breaks the silence. \nFelix: \"Ya'know, you're not the first person to confront me about this.. \njust last week Mrs. Alvingham confronted me for the exact same thing.. \nso I'll tell you what I told her...\" \n\nFelix: \"Years ago, before the world went to hell, my ambitions in life \nwere simple enough; I tried to make an easy coin where ever I could, but I \nnever tried anything on any of the common folk... I stayed on the path of \n\"righteousness\", per say, and only stole from the stuck up nobles at the \nhigher end of the town. The months that followed, the ones that began this \nmess, I realized that people all over the city began to fall into pits of \npoverty and hunger. I thought that everyone in the city felt the impact of \nthose times, but then, on one of my usual runs, I caught a glimpse of a \nnoble's pantry.. only to stockpiles of food galore. I soon realized that \nthose pigs were living the same privileged lives they had before the \nmonsters came, while the rest of us scrounged for scraps, withering away.\" \n\nFelix is now out of his chair and walking over to the, wide-eyed, old man. \nFelix: \"Don't you see, Herold? People should be helping each other in this \ntime of need, not watching others die for no good reason!\" \nFelix, walking towards the door making a motion to leave the hut, looks \nback at the old man and says. \n\nFelix: \"And as for getting caught? Well.. \" \nHe smirks just as he reaches the door \nFelix: \"They'll have to catch me first.\" \nWith that Felix opens the door only to catch a glimpse of a tall, elven,figure staring at him \nbefore everything goes dark. \n" };
	for (int i = 0; i < strlen(story1); i++) //Gives a delay between characters ^^
	{
		switch (i)			//Changes text color at certain points in the story
		{
		case 417: case 2315: case 2706: case 2898: case 3065: case 3209: case 3996: case 4179: case 5073: case 5316: case 5398:
			SetConsoleTextAttribute(hConsole, 14);			//Changes color to Yellow
			break;
		case 501: case 2357: case 2823: case 3025: case 3141: case 3346: case 4178: case 4996: case 5209: case 5361: case 5440: 
			SetConsoleTextAttribute(hConsole, 7);			//Changes clor to White
			break;
		default:
			break;
		}
		cout << story1[i];
		Sleep(x);
	}
	Sleep(3000);
	system("pause");
}
void s2(int tSpeed)
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int x = tSpeed;
	system("cls");
	char story2[] = { "When Felix regains consciousness, he notices that he is in a small, \nwhite, very clean room. The room itself has a red tile flooring with a \nlong strip of finely detailed, gold, paint separating the intersection of \nthe floor and the wall, with the wall being a fine white. There's a \nsingle, large, window with golden trimmings and silk curtains to the right \nof Felix, but it is angled in such a way that he cannot see what lies \nbeyond it. He can tell it is just turning dusk. Felix, himself, has his \nhands tied to the back of a red and gold chair, which Felix recognizes as \nchair only a person of nobility could afford. \n\nBefore Felix can think of a way to unravel his bindings, the fine oak door \nacross the small room bursts open. Two guards, in silver armor march into \nthe room and make a beeline towards Felix, and before he could say \nanything, one guard cuts his hands loose, and without a moment to spare, \nis picked up by both the guards and is escorted out of the room. \n\nThey move out into a hallway with the same style of flooring and walls as \nwas in the room. There are multiple doors on the left hand side with the \nright hand has multiple windows. At the end, the hallway turns left. A bit \nperturbed, and unsuccessfully not showing it, Felix says, \nFelix: \"Sooo... uhhh... who sent you lot? Was it the Lestranges? Are they \nmad about the uhh.. \"improvements\" I made to their family portrait?\" \n\nThe guards kept on marching, unfazed by Felix's remarks. Eventually, \nafter a long awkward walk, they reach a large, lavish, brown oak door \nwhere the guard promptly open, and force Felix into a very luxurious and \nlarge room. \n\nEach wall was covered with multiple multicolored paintings with the \nexception of one wall with two grand windows surrounding a golden \nthrone. A second door is also next to the door Felix was ushered through. \nA grand chandelier hangs from the ceiling. \n\nThe room's only occupants are Felix and the guards. Not even a moment \npasses before the second door bursts open where a few more guards, an \nelf, and an old man, wearing very regal clothing, walked through. \n\nNow realizing exactly what trouble he has gotten himself into, Felix \nimmediately kneels to the ground with his head held low. The usual \nexpression complacency that occupied Felix’s face was completely and \nutterly replace with an expression of true terror as Felix was in the \npresence of the most powerful political authority in the kingdom, the king \nhimself. \n\nThe King crosses the room and rests on the throne while the two guards \nquickly, and almost mechanically, stand at attention to the King's left. The \nelvish man, looking rather unamused, stands tall with his hands behind \nhis back to the King's right. The room is quite. \n\nThe King is slowly inspecting Felix from across the room with a scowl \nacross his face. After a moment that feels like an eternity, the King waves \nto the guards surrounding Felix, and motions to bring him over. Without \nhesitation the guards drag, the wide-eyed, Felix to his feet and almost \ncarry him over to face the king. Felix, knowing that a single wrong move \ncould mean imprisonment or even death, dares not to say a word. \n\nWhen Felix is presented to the King, Felix kneels before him and dares \nnot look at anything but the floor. Not a moment passes before the King \nspeaks in a withered, but strong voice. \nKing: \"Felix Crowmore..\" \nHe lets out a small chuckle \nKing: \"Oh have I heard a lot about you.. from what my guards tell me \nyou've been the one harassing the citizens, causeing massive damage to \nlocal supplies, and committing grand larceny, which should I remind you \nis highly illegal in this age. The sole reason why you haven't been \nimprisoned for crimes against the city is because I have a proposition for \nyou..\" \n\nFelix looks up at the King, who is staring back at him, with a surprised \nexpression as Felix was certain that he was going to be incarcerated on \nthe spot, but instead he is needed by the King himself! \n\nKing: \"As much as I despise ruffians like you, I am left with very few \nchoices in our current situation..\" \nFelix: \"Which is...\" \n\nThe King is slightly taken aback by Felix's sudden outburst, but only for a \nmoment; the King stares at Felix who returns his gaze to the floor. Before \nlong, the King gives a weak smile, rises from his throne, and begins to \nwalk towards one of the windows. Felix stares at the King as he looks \nsoberly out the window at the kingdom below. \n\nKing: \"In all of my years, this past year has been the most \ndifficult.. monsters appearing out of nowhere and besieging the city, I've \nlost countless good men straining our city's ability to protect itself.\" \nThe King is now looking down towards the floor recalling past events. \nKing: \"From the very first day, I searched for a way to bring our city back \nto its glory, but no matter what I did, there was no sign of any avail, no \nlight in the dark...\" \nThe King turns to meet the gaze of Felix \nKing: \"..until today..\" \n\nAt the King's last word, Felix seems to lose all of his former fear, and \njumps to his feet with an expression of seriousness. This caused the \nKing’s guard to ready their weaponry, but the King waves them off. The \nKing begins to walk towards his throne as Felix says, \n\nFelix: \"How?!\" \nKing: \"I've recently been informed, by the royal wizard, that a powerful \ndark energy has begun pulse from beyond the ruins, in the mountains. \nThe few men that managed to survive the journey to the mountains have \ntold us that there seems to be a hoard of monsters are accumulating.\" \n\nFelix, now a bit sceptical \nFelix: \"And.. what does this have to do with me?\" \nKing: \"Everything my dear boy.\" \nThe King places himself atop his throne, staring at the obviously confused \nFelix, and says, \nKing: \"You see, from what my guard tell me, you've evaded every attempt of capture. You're impossible to find when you go into hiding; even now I had to personally send my advisor.\" \nThe King glances at the obviously bored elvish man next to him \nKing: “Even then it was no easy task finding you. See, you have a set of \nskills that would more than compensate our current lack of military \npower..\" \n\nFelix eyes goes wide, as he suddenly realizes exactly what this meeting \nis about. \nFelix: \"No! You don't mean..\" \nKing: \"Yes, Felix, you're here so I can personally request your assistance \nin ending these dark times.\" \n\nFelix is completely awestruck at this proposal. \"This is a chance to \nchange the world for the better\", Felix thinks to himself. Many thoughts \npass through Felix's mind, all telling him that if he took this chance that he \ncould help people without stealing; his mind was racing until one thought, \nin particular, resonated with him. \n\nNow sceptical of the King, Felix gives off a glare and askes \nFelix: \"And if I say no?\" \nThe King's face of near plea, changes to a more serious face in an instant \nKing: \"Let's just say you don't want to say no, you see, like I said, you've \ndone many illegal things in your time, and I'm the only one standing \nbetween you and a lifetime in prison.\" \n\nGlaring at the King, Felix can’t help but think of how every noble, even the \nKing, are all the same, using whatever dirty tactic to get their way. \n\nKing: \"What will it be Felix, will you help the Kingdom find it's way out of \nthe darkness or watch it wither away?\"" };
	for (int i = 0; i < strlen(story2); i++)
	{
		switch (i)											//Changes color of text
		{
		case 1271: case 4109: case 5388: case 5730: case 6412: case 6966:	//At these characters
			SetConsoleTextAttribute(hConsole, 14);							//Set text color to Yellow
			break;
		case 3372: case 3425: case 4001: case 4468: case 4759: case 5081: case 5407: case 5784: case 5916: case 6167: case 6446: case 7073: case 7421:
			SetConsoleTextAttribute(hConsole, 3);			//At these characters ^^^, set text color to Turquoise
			break;
		case 1415: case 3398: case 3793: case 4130: case 4686: case 4934: case 5109: case 5699: case 5820: case 6102: case 6324: case 6556: case 6996: case 7266: case 7542:
			SetConsoleTextAttribute(hConsole, 7);			//At these characters ^^^, set text color to White
			break;
		default:
			break;
		}
		cout << story2[i];
		Sleep(x);
	}
}
void s3A(int tSpeed)
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int x = tSpeed;
	system("cls");
	char story3A[] = { "After a long moment of contemplation, Felix finally comes to a decision \nFelix: \"You really leave me with no choice, now do you.. Y'know the only \nreason I stole was to help the people that couldn't help themselves.. \nwhat'll happen to them if I'm in prison?.. So, yes.. I will help, but for the \npeople.\" \n\nThe King looks as if a large weight was lifted from his shoulders. He \nstands, and begins to walk towards the door he entered from, but when \nhe passes Felix, he puts a surprisingly strong hand onto Felix's shoulder \nand says in a whisper, \nKing: \"Thank you, Felix.. I knew you'd come around..\" \n\nWith that the King reaches the door, turns and nods at his advisor who is \nstill standing at the throne. As soon as the door closes, the advisor begins \nto walk towards the door that Felix entered through, saying \n\nAdvisor: \"Follow..\" \n\nImmediately the two guards begin to escort Felix behind the Advisor. \nWhen the group exits the throne room, Felix asks, \nFelix: \"Where are we going?\" \nThe advisor, obviously annoyed by the question, reluctantly responds with \nAdvisor: \"The King has gracefully bestowed upon me the task of \npreparing you for your journey, and in order to properly fulfil the request, \nwe are going to the armoury.\" \n\nThe rest of the, long, trip through the labyrinth of a castle was spent in \nnear complete silence, with the only noise being the clanging of the \nguard's armor. Eventually the group arrived at a large room where \nmultiple suits of armor, swords, shields, and weapons of every kind hung \nfrom the wall. There was a forge in one corner, probably for repairs, and a \nmultitude of tables scattered around the floor. \n\nOn the table closest to the entrance sat a multitude of items ranging from \na few daggers to a small leather pack. \nAdvisor: \"In order to suit your style of \"combat\" these are a few items \nthat were selected to aid you on your journey.. I trust that you know how \nthey work, so this is where I take my leave. Speak to the guards when \nyou are ready to leave.\" \n\nThe advisor begins to head for the door the group came from when Felix \ncalls out, \nFelix: \"Wait! How does this work!?\" \nFelix holds up a dagger by the blade and is blatantly trying to look \ndumbfounded. The advisor gives a scoff of disgust and briskly walk out of \nthe room. Felix gives a slight chuckle before returning to the table looking \nmuch more serious. Felix can't help but think of how sure they were about \nhim saying yes, since they went through the trouble of preparing items \nbefore hand. \n\nAfter inspecting the items, Felix finds a set of Leather Armor, which he \nattempts to equip. Although light and relatively simple to equip, Felix has \nnever used the any type of armor, as he's never had any need for it. After \nequipping the armor, Felix finds two pristine iron daggers and their \nsheaths. In his past, Felix never really used daggers, but when he did, he \nonly used them as a tool, never as a weapon. Finally, Felix finds a small \nleather pouch that contains a small amount of rations and 100 gold, presumably for supplies. \n\nOnce Felix is finished, he then goes to meet up with the guard that the \nadvisor left in the armoury to \"guard\" Felix. Noticing that Felix was ready, \nthe guard escort Felix outside of the castle, in another long walk through \nthe castle. When they reach the gate, one of the guards reaches out and \ngrabs Felix by the collar of his shirt, pulls him in, and says in a very \nagitated voice. \n\nGuard #132: \"Listen Kid, what you're doing is really important to the city, \nso don't go betraying us 'er else we'll know.\" \nWith that the guard forcefully pushes Felix out into the streets and locks \nthe gate. Leaving Felix alone in the darks, unforgiving, streets. \n\nFelix only let the words of the guard eco in his mind for a brief second, \nreminding himself that he is doing this only for the people, before setting \noff down the road wondering where he should go first." };
	for (int i = 0; i < strlen(story3A); i++)
	{
		switch (i)											//Changes color of text
		{
		case 72: case 987: case 2165:
			SetConsoleTextAttribute(hConsole, 14);			//Sets text color to Yellow
			break;
		case 838: case 1096: case 1815:
			SetConsoleTextAttribute(hConsole, 10);			//Sets text color to Green
			break;
		case 559:
			SetConsoleTextAttribute(hConsole, 8);			//Sets text color to Gray
			break;
		case 312: case 617: case 862: case 1020: case 1274: case 2068: case 2196:	//At these characters
			SetConsoleTextAttribute(hConsole, 7);                                   //Set text color to White
			break;
		default:
			break;
		}
		cout << story3A[i];
		Sleep(x);
	}
}
void s3B(int tSpeed)
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int x = tSpeed;
	system("cls");
	char story3B[] = { "After a long held silence, Felix looks at the King with passion in his face \nand says, \nFelix: \"Y'know, I thought you were supposed to be the King of this city. I \nthought that you were supposed to be the upholder of piece and \neverything good, but it turns out you're just a lying, conniving, \nblackmailing noble just like the other fat pricks that live in this city, and I'd \nbe damned if I ever tried to help a piece of scum like you.\" \n\nThe King stares at Felix and seems to ponder what he said. The Advisor \nnow looks a bit more amused, and seems to be paying more attention to \nthe conversation that is unfolding. Eventually the King speaks in a bit of a \ndefeated tone. \n\nKing: \"I see.. Very well.\" \nThe King snaps his fingers and immediately the guards to his left begin to \ncharge towards Felix. Felix, knowing what the price of his words were, \nwas prepared for the oncoming adversaries. The first guard to reach Felix \nwent to grab and hold him, but Felix swiftly dodged out of the way to his \nleft to meet the hands of the other guard. Quickly Felix ducked and rolled \nunderneith the large guard, appearing behind him. In a blind panic the \nguard tried to turn to meet Felix, but at that point Felix already swiped the \ndagger that was on his back and was making a mad dash towards the \ndoor. \n\nIt took the guards a second to realize what had happened, but before \nthey could react, Felix was already at the door. Felix reached to open the \ndoor, but a bolt of pure magical energy whizzed past Felix's shoulder, \ncreating a small cut in his shirt. Felix dared not search for the person who \ncould cast such magics, instead he franticly opened the door and ran. \n\nIt wasn't long before the entire castle was on high alert and on the hunt \nfor him. Felix sprinted through the castle, trying to navigate the labyrinth \nand find the exit. Avoiding guards at every turn, Felix eventually found a \nhiding space in the cellar. The damp dark underground \"juice\" distillery \nwas like a god-send to Felix. \n\nIt wasn't long before the guards began to focus their search to other parts \nof the castle, and Felix used this as the opportune moment to escape. \nAfter several passageways and staircases, Felix found one of the many \nexits of the castle. It was night, meaning that Felix was able to slip out of \nthe castle walls undetected by any guards. \n\nOn the streets, Felix quickly sprinted to his old friend, the alleyway. \nPanting, Felix says to himself, \nFelix: \"It won’t be long before they raise the alert in the city, I need to find \nsome place to lay low...\"" };
	for (int i = 0; i < strlen(story3B); i++)
	{
		switch (i)											//Changes color of text
		{
		case 88: case 2507:
			SetConsoleTextAttribute(hConsole, 14);			//Sets text color to Yellow
			break;
		case 692:
			SetConsoleTextAttribute(hConsole, 8);			//Sets text color to Gray
			break;
		case 447: case 723: case 2619:						//At these characters
			SetConsoleTextAttribute(hConsole, 7);			//Set text color to White
			break;
		default:
			break;
		}
		cout << story3B[i];
		Sleep(x);
	}
}
void s4A(int tSpeed)
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int x = tSpeed;
	system("cls");
	char story4A[] = { "With that, Felix sets of towards the forest. He doesn't encounter anything \ntoo unsettling, but each guard that past him gave him a scornful glare. \nWhen Felix made it to the gate leading to the forest, the guards in charge \nof guarding it stopped Felix in his tracks. They didn’t do anything except \nremind Felix of his place in this mission, just like the other guard did. \n\nAs soon as Felix left the city he was surrounded in tall thick trees that \nseemed to stretch on for miles. With a heavy sigh and a expression of \ndetermination, Felix walked deeper into the woods." };
	for (int i = 0; i < strlen(story4A); i++)
	{
		cout << story4A[i];
		Sleep(x);
	}
}
void s4B(int tSpeed)
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int x = tSpeed;
	system("cls");
	char story4B[] = { "Felix: \"If I'm going to go into the most monster ridden part of the land, the \nforest, I'd better be prepared to face anything.\" \nFelix begins to walk towards the shopping district, in hopes that at least \none of the few shops left standing would be still be open. \n\nAfter a long walk, Felix arrives at the shopping district. Every stall and \nbuilding appears to be closed. \nFelix: \"Where should I go now?\"" };
	for (int i = 0; i < strlen(story4B); i++)
	{
		cout << story4B[i];
		Sleep(x);
	}
}
void s4C(int tSpeed)
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int x = tSpeed;
	system("cls");
	char story4C[] = { "Felix: \"If I can make it to the forest, out of the city, I'm sure no one will \ncatch me..\" \nFelix begins to make his way out of the city, hiding whenever a guard \ncaught a glimpse of him. Eventually Felix makes it to the barrier wall \nbetween the city and the forest. The guards that moneter the wall \nremained ever vigilant, but they were easily passed by Felix throwing a \nrock in a different direction to create sound. The guards fled to it like flies \nto a corpse. \n\nOutside of the city, Felix was surrounded by trees, but he knew had to put \nsome distance between him and the city. Around three minutes into the \nwalk, Felix stopped to catch his breath. \n\nBarley even a moment passed before a bolt of pure magical energy flies \npast Felix's head. Startled, Felix falls to the ground, dagger in hand. \nEventually a soft, but strong voice speaks. \n\n???: \"I had a feeling you'd be out here...\" \nFelix: \"Who's there?.. Show yourself...\" \n???: \"As you wish..\" \n\nEmerging from the trees comes a tall elvish man, wearing pristine garbs. \nThe man is none other than the King's advisor. \nAdvisor: \"You know the entire city is looking for you..\" \nFelix: \"Really? Hadn't noticed..\" \nThe advisor lets out a soft chuckle, before continuing \nAdvisor: \"You know, I'm really quite jealous.. scum like you is asked by \nthe King himself to save the Kingdom when there are far better people to \ndo the job, namly the ones who stand right next to him.\" \n\nFelix is intently staring at the Advisor who is staring back \nFelix: \"I may be scum, but at least I don't try to kill people!\" \nAdvisor: \"Yes, this is true, but death is the only way to rid this world of the \ncancer like you. Now if you would kindly hold still and die.\" \n" };
	for (int i = 0; i < strlen(story4C); i++)
	{
		cout << story4C[i];
		Sleep(x);
	}
	system("pause");
	fighting();
}
void s5A(int tSpeed)
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int x = tSpeed;
	system("cls");
	char story5A[] = { "While in the forest, Felix can't help but realize, how bright the moon was.\nAlmost as it were daylight, Felix navigates the Forest with ease. The \ncalm, cool, air of the forest was a nice change from crowded city, almost \nas if he were in a trans, Felix casually walks through the woods in the \ndirection of the old ruins. \n\nAfter a few minutes of walking, something catches Felix's eye. Off in one \nof the brushes nearby, Felix notices some movement; stopping to catch a \nglimpse of whatever disturbed the brush, Felix waited a few moments. \nSince there was no more movement Felix decided to move on, when an  \narrow wizzes past his face. \n\nNow alerted, Felix unshealths his two daggers, and calls out \nFelix: \"Who's there?\" \nTo which he gained no reply. In less than a moment two more arrows flies \nby Felixs body, and emerging from the brush appears a small group of \ncobalts, little blue humanoid creatures. Each of these monsters are \nholding some sort of weapon, whether it be swords or bows, and each \nare shouting out to Felix in an incomprehensible language. \nFelix, understanding their aggression, prepares to fight saying, \nFelix: \"I guess this is where the fun begins..\"" };
	for (int i = 0; i < strlen(story5A); i++)
	{
		cout << story5A[i];
		Sleep(x);
	}
}
void s5B(int tSpeed)
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int x = tSpeed;
	system("cls");
	char story5B[] = { "Inside of the Tavern, Felix can see an assortment of wooden chairs and \ntables scattered around. At the center back wall stood a bar, with tall fit \nman cleaning polishing a glass behind the wooden counter. \n\nThe man looks up at to observe the new comer, but he soon realizes who \njust walked through the door and an expression of amusement crosses \nhis face. He speaks in a deep voice. \nDemitri: \"Well look who is, my good pal Felix.. What do you want this \ntime.\" \nFelix: \"Hey Demitri.. Just came by to see if you've got anything that could \nhelp me, Ya see I seem to be in need of some supplies for my latest... \n\"Escapade\".\" \nDemetri, still smiling, lets off a little chuckle and says, \nDemitri: \"Heh.. always the same Felix.. Always \"in need\" of somethin.. \nHold on let me see if I got something in back.\" \nDemitri  walks from behind the bar to enter a room on the eastern wall. A \nfew moments pass before Demitri returns to the room holding a large \ncrossbow. \nDemitri: \"Y'er in luck Felix.. A fella came in here yesterday 'n tried to rob \nme with a crossbow.. Needless to say, he doesn't have a crossbow any \nmore... I could sell it to ya if you like.\" \n" };
	for (int i = 0; i < strlen(story5B); i++)
	{
		cout << story5B[i];
		Sleep(x);
	}
	system("pause");
	tavern();
	char extra[] = { "\n\n\nFelix: \"I think I'm good.. Thank you Demitri\" \nDemitri: \"Anything for my favorite thief.. You take care now..\" \nFelix smirks \nFelix: \"Ya.. that..\" \n\nFelix leaves the Tavern, and feeling confident in his choices, decides that \nhe's wasted enough time shopping. Felix decides to leave for the forest." };
	for (int i = 0; i < strlen(extra); i++)
	{ 
		cout << extra[i];
		Sleep(x);
	}
}
void s5C(int tSpeed)
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int x = tSpeed;
	system("cls");
	char story5C[] = { "Determined to find an open shop, Felix races around the plaza for nearly \nan hour, but all the shops have either been deserted or closed. Angered, \nFelix decides that there probably isn't a single shop open at this time and \ndecides it would just be best to enter the forest." };
	for (int i = 0; i < strlen(story5C); i++)
	{
		cout << story5C[i];
		Sleep(x);
	}
}
void demo()
{
	system("pause");
	system("cls");
	cout << "\n \n\n\n\n\n\n\n                           Thank You for Playing \n                              Created By:\n                              Writer:ShawnD Herrick\n                            Programmer: Jimmy Thai\n\n\n\n\n\n\n" << endl;
}