#include "stdafx.h"
#include <iostream>
#include <climits>
#include <conio.h>
#include <windows.h>
#include <string>
#include <iomanip>
using namespace std;
         //              _____                   _                      ____                                   
         //             |_   _|                 | |         ( )        |  _  \                                 
         //               | |_ __ __ ___   _____| | ___ _ __|/ ___     | | |  |_ __ ___  __ _ _ __ ___        
         //               | | '__/ _` \ \ / / _ \ |/ _ \ '__| / __|    | | |  | '__/ _ \/ _` | '_ ` _ \		  
         //               | | | | (_| |\ V /  __/ |  __/ |    \__ \    | |/  /| | |  __/ (_| | | | | | |
         //               \_/_|  \__,_| \_/ \___|_|\___|_|    |___/    |____/ |_|  \___|\__,_|_| |_| |_|  story and code by Mr.Mush® August 2018

//system("cls"); cout << Hhud << health << "     " << Ihud << inventory<< "/" << "10" <<endl <<endl;
float health = 100.00;
int inventory = 2;
int choice;
string Hhud = "Health: ";
string Ihud = "Inventory: ";
//All Paper Mario Reading Ouput
//The Code to Use it
/*for (int i = 0; b[i] != '#'; i++)
	{
		cout << b[i];
		z();
	}
	*/
void z() { Sleep(50); }   //Text Current speed
char mm[] = "Going Back to Main Menu\n#";
char a[] = "Please Select a Choice To Begin!\n#";
char b[] = "You find yourself awake under a bunk bed in a large dark room.\n#";
char c[] = "In the distance, a person is sleeping. You quietly walk up to their bed.\n\n#";
char Oa[] = "A Random & Suttle Voice in the Distance Quietly Whispers, \"Curious?\" Y / N: #";   //Path One if Yes
char Ob[] = "Gazing at the sleeping person, you try to identify them but you have no idea who or even what they are.\n They Might be awake actually.\n You see their backpack, take it? Y / N: #"; //Path 1
char Oc[] = "Unfortunatly the sleeping person heard you! He Grabs your arm right as your about to take the pack and leave the room.\n He stares at you with blinding lights out of his eye sockets...\n#"; //Path 1
char d[] = "A large glow surrounds your body and you begin to float, and your feet are pointed at the sleeping person\'s cranium.\n You then are hurled forward at the speed of light to where everything is so bright,\n you have no choice but to close your eyes.\n#";
char coa[] = "The Ground seems soft, almost like my bedsheets at home, and I can’t feel a thing. Ughh. I also have a massive headache. Get Up? Y / N: #"; //Chapter one a
char Tcoa[] = "You Try to get up but you end up exhausting your self and fall into a dead cold sleep.\n#";
																																						  //Text Speed 
//void TextFast() {
//	Sleep(20);
//}
//Options Menu
void OptionsMenu() {
	cout << "something will be here" << endl;
}
//Main Menu 
void MainMenu() {		 
	cout << setw(65);
	cout << "1.  Start Adventure" << endl;
	cout << setw(65);
	cout << "2.   Load Adventure" << endl;
	cout << setw(65);
	cout << "3.          Options" << endl;
	cout << setw(65);
	cout << "4.           Extras" << endl;					//Maybe some extra code or something
	cout << setw(65);
	cout << "5.   Exit the Dream" << endl << endl;
	//If more than one error different message
}
//Title of Game
void MenuTitle() {
	cout << "\n                    _____                   _                    _____                                " << endl
		<< "                   |_   _|                 | |         ( )      |  _   \\                              " << endl
		<< "                     | |_ __ __ ___   _____| | ___ _ __|/ ___   | | |   |_ __ ____  __ _ _ __ ___     " << endl
		<< "                     | | '__/  ' \\ \\ / / _ \\ |/ _ \\ '__| / __|  | | |   | '__/  _ \\/ _' | '_ ' _ \\    " << endl
		<< "                     | | | | (_| |\\ v /  __/ |  __/ |    \\__ \\  | |/   /| |  |  __/ ( | | | | | | |   " << endl
		<< "                     \\_/_|  \\__,_| \\_/ \\___|_|\\___|_|    |___/  |_____/ |_|   \\___|\\__,_|_| |_| |_|        v0.0.4 " << endl << endl;
}
//Menu Choices 

//Text ~ Story
void SplashScreen() {
	//Splash Screen (Fade Processing)

	Sleep(1200); //Black Pause to Splash
	system("color 08");
	cout << "\n\n                                                                    .-\'~~~-.				    " << endl
		<< "                          A Text-Based Adventure Game By          .\'o  oOOOo\`.				" << endl
		<< "                                ___ ___                          :~~~-.oOo   o\`.				" << endl
		<< "                           Mr. |   Y   .--.--.-----|  |--.       \`. \\ ~-.  oOOo.				" << endl
		<< "                               |.      |  |  |__.--|     |         \`.; / ~.  OO:				" << endl
		<< "                               |. \\_/  |_____|_____|__|__|        .\'  ;-- \`.o.\'				" << endl
		<< "                               |:  |   |                         ,\'  ; ~~--'~				" << endl
		<< "                               |::.|::.|     |                   ;  ;						" << endl
		<< "                         ______`-  .  -'____\\|/________________\\\\;_\\\\//___\\|/________" << endl;
	Sleep(600); //Grey wait
	system("color 07"); // White change
	Sleep(2500); //Splash Pause to View
	system("color 08"); // Grey Fade
	Sleep(600); //0.6 Second wait
	system("cls");
	Sleep(1000); // 1 second wait for main menu
	system("color 07"); // back to white text
	Sleep(2000);
	system("cls");
}

void intro() {
	//You find yourself awake under a bunk bed in a large dark room.
	system("color 0E"); system("cls"); cout << Hhud << health << endl << endl;
	for (int i = 0; b[i] != '#'; i++)
	{
		cout << b[i];
		z();
	}
	Sleep(400);
	//You See another person sleeping in the room and you get up and walk up to him.
	for (int i = 0; c[i] != '#'; i++)
	{
		cout << c[i];
		z();
	}

	cout << "          o            " << endl
	     << "    o    ,|.			" << endl
         << "    |  ,' \\ `.	    " << endl
         << "    |,'\\,' ,' `.   o	                        .             .    " << endl        
         << "    |.`. ,'     `. |	                      ./|____________/|    " << endl
         << "    | `.`.    o  ,'|	                      |//(~)/__---_.//|    " << endl
         << "    |    `.`. |,'  |	                      |/_/_________|//|    " << endl
         << "    |     `.`.|  ,'|	                      |_|__________|/      " << endl
         << "    |  ,' \\ `.|    |                          |            |       " << endl
         << "    |,'\\,' ,' |`.  |	" << endl
         << "    |.`. ,'   |  `.|	" << endl  
         << "    | `.`.    |  ,'|	" << endl
         << "    8   `.`.  |,'  |	" << endl
         << "          `.`.|  ,'|	" << endl
         << "            `.|,'  8	" << endl
         << "              |		" << endl
		 << "              8		" << endl;
	Sleep(400);
	//A Random & suttle Voice in the Distance quietly whispers, “Curios?” Y / N:
	for (int i = 0; Oa[i] != '#'; i++)
	{
		cout << Oa[i];
		z();
	}
	char a;
	cin >> a;
	if (a == 'Y' || a == 'y')
	{
		//Gazing at the sleeping person, you try to identify them but you have no idea who or even what they are. 
		//They Might be awake actually.\n You see their backpack, Take  it? Y / N:
		system("cls"); cout << Hhud << health << endl << endl;
		for (int i = 0; Ob[i] != '#'; i++)
		{
			cout << Ob[i];
			z();
		}
		cout << "\n\n              [_M_]			" << endl
			<< "         //// [=_=]			" << endl
			<< "        !!!!  n      \\\\\\\\	" << endl
			<< "        !   -'/   n _ ||||	" << endl
			<< "        \\   /     \\`-'''|	" << endl
			<< "         \\  |      \\   /	" << endl
			<< "         )  |       \\  \\	" << endl
			<< "        /   |        \\  \\   " << endl;
		char b;
		cin >> b;

		

		if (b == 'Y' || b == 'y')
		{
			system("color 03"); system("cls"); cout << Hhud << health << endl << endl;
				
			cout << "\a                      .eec.             .eeeec                   " << endl
				<< "                      z$*\"*$$eec..       zP  .3$c          ~ YOU GOT A BACKPACK! ~   " << endl
				<< "                     .$\"  d$\"  \"\"\"****bee*=*\"\" *$         " << endl
				<< "                     $%  d$$                   ^$%               " << endl
				<< "                    .$  z$%$bc.                 $%             " << endl
				<< "                    4F 4$\" $\"^$*ec..  .ee.    ./\" b          " << endl
				<< "                    dF $P  P  F   \"\"\"\"\"3F\"\"\"\"\"\"   4   " << endl
				<< "                    3b4$   \"           $F         4             " << endl
				<< "                    4$$$  -            $F         4              " << endl
				<< "                     $$$               $F         4              " << endl
				<< "                     *$$               $F         @              " << endl
				<< "                     4$$               $F         F        *Class B Backpack ~ 2/10 inventory*     " << endl
				<< "                     ^$F   .......     $F         F     You can use this anytime by pressing \'I\'" << endl
				<< "                      $\"  z\"      ^\"\"\"\"$F\"\"\"\"\"\"\"\"\"%.           " << endl
				<< "                     4$  4F     e      $L          \".           " << endl
				<< "                     4F  ^L    4$     z%\"c    *.    b           " << endl
				<< "                     d    ^$*=e$$eer=$\"  \"be..JL  ee*          " << endl
				<< "                     $     $   $F    $   zP   4P   F	         " << endl
				<< "                     F     F   $F    4. .P    d%  J              " << endl
				<< "                    4%     F   $F     F $\"   zP   P             " << endl
				<< "                    J      F   \'%     Fd\"   4P   4\"           " << endl
				<< "                    $      F          $F         P               " << endl
				<< "                    $      L         .$         4%               " << endl
				<< "                    *      '.       .$$.       .$                " << endl
				<< "                    '       ^\"****\"\"\"  \"*******$\"          " << endl
				<< "                     %                        .P                 " << endl
				<< "                      *c...              ....zd.@                  " << endl << endl;
			//Sleep(7000);
			system("pause");
			system("color 0E"); system("cls"); cout << Hhud << health << "     " << Ihud << inventory <<endl <<endl;
			cout << setw(55);  
			cout << "You can now use Your Inventory!" <<endl;
			system("cls"); cout << Hhud << health << "     " << Ihud << inventory << "/" << "10" << endl << endl;
			
			// Guy Catches you dialougue
			for (int i = 0; Oc[i] != '#'; i++)
			{
				cout << Oc[i];
				z();
			}
		}
		else {
			system("cls"); cout << Hhud << health << endl << endl;
			cout << "You Kindly leave the Backpack alone, staying as quiet as possible.\n" << endl;;
		}

	}
	else {
		system("cls");
		cout << "You Ignore the voice and head back to bed, But as your walking back...\n" << endl;
	}
	
	/*A large glow surrounds your body and you begin to float, and your feet are pointed at the sleeping person’s cranium.
	You then are hurled forward at the speed of light to where everything is so bright, you have to close your eyes.#*/
	for (int i = 0; d[i] != '#'; i++)
	{
		cout << d[i];
		z();
	}
	Sleep(3000);
	system("cls"); system("color 08"); Sleep(30);
	//NOTE: Put a loop for blinking effect with counter up to 5
	
	cout << "\n\n                                 ^+xw*\"\"\"^q_  0 p\" F  F _F  p^^\"___jM   j  F              F				" << endl
		<< "                                     _,,__   q x\" [  F J_ J  P  w\"\"\"\"_  _,\"  9  _m^\`\"*____x\"    _____		" << endl
		<< "                          9_   _wfv,,_w\"   \"M_ @ \`, \",_!u_9__L F #  r^\"\"^^\"    f j\"      \"      _*\"   \"6_	" << endl
		<< "                                   _,,__  B 9_ \"v,_Zp*\"\"\"\"\"^@u# P _m^\"^u,a*\"  j   ____       9       \"\"	" << endl
		<< "                                  _F    `4 A_ \"*-ap\"            ^Lj\" _smu,    _* ,-\"   9_   _wf			 " << endl
		<< "                                ^^\"__,,_ jL  -- m<                  5j! ____*-*^   &       \"\"\"\"     ___     " << endl
		<< "                                  p\"    9p\`^u,av\'                    \`,*""""q_   _x\" _aa,_        p^\" \"\"u	 " << endl
		<< "                                ,r  _____!L___,M                       Lsr--x_\"^^\`\" qP     9      J      \`M " << endl
		<< "                                 y^    \"_    _J                       L_,,_ ?_    _#       ^v- -^\"			 " << endl
		<< "                               _F  __,_`^---\"jr                        j___ \"\"y\"\"^^\"\"_,-r-u_					 " << endl
		<< "                               r^ j!    ?s_, *\"jp                   g\"\"\"\"^q_b_    _F     \"p      j^^\"\"-w	 " << endl
		<< "                                 L  _,wma_  _x\"jN__             __d\"\"\"^c  F  \"-^\"\"  _    \"c____j\'      L	" << endl
		<< "                                j\" J\"    \"\"\"  _F 99Nu______g**L_\"\"s  4 A,    _P\"\"\"^q_    \"\"         \"-	" << endl
		<< "                                m^  j_  _-^\"\"mw^\" _\' # 9\"N\"\"L ^, \"s  b #   \"--^\"      0					 " << endl
		<< "                                     @ j\"   _v-wa+\" ,\" j  #  p  r j qF \"q_   _*-wu_   9,     y^\`\"^w_		" << endl
		<< "                                  _,!  0_  f   _m-**\" _F _F  L _FjP ?,    \"^\"\"    \"u    \"---^      j		 " << endl
		<< "                                \"\"\"     # J   j\"   p\"\"\"p-^ x^ p\" d_   -q__a-mw_    j               \`L		 " << endl
		<< "                                       V  \`q  #   f   j   4   b   ^,   __      6_  ?,     _,__       \"--  " << endl
		<< "                           y^\`\"^w_*`^ww-\"     F 9L_ b   1   4   \`u_   \"-^\"\"*,    jh    ^-xm*\"   9z			" << endl
		<< "                         /                )    0 `+a_ W__ 9,___\"^^\"+_     L   0                k			 " << endl
		<< "                                    _x-*v+\"     9    0   \"b    \"_    \"p   _0   \`&    ___       d_			 " << endl;


/* This goes in right there ^
        _  _   _        _  _      _  _     ____   _   _    
       EJ  LJ /.\     F J  L ]  F J  L ]   L  J   EJ,  LJ,   
             //_\\    J |__| L  J |__| L   F  J   
 "AHH!"     / ___ \   |  __  |  |  __  |   J__L    "AHH!"    
           / L___J \  F L__J J  F L__J J    __         
          J__L   J__LJ__L  J__LJ__L  J__L  J__L        
          |__L   J__||__L  J__||__L  J__|  |__|        
 */



	Sleep(1000); system("cls"); 
}

void chapter1() {
	system("color 0E");
	cout << setw(75);
	cout << "~ Chapter 1 Unforgettable Friends ~" << endl;
	cout << "                                 /     \\                           " << endl
		<< "                                 vvvvvvv  /|__/|                  " << endl
		<< "                                    I   /O,O   |                  " << endl
		<< "                                    I /_____   |      /|/|        " << endl
		<< "                                   J|/^ ^ ^ \\  |    /00  |    _//|" << endl
		<< "                                    |^ ^ ^ ^ |W|   |/^^\\ |   /oo |" << endl
		<< "                                     \\m___m__|_|    \\m_m_|   \\mm_|" << endl;
	cout << " Would you Like to save your Progress? Y / N:  ";
	char s;
	cin >> s;
	// Make a Function for saving using fstream
	system("Pause");
	system("cls"); cout << Hhud << health << "     " << Ihud << inventory << "/" << "10" << endl << endl;
	//The Ground...Get up? Y/N
	for (int i = 0; coa[i] != '#'; i++)
	{
		cout << coa[i];
		z();
	}
	char a;
	cin >> a;
	if (a == 'y' || a == 'Y')
	{
		//Exhausting yourself...Dead cold sleep.
		for (int i = 0; Tcoa[i] != '#'; i++)
		{
			cout << Tcoa[i];
			z();
		}
		system("cls");
		cout << setw(75); 
		cout << "You have lost 20 health...";
		system("pause");
	}

	}

//Main ~ calls and Operations
int main()
{
	SplashScreen();
	
	//MAIN MENU WITH TITLE
	MenuTitle();
	Sleep(300);

	//Char A: Please select a choice to begin!
    cout << setw(45);
	
	for (int i = 0; a[i] != '#'; i++)
	{
		cout << a[i];
		z();
	}

	Sleep(800);
	bool loop = true;

	//Loop MainMenu Validation
	while (loop)
	{
		MainMenu(); //Calls Main Menu
		cin >> choice;//Pulls Choice Num

		//Loop check for Input is INT 
		while (cin.fail())
		{
			cin.clear(); //clear input buffer to a useable state
			cin.ignore(INT_MAX, '\n'); //ignre last input
			system("cls"); MenuTitle();
			cout << setw(80);
			system("color 04");
			cout << "\aOoops! That didn't work, Please Choose again! \n";
			MainMenu();
			cin >> choice;
		}
		//Case Statements //
		switch (choice)
		{
		case 1: system("cls"); MenuTitle();
			system("color 02");
			cout << setw(75);
			cout << "Excellent! Let the Adventure Begin!\n\n";
			cout << "                                       ";
			system("pause");
			break;
		case 2:system("cls"); MenuTitle();
			system("color 03");
			cout << "What do you want to remember?\n\n";
			system("pause");
			cout << "Chapters: 1 2 3 4 5 6 7 8" << endl
				<< "Please Enter a Chapter: ";
			int chap;
			cin >> chap;
			//if (chap <= 8 && chap > 0)
			//{
			//	if (chap == 1)
			//	{
			//		chapter1();
			//	}

			//	}
			break;
		case 3:system("cls"); MenuTitle();
			system("color 06");
			cout << "In Here You Can Get Ready for the Adventure!\n\n";
			system("pause");
			/*!!!!!OPTIONS CONSTRUCTION!!!!! Audio(AlarmsAndSoundsFromFiles) and Video(fullscreen?MaybeNot,TextSpeedForSure)*/
			break;
		case 4:system("cls"); MenuTitle();
			system("color 0D");
			cout << "These are Some Extras!\n";
			system("pause");
			break;
		case 5:system("cls"); MenuTitle();
			system("color 0C");
			cout << "Exiting Traveler's Dream... ";
			Sleep(1550);
			system("cls");
			cout << "Bye Bye!";
			Sleep(1500);
			return 0;
			break;
		default: system("cls"); MenuTitle();
			cout << setw(80);
			system("color 04");
			cout << "\aOoops! That didn't work, Please Choose again! \n";
		}	
		

		if (choice < 1 || choice > 5)
			loop = true;
		else
			loop = false;
	}

	intro(); //call for the intro to the story with path 1
	chapter1();

	
	//Char A : Begin Adventure (2 of 2)
	
	return 0;
}



//cout << Hhud << health << "     " << Ihud << inventory <<endl <<endl;
//cout << Hhud << health << endl;


/*Changelog & Hours Put into this:
8-5-18 (2hrs wrting,   6:30 Hours Programming) v0.0.1 MainMenu with Case Statments Done
8-6-18 (30 Min Wrting, 6 Hours Programming) v0.0.2 Intro and Ascii Art Done
8-7-18 (0 min Witing, 4 Hours Programming) v0.0.3 Added Mush Logo with Fades and Started IO reading for CH1
8-8-18 (2 Hours Studying, 3.5 hours Programming) v0.0.4 Added Bunk Bed Graphic & Hands with backpack & "AHH!" Graphic and Corrected first sentence in intro(); Plan to make a tree of events and paths next time.
8-12-18 (3 Hours Making Map,
*/
//Website Used + Notes
//https://asciiart.website//index.php
/*
"cant i just put it in a public class or would it work better in a private?"

HeXaGoN:
you can put it in a class
you can make it a static member
class SomeClass
	{
	public:
	 // ...
    static constexpr char SomeString[] = "Blah";


}
*/