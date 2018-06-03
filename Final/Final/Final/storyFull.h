#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void s0()
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int x = 50;
	system("cls");											//Clears screen
	char story0[] = { "The Kingdom of Makuria, like most Kingdoms, was quite peaceful. The King \nwas in good political standings with surrounding villages, the Kingdom was \nwealthy, crime was very minimal, and most importantly the people were \nhappy. \n\nThis peace lasted for centuries... But... like most stories of Heroism, \nthis peace was inevitably disrupted. \n\nOne day Monsters began to appear and started terrorizing the Kingdom. The \nguard, through their centuries of peace, grew lazy and weak proving that \nthey were no match for these malevolent beasts. Many-a-folk died in the \nfollowing years. \n\nThe King, reluctantly, was forced to shut the gates of Makuria in order \nto find a solution to their problem. The entire city was cut off from the \noutside world. The vast fortune that was collected over the years was used \nto repair the continuous damage to their walls, nearly emptying their \ncoffers. The city was on high alert with many of the citizens barricading \nthemselves in their homes, hoping that they'd have enough rations to \nsurvive the week, and the vast amount of dormant criminals took advantage \nof this mass hysteria to perform their vicious acts. \n\nWith no salvation in sight, these were truly dark times...\n \n\n\n\n\n\n\n\n\n                           One Year Later \n                        Where our story begins\n\n\n\n\n\n\n\n\n" };
	for (int i = 0; i < strlen(story0); i++)				//Causes the text ^^ to have a slight delay between characters
	{
		switch (i)											//Changes color of text
		{
		case 298:
			SetConsoleTextAttribute(hConsole, 14);			//Sets text color to Yellow
			break;
		case 358:
			SetConsoleTextAttribute(hConsole, 12);			//Sets text color to Red
			break;
		case 1220:
			SetConsoleTextAttribute(hConsole, 8);			//Sets text color to Gray
			break;
		case 305: case 367: case 1225:						//Sets text color to White
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
			x = 100;
		}
	}
	Sleep(3000);
	system("pause");
}
void s1()
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int x = 50;
	system("cls");			//Clears screen
	char story1[] = { "We see a young man with dark black hair and basic brown clothing running \nthrough a narrow alleyway with two heavily armoured men in close pursuit. \nThe dark haired man is leaping over barrels while holding a large brown \nbag, and doing anything to evade his pursuers. At one point one of the \narmoured man yells after the man... \n\nGuard #1: \"You can't run forever Felix! We'll catch you eventually!!\" \nFelix Smirks \nFelix: \"You've been saying that for months, Anthony; when are you gonna \ndeliver?\" \n\nAs soon as Felix finished his quip, he reached a cross section in the \nalleyway, and without skipping a beat, he turned right and, almost \nmechanically, he reached towards the nearby stack of crates and knocked \nthem over, blocking the alleyway. A few moments after the clanging of the \nguards armour stops at the crates, Felix smiles, turns, and begins to \ntrot down the muddy alleyway, leaving the cursing guards behind. \n\nA few moments later, Felix exits the alleyways onto the cobblestone main \nroad. The sun has just about to rise, casting a golden light onto the \ngray housing of the kingdom, almost creating a facade that the city was \nin its golden age of wealth and jubilation. \n\nFelix paid no mind to the empty streets that used to be cluttered with \nmerchants and people; in less than a minute, Felix walked towards a small \nwooden and stone shack that was dwarfed by the surrounding buildings. \nWith the brown bag clutched between his arms, Felix walks towards the \nbuildings door and knocks. After a brief moment of silence the door opens, \nbut only slightly, to reveal a skinny, short, gray haired, old man \npeering out into the streets. \n\nAs soon as the man saw Felix, though, his eyes widened and he swung the \ndoor all the way open to usher Felix inside. As soon as Felix was inside \nthe old shack the man closed and locked the door, and as soon as he turned \naround Felix thrusted the bag into the man's arms. Felix retreated to the \nold wooden table, that was in the far left corner of the one room building, \nwhere he plopped down into one of the many old looking chairs surrounding \nit, where the man began to speak in a frantic raspy voice. \n\nOld Man Jenkins: \"OH!.. Uhh.. T-Thank you Felix..\" \nAt which point the man opens the sack to reveal an assortment of stale \nbread and old cheeses. \nFelix: \"Yea.. Don't mention it, Herold..\" \nFelix Leaned back in his chair, exhausted, and closed his eyes, leaving \nthe room and the man, who was staring at the brown bag, in silent. After a \nbrief pause, the man spoke, not looking away from the bag, in an almost \ntimid fashion. \n\nOld Man Jenkins: \"So.. Uhh... where did you get them this time?..\" \nFelix smirks with his eyes still closed \nFelix: \"Heh.. Just a few greedy nobles on the other side of town who think \nthey can hoard food while others starve.\" \n\nFelix opens his eyes and meets the gaze of the man now looking at him. \nFelix: \"You should of heard the tantrum they threw! They were screaming \nand yelling at me telling me to bring the stuff back.\" \nFelix, now looking even more amused. \nFelix: \"One even tried to chase me! But, the fat prick got winded easily!\" \nHe lets out a slight laugh while the man stares at him stone eyed \n\nFelix: \"They even sent the guard after me! Seven of'em I think! Chased \nme right across town, but I managed to lose them in the alleyw--\" \nThe old man, now with a sudden new amount of courage, says \nOld Man Jenkins: \"THAT’S ENOUGH!\" \nFelix looks at him dumbfounded. \n\nOld Man Jenkins: \"You can’t keep doing this Felix! Stealing food, in \nthese times, is punishable by death, and yet you go out each and every \nnight, breaking into people's homes, stealing from their pantries, and \nputting yourself into danger! I can’t take it, Felix, you have such a life \nand you waste it by being a petty thief!\" \n\nFelix stares at the the man, who's staring back. There's a moment of \nsilence as the old man's words echos in the silent room. Felix, in a more \nserious tone, then breaks the silence. \nFelix: \"Ya'know, you're not the first person to confront me about this.. \njust last week Mrs. Alvingham confronted me for the exact same thing.. \nso I'll tell you what I told her...\" \nso I'll tell you what I told her...\" \n\nFelix: \"Years ago, before the world went to hell, my ambitions in life \nwere simple enough; I tried to make an easy coin where ever I could, but I \nnever tried anything on any of the common folk... I stayed on the path of \n\"righteousness\", per say, and only stole from the stuck up nobles at the \nhigher end of the town. The months that followed, the ones that began this \nmess, I realized that people all over the city began to fall into pits of \npoverty and hunger. I thought that everyone in the city felt the impact of \nthose times, but then, on one of my usual runs, I caught a glimpse of a \nnoble's pantry.. only to stockpiles of food galore. I soon realized that \nthose pigs were living the same privileged lives they had before the \nmonsters came, while the rest of us scrounged for scraps, withering away.\" \n\nFelix is now out of his chair and walking over to the, wide-eyed, old man. \nFelix: \"Don't you see, Herold? People should be helping each other in this \ntime of need, not watching others die for no good reason!\" \nFelix, walking towards the door making a motion to leave the hut, looks \nback at the old man and says. \n\nFelix: \"And as for getting caught? Well.. \" \nHe smirks just as he reaches the door \nFelix: \"They'll have to catch me first.\" \nWith that Felix opens the door only to catch a glimpse of a tall, elven,figure staring at him \nbefore everything goes dark." };
	for (int i = 0; i < strlen(story1); i++) //Gives a delay between characters ^^
	{
		switch (i)			//Changes text color at certain points in the story
		{
		case 427: case 2363: case 2766: case 2964: case 3134: case 3283: case 4091: case 4322: case 5233: case 5481: case 5569: //Changes color to Yellow
			SetConsoleTextAttribute(hConsole, 14);
			break;
		case 512: case 2407: case 2886: case 3095: case 3213: case 3426: case 4319: case 5154: case 5373: case 5529: case 5614: //Changes clor to White
			SetConsoleTextAttribute(hConsole, 7);
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
void s2()
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int x = 50;
	system("cls");
	char story2[] = { "When Felix regains consciousness, he notices that he is in a small, \nwhite, very clean room. The room itself has a red tile flooring with a \nlong strip of finely detailed, gold, paint separating the intersection of \nthe floor and the wall, with the wall being a fine white. There's a \nsingle, large, window with golden trimmings and silk curtains to the right \nof Felix, but it is angled in such a way that he cannot see what lies \nbeyond it. He can tell it is just turning dusk. Felix, himself, has his \nhands tied to the back of a red and gold chair, which Felix recognizes as \nchair only a person of nobility could afford. \n\nBefore Felix can think of a way to unravel his bindings, the fine oak door \nacross the small room bursts open. Two guards, in silver armor march into \nthe room and make a beeline towards Felix, and before he could say \nanything, one guard cuts his hands loose, and without a moment to spare, \nis picked up by both the guards and is escorted out of the room. \n\nThey move out into a hallway with the same style of flooring and walls as \nwas in the room. There are multiple doors on the left hand side with the \nright hand has multiple windows. At the end, the hallway turns left. A bit \nperturbed, and unsuccessfully not showing it, Felix says, \nFelix: \"Sooo... uhhh... who sent you lot? Was it the Lestranges? Are they \nmad about the uhh.. \"improvements\" I made to their family portrait?\" \n\nThe guards kept on marching, unfazed by Felix's remarks. Eventually, \nafter a long awkward walk, they reach a large, lavish, brown oak door \nwhere the guard promptly open, and force Felix into a very luxurious and \nlarge room. \n\nEach wall was covered with multiple multicolored paintings with the \nexception of one wall with two grand windows surrounding a golden \nthrone. A second door is also next to the door Felix was ushered through. \nA grand chandelier hangs from the ceiling. \n\nThe room's only occupants are Felix and the guards. Not even a moment \npasses before the second door bursts open where a few more guards, an \nelf, and an old man, wearing very regal clothing, walked through. \n\nNow realizing exactly what trouble he has gotten himself into, Felix \nimmediately kneels to the ground with his head held low. The usual \nexpression complacency that occupied Felix’s face was completely and \nutterly replace with an expression of true terror as Felix was in the \npresence of the most powerful political authority in the kingdom, the king \nhimself. \n\nThe King crosses the room and rests on the throne while the two guards \nquickly, and almost mechanically, stand at attention to the King's left. The \nelvish man, looking rather unamused, stands tall with his hands behind \nhis back to the King's right. The room is quite. \n\nThe King is slowly inspecting Felix from across the room with a scowl \nacross his face. After a moment that feels like an eternity, the King waves \nto the guards surrounding Felix, and motions to bring him over. Without \nhesitation the guards drag, the wide-eyed, Felix to his feet and almost \ncarry him over to face the king. Felix, knowing that a single wrong move \ncould mean imprisonment or even death, dares not to say a word. \n\nWhen Felix is presented to the King, Felix kneels before him and dares \nnot look at anything but the floor. Not a moment passes before the King \nspeaks in a withered, but strong voice. \nKing: \"Felix Crowmore..\" \nHe lets out a small chuckle \nKing: \"Oh have I heard a lot about you.. from what my guards tell me \nyou've been the one harassing the citizens, causeing massive damage to \nlocal supplies, and committing grand larceny, which should I remind you \nis highly illegal in this age. The sole reason why you haven't been \nimprisoned for crimes against the city is because I have a proposition for \nyou..\" \n\nFelix looks up at the King, who is staring back at him, with a surprised \nexpression as Felix was certain that he was going to be incarcerated on \nthe spot, but instead he is needed by the King himself! \n\nKing: \"As much as I despise ruffians like you, I am left with very few \nchoices in our current situation..\" \nFelix: \"Which is...\" \n\nThe King is slightly taken aback by Felix's sudden outburst, but only for a \nmoment; the King stares at Felix who returns his gaze to the floor. Before \nlong, the King gives a weak smile, rises from his throne, and begins to \nwalk towards one of the windows. Felix stares at the King as he looks \nsoberly out the window at the kingdom below. \n\nKing: \"In all of my years, this past year has been the most \ndifficult.. monsters appearing out of nowhere and besieging the city, I've \nlost countless good men straining our city's ability to protect itself.\" \nThe King is now looking down towards the floor recalling past events. \nKing: \"From the very first day, I searched for a way to bring our city back \nto its glory, but no matter what I did, there was no sign of any avail, no \nlight in the dark...\" \nThe King turns to meet the gaze of Felix \nKing: \"..until today..\" \n\nAt the King's last word, Felix seems to lose all of his former fear, and \njumps to his feet with an expression of seriousness. This caused the \nKing’s guard to ready their weaponry, but the King waves them off. The \nKing begins to walk towards his throne as Felix says, \n\nFelix: \"How?!\" \nKing: \"I've recently been informed, by the royal wizard, that a powerful \ndark energy has begun pulse from beyond the ruins, in the mountains. \nThe few men that managed to survive the journey to the mountains have \ntold us that there seems to be a hoard of monsters are accumulating.\" \n\nFelix, now a bit sceptical \nFelix: \"And.. what does this have to do with me?\" \nKing: \"Everything my dear boy.\" \nThe King places himself atop his throne, staring at the obviously confused \nFelix, and says, \nKing: \"You see, from what my guard tell me, you've evaded every attempt of capture. You're impossible to find when you go into hiding; even now I had to personally send my advisor.\" \nThe King glances at the obviously bored elvish man next to him \nKing: “Even then it was no easy task finding you. See, you have a set of \nskills that would more than compensate our current lack of military \npower..\" \n\nFelix eyes goes wide, as he suddenly realizes exactly what this meeting \nis about. \nFelix: \"No! You don't mean..\" \nKing: \"Yes, Felix, you're here so I can personally request your assistance \nin ending these dark times.\" \n\nFelix is completely awestruck at this proposal. \"This is a chance to \nchange the world for the better\", Felix thinks to himself. Many thoughts \npass through Felix's mind, all telling him that if he took this chance that he \ncould help people without stealing; his mind was racing until one thought, \nin particular, resonated with him. \n\nNow sceptical of the King, Felix gives off a glare and askes \nFelix: \"And if I say no?\" \nThe King's face of near plea, changes to a more serious face in an instant \nKing: \"Let's just say you don't want to say no, you see, like I said, you've \ndone many illegal things in your time, and I'm the only one standing \nbetween you and a lifetime in prison.\" \n\nGlaring at the King, Felix can’t help but think of how every noble, even the \nKing, are all the same, using whatever dirty tactic to get their way. \n\nKing: \"What will it be Felix, will you help the Kingdom find it's way out of \nthe darkness or watch it wither away?\"" };
	for (int i = 0; i < strlen(story2); i++)
	{
		switch (i)											//Changes color of text
		{
		case 1290: case 4192: case 5388: case 5730: case 6412: case 6966:	//At these characters
			SetConsoleTextAttribute(hConsole, 14);							//Set text color to Yellow
			break;
		case 3433: case 3492: case 4079: case 4569: case 4857: case 5081: case 5407: case 5784: case 5916: case 6167: case 6446: case 7073: case 7421:
			SetConsoleTextAttribute(hConsole, 8);			//At these characters ^^^, set text color to Gray
			break;
		case 1441: case 3462: case 3868: case 4217: case 4785: case 5038: case 5109: case 5699: case 5820: case 6102: case 6324: case 6556: case 6996: case 7266: case 7542:
			SetConsoleTextAttribute(hConsole, 7);			//At these characters ^^^, set text color to White
			break;
		default:
			break;
		}
		cout << story2[i];
		Sleep(x);
	}
}
void s3A()
{
	int x = 50;
	system("cls");
	char story3A[] = { "" };
	for (int i = 0; i < strlen(story3A); i++)
	{
		cout << story3A[i];
		Sleep(x);
	}
}
void s3B()
{
	int x = 50;
	system("cls");
	char story3B[] = { "" };
	for (int i = 0; i < strlen(story3B); i++)
	{
		cout << story3B[i];
		Sleep(x);
	}
}
void s4A()
{
	int x = 50;
	system("cls");
	char story4A[] = { "" };
	for (int i = 0; i < strlen(story4A); i++)
	{
		cout << story4A[i];
		Sleep(x);
	}
}
void s4B()
{
	int x = 50;
	system("cls");
	char story4B[] = { "" };
	for (int i = 0; i < strlen(story4B); i++)
	{
		cout << story4B[i];
		Sleep(x);
	}
}
void s4C()
{
	int x = 50;
	system("cls");
	char story4C[] = { "" };
	for (int i = 0; i < strlen(story4C); i++)
	{
		cout << story4C[i];
		Sleep(x);
	}
}
void s5A()
{
	int x = 50;
	system("cls");
	char story5A[] = { "" };
	for (int i = 0; i < strlen(story5A); i++)
	{
		cout << story5A[i];
		Sleep(x);
	}
}
void s5B()
{
	int x = 50;
	system("cls");
	char story5B[] = { "" };
	for (int i = 0; i < strlen(story5B); i++)
	{
		cout << story5B[i];
		Sleep(x);
	}
}
void s5C()
{
	int x = 50;
	system("cls");
	char story5C[] = { "" };
	for (int i = 0; i < strlen(story5C); i++)
	{
		cout << story5C[i];
		Sleep(x);
	}
}