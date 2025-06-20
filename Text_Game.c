#include <stdio.h>  //για printf και scanf
#include <stdlib.h> //για system(cls)
#include <string.h> //βιβλιοθηκη για να κανει input-compare strings
#include<windows.h>    //βιβλιοθηκη για το Sleep(); καθηστερηση δευτερολεπτων

    int move;
	char ch;
	char dum;
	char porta[8];
	char username[15];
	
	
	 
int main () {
begin:
	system("color 02" );    //αλλαγη χρωματος 1(background) A(fonts)
	system("chcp 1253");	//με την εντολη αυτη εμφανιζονται τα ελληνικα
	system("cls");	

	printf("To παιχνίδι είναι text adventure game. \n");
	printf("\n");
	printf("ΟΔΗΓΙΕΣ ΠΑΙΧΝΙΔΙΟΥ:\n");
	printf("\n");
	printf("Πρόκειτε για ενα παιχνίδι περιπέτειας χωρίς εικόνες.\n");
	printf("Είναι παιχνίδι επιβίωσης στο οποίο ο χρήστης πρέπει με συγκεκριμένες επιλογές να καταφέρει να τερματίσει.\n");
	printf("Θα σας ζητηθεί να διαλέξετε ανάμεσα σε επιλογές είτε γράφοντας ολόκληρες λέξεις είτε αριθμούς.\n");
	printf("Στα σημεία του παιχνιδιού που θα ζητηθεί να γράψετε, είναι σημαντίκο να γράφετε με μίκρα ελληνικά γράμματα,\n");
	printf("διαφορετικά θα την πιάνει για λάθος επιλογή και δεν θα μπορείτε να προχωρήσετε στην επόμενη πίστα.\n");
	printf("\n");
	printf("ΠΡΟΣΟΧΗ: Για να αλλάξει η γραμματοσειρά από ελληνικά σε αγγλικά ή το αντίστροφο πάτησε το 'alt' και το 'shift' στο πληκρολόγιο ταυτόχρονα. \n");
	printf("\n");
	system("pause");
	system("cls");

    
    printf(" #         ##       #      # # #     # # #   #    #    # # #    \n");
    Sleep(150);
    printf(" #       #    #    # #     #    #      #     # #  #   #         \n");
    Sleep(150);
	printf(" #       #    #   # # #    #    #      #     #  # #   #  # #   \n");
	Sleep(150);
    printf(" # # #     ##    #     #   # # #     # # #   #    #    # # #    ");
    Sleep(300);
    printf("# ");
    Sleep(300);
    printf("# ");
    Sleep(300);
    printf("#\n");
    Sleep(680);
    system("cls");
	printf("\n");
arxi:	
	printf("Όνομα παίχτη: ");
	scanf("%s",&username);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	Sleep(100);
	printf("       ***************************************\n");
	Sleep(100);
	printf("       *                                     *\n");
	Sleep(100);
	printf("       *                                     *\n");
	Sleep(100);
	printf("       *                                     *\n");
	Sleep(100);
	printf("       *                                     *\n");
	Sleep(100);
	printf("       *         THE ROOMS of TERROR         *\n");
	Sleep(100);
	printf("       *                                     *\n");
	Sleep(100);
	printf("       *                                     *\n");
	Sleep(100);
	printf("       *                                     *\n");
	Sleep(100);
	printf("       *                                     *\n");
	Sleep(100);
	printf("       *                                     *\n");	
	Sleep(100);
	printf("       ***************************************\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	system("pause");
	system("cls");
	Sleep(1000);
	printf("Ξυπνάς ζαλισμένος σε ένα σκοτεινό δωμάτιο,");
	printf("\n");
	printf("το κεφάλι σου κοντέυει να σπάσει.");
	printf("\n");
	printf("Συνειδητοποιείς ότι  πρέπει να σε νάρκωσαν χθες το βράδυ στο μπαρ.\n");
	printf("\n");
	system("pause");
	system("cls");
	printf("Ευθεία μπροστά σου παρατηρείς ένα παλιό σκουριασμένο κρεββάτι.");
	printf("\n");
	printf("Πίσω από το κρεββάτι διακρίνεις να υπάρχει μια σκάλα που πηγαίνει προς πάνω.");
	printf("\n");
	printf("Μάλλον βρίσκεσαι σε υπόγειο...");
	printf("\n");
	printf("Προσπαθείς να σήκωθεις αλλά δεν μπορείς να κουνήσεις τα χέρια σου... είσαι δεμένος.\n");
	printf("\n");
	printf("Κάτι πρέπει να κάνεις για ώστε να λυθείς...\n");
	printf("\n");
	system("pause");
	
	
	
	
system("cls");
first_move:		

	printf("Κοιτάς γύρο σου για οτιδήποτε αιχμηρό.\n");
	printf("\n");
	printf("Στα δεξιά σου βλέπεις να υπάρχει μια εργαλειοθήκη.\n");
	printf("Στα αριστερά σου ένα τσεκούρι που από την σκόνη του φαίνεται ξεχασμένο.\n");
	printf("Και τα δύο μπορέις να τα τραβήξεις προς το μέρος σου με τα πόδια σου.\n");
	printf("\n");
	printf("\n");
	printf("Τι επιλέγεις να φτάσεις;\n");
	printf("(Πληκτρολόγησε το αριθμό του αντικειμένου που θες να φτάσεις και πάτησε το ENTER).\n");
	printf("\n");
	Sleep(400);
	printf("\n");
	printf("(1) Εργαλειοθήκη\n");
	Sleep(400);
	printf("(2) Τσεκούρι\n");
	Sleep(400);
	printf("\n");
	printf("Επόμενη κίνηση: ");
	fflush(stdin);
	scanf("%i",&move);
	
	if (move == 1) {
		system("cls");
		Sleep(350);
		printf("Τέντωνεις τα πόδια σου για να φτάσεις την εργαλειοθήκη...\n");
		printf("Στην προσπάθεια σου ρίχνεις κάτω τα εργαλέια.\n");
		printf("Σε άκουσε ο φρουρός, ήρθε και σε αιχμαλώτησε πάλι.\n");
		printf("Δοκίμασε πάλι\n");
		system("pause");
		system("cls");
		goto first_move;
		
		

	} else if (move == 2){
		system("cls");
		Sleep(350);
		printf("\n");
		printf("Τα κατάφερες, έφτασες το τσεκούρι και μπόρεσες να λυθείς.\n");
		printf("\n");
		system("pause");
		system("cls");
		goto second_move;
		
		
	} else if (move > 2){
		printf("Δοκίμασε πάλι\n");
		system("pause");
		system("cls");
		goto first_move;
    		

		}else if(ch == 'ν' || ch == 'n') {
			system("cls");
			goto first_move;
			
		}
		printf("\n");
    	system("pause");
    		
    	

  	
second_move:
	printf("Ανεβαίνεις σιγά σιγά την σκάλα.\n");
	printf("Φτάνεις έξω από την πόρτα και προσπαθείς να ακούσεις τι γίνεται απ'έξω.\n");	
	printf("\n");
	printf("Δεν ακούγεται τίποτα...Αποφασίζεις να ανοίξεις προσεκτικά και αθόρυβα την πόρτα\n");
	printf("Έξω από την πόρτα βλέπεις να στέκεται ο φρουρός.Τι θα κάνεις τώρα;\n");
	printf("\n");
	system("pause");
	printf("\n");
	printf("(Διάλεξε αριθμό ανάλογα την κίνηση που θες να κάνεις).\n");
	printf("\n");
	printf("1)Αναμέτριση σώμα με σώμα με τον φρουρό.\n");
	Sleep(400);
	printf("2)Τρέχεις για να σωθείς.\n");
	Sleep(400);
	printf("3)Χτυπάς με το τσεκούρι τον φρουρό για να μείνει αναίσθητος.\n");
	Sleep(400);
	printf("\n");
	printf("Επόμενη κίνηση: ");
	fflush(stdin);
	scanf("%i",&move);
	
	if (move == 1) {
		system("cls");
		Sleep(350);
		printf("Παλέυεις σκλήρα με τον φρουρό.\n");
		printf("Αλλά λόγο της εκπαίδευσης που έχει κατάφερε και σε σκότωσε.\n");
		printf ("Δοκίμασε πάλι.\n");
		printf("\n");
		system("pause");
		system("cls");
		goto second_move;


	} else if (move == 2){
		system("cls");
		Sleep(350);
		printf("Ξεκίνησες να τρέχεις\n");
		printf("Ο φρουρός σε είδε και κάλεσε ενισχύσεις.\n");
		printf("Σε πιάσανε και σε αιχμαλώτησαν ξανά.\n");
		printf("Δοκίμασε πάλι.\n");
		printf("\n");
		system("pause");
		system("cls");
		goto second_move;
	
	}else if(move ==3){
		system("cls");
		Sleep(350);
		printf("Την ώρα που βλέπεις ότι ο φρουρός δεν προσέχει τον χτυπάς με την λαβή του τσεκουριού και καταφέρνεις και τον ακινητοποιείς πριν καλέσει ενισχύσεις.\n");
		printf("\n");
		system("pause");
		system("cls");
		goto third_move;
		
		
		
		
	 }else if (move > 2){
		printf("Δοκίμασε πάλι.\n");
		system("pause");
		system("cls");
		goto second_move;
    		

}
		
third_move:
	fflush(stdin);
	
	printf("Βρέθηκες σε έναν σκοτεινό διάδρομο με ελάχιστο φως.\n");
	printf("Υπάρχουν μόνο 3 πόρτες.\n");
	printf("\n");
	printf("Μια μάυρη δεξιά σου, μια πρασινη ευθεία, μια κόκκινη αριστερά σου. \n");
	printf("Πρόσεχε γιατί πίσω από την κόκκινη πόρτα ακούγονται φωνές!\n");
	printf("\n");
	printf("Σε ποια από τις 3 επιλέγεις να μπεις;\n");
	printf("\n");
	printf("Μαύρη\n");
	printf("Κόκκινη\n");
	printf("Πράσινη\n");
	printf("\n");
	printf("Γράψε σε ποια πόρτα θες να μπεις ανάλογα με το χρώμα τους(μαυρη,κοκκινη,πρασινη)με ελληνικά μικρά γράμματα χωρίς τόνους.\n");
	printf("ΠΡΟΣΟΧΗ: Για να αλλάξει η γραμματοσειρά από ελληνικά σε αγγλικά ή το αντίστροφο πάτησε το 'alt' και το 'shift' στο πληκρολόγιο ταυτόχρονα. ");
	printf("\n");
	printf("\n");
	printf("Επόμενη κίνηση: ");
	printf("\n");
	fflush(stdin);
	scanf("%s",porta);
	
		
	
	if (strcmp(porta, "μαυρη") == 0 ){
		system("cls");
		printf("Ανοίγεις όσο πιο σιγά μπορείς την μάυρη πόρτα...\n");
		printf("Μπήκες σε ένα μικρό δωμάτιο.\nAρχίζεις να ψάχνεις για οτιδήποτε μπορεί να χρειαστείς.\n");
		printf("\n");
		printf("Βλέπεις ένα φακό, σπίρτα και ένα σβηστό καντίλι.\n");
		printf("\n");
		system("pause");
		system("cls");
choice:		
		printf("Διάλεξε ποίο αντικείμενο θες να πάρεις μαζί σου\n");
		printf("\n");
		printf("(1)Φακός\n");
		Sleep(400);
		printf("(2)Σπίρτα\n");
		Sleep(400);
		printf("(3)Καντίλι\n");
		Sleep(400);
		printf("(4)Και τα τρία\n");
		Sleep(400);
		printf("\n");
		printf("Επόμενη κίνηση: ");
		fflush(stdin);
		scanf("%i",&move);
		
		if (move == 1) {
			system("cls");
			Sleep(350);
			printf("Είσαι σίγουρος; Αφού έχεις χώρο γιατί να πάρεις μόνο ένα αντικείμενο;\n");
			printf ("Δοκίμασε πάλι.\n");
			printf("\n");
			system("pause");
			system("cls");
			goto choice;
	
	
		} else if (move == 2){
			system("cls");
			Sleep(350);
			printf("Είσαι σίγουρος; Τα σπίρτα από μόνα τους δεν κάνουν κάτι.\n");
			printf("Δοκίμασε πάλι.\n");
			printf("\n");
			system("pause");
			system("cls");
			goto choice;
		
		}else if(move ==3){
			system("cls");
			Sleep(350);
			printf("Το καντίλι είναι σβηστό. Σου είναι αχρείαστο έτσι.\n");
			printf("\n");
			system("pause");
			system("cls");
			goto choice;
			
		} else if(move == 4) {
			printf("Πολύ καλή σκέψη. Όλο και κάτι μπορεί να χρειαστείς.\n");
			printf("\n");
			fflush(stdin);
			printf("Βγαίνεις από το δωμάτιο...\n");
			system("pause");
			Sleep(350);
			system("cls");
			goto forth_move;
			
		 }else if (move > 4){
			printf("Δοκίμασε πάλι.\n");
			system("pause");
			system("cls");
			goto choice;		
		}
		
		
	} else if (strcmp(porta, "κοκκινη") == 0 ){
		system("cls");
		printf("Ανοίγεις σιγά σιγά την κόκκινη πόρτα...\n");
		printf("Για κακή σου τύχη μπήκες στο δωμάτιο των φρουρών.Σε αιχμαλώτησαν.\n");
		printf("Καλό θα ήταν να μην ξαναμπείς εδώ μέσα.");
		printf("Δοκίμασε πάλι.\n");
		printf("\n");
		system("pause");
		system("cls");
		goto third_move;
		
		
	}else if(strcmp(porta, "πρασινη") == 0){
		system("cls");
		printf("Ανοίγεις την πράσινη πόρτα αλλά είναι τόσο σκοτεινά που δεν μπορείς να δεις τίποτα\n");
		printf("Πρέπει να ψάξεις να βρεις κάτι ώστε να βλέπεις.\n");
		printf("Δοκίμασε κάποια άλλη πόρτα.");
		printf("\n");
		system("pause");
		system("cls");
		goto third_move;
	
	
	}else{
		printf("(Γράψε σωστά την λέξη.)\n");
		printf("\n");
		system("pause");
		system("cls");
		goto third_move;
		
	}
	

	
	
	
system("cls");	
forth_move:
	
	printf("Eίσαι πάλι στον διάδρομο που ήσουν.\n");
	printf("Σε ποια από τις 2 πόρτες επιλέγεις να μπεις;\n");
	printf("Κάνε γρήγορα γιατί πίσω από την κόκκινη πόρτα βρίσκονται φρουροί.\n");
	printf("\n");
	printf("(Γράψε σε ποια πόρτα θες να μπεις ανάλογα με το χρώμα τους(μαυρη,πρασινη) με ελληνικά μικρά γράμματα χωρίς τόνους.)\n");
	printf("\n");
	printf("\n");
	printf("Επόμενη κίνηση: ");
	scanf("%s",porta);
	
	if (strcmp(porta, "μαυρη") == 0 ){
		system("cls");
		printf("Μπήκες πριν στη μάυρη πόρτα.\n");
		printf("Επέλεξε μια άλλη\n");
		system("pause");
		system("cls");
		goto forth_move;
		
		
	} else if(strcmp(porta, "πρασινη") == 0){
		system("cls");
		printf("Ανοίγεις την πράσινη πόρτα αλλά είναι τόσο σκοτεινά που δεν μπορείς να δεις τίποτα.\n");
		printf("Δες αν μπορείς να χρησιμοποιήσεις κάτι για να δεις.\n");
	fakos:		
		printf("Στο σακίδιο σου έχεις: (1) Φακό , (2) Σπίρτα (3) Καντίλι\n");
		printf("\n");
		printf("Τι θες να χρησιμοποιήσεις;\n");
		printf("\n");
		printf("Γράψε τον αριθμό του αντικειμένου που χρειάζεσαι: ");
		printf("\n");
		fflush(stdin);
		scanf("%i",&move);
		
		switch(move){
			case 1:
				system("cls");
				printf("Τώρα που μπορείς να δεις συνεχίζεις και μπαίνεις στο δωμάτιο.\n");
				break;
			case 2:
				printf("Τα σπίρτα μπορεί να σου χρειαστούν αργότερα. Καλό είναι να τα κρατήσεις.\n");
				printf("\n");
				system("pause");
				system("cls");
				goto fakos;
				break;
			case 3:
				printf("Το καντίλι είναι σβηστό και δεν έχεις χρόνο για χάσιμο.\n");
				printf("\n");
				system("pause");
				system("cls");
				goto fakos;
				break;
			default:
				printf("Διάλεξε ένα από τα τρία αντικείμενα.\n");
				printf("\n");
				system("pause");
				system("cls");
				goto fakos;
				break;			
					
		}
	
		} else {
		printf("(Γράψε σωστά την λέξη.)\n");
		printf("\n");
		system("pause");
		system("cls");
		goto forth_move;
		printf("\n");
	}
	
	
	printf("Αρχίζεις να ψάχνεις για οτιδήποτε χρήσιμο.\n");
	printf("\n");
	printf("Ξαφνικά ακούς βήματα να έρχονται προς το μέρος σου.\n");
	printf("\n");
	system("pause");
	system("cls");
panic_room:	
	printf("Πρέπει να βρεις ένα μέρος να κρυφτείς και γρήγορα.\n");
	printf("Στο δωμάτιο υπάρχει μια ντουλάπα και ένα κρεββάτι.\n");
	printf("Που θα κρυφτείς;\n");
	printf("\n");
	printf("(1) Μέσα στην ντουλάπα.\n");
	printf("(2) Κάτω από το κρεββάτι.\n");
	printf("\n");
	scanf("%i",&move);
	
	switch(move){
		case 1:
			printf("\n");
			printf("Αποφασίζεις να κρυφτείς μέσα στη ντουλάπα αλλά ο φρουρός το υποψιάστηκε και σε βρήκε.\n");
			system("pause");
			system("cls");
			break;
		case 2:
			printf("\n");
			printf("Αποφασίζεις να κρυφτείς κάτω από το κρεββάτι.\n");
			system("pause");
			system("cls");
			printf("Καθώς έμπαινε ο φρουρός στο δωμάτιο σκόνταψε και έπεσε.\n");
			printf("Σε είδε τυχαία κάτω από το κρεββάτι.\n");
			break;	
		default:
			printf("\n");
			printf("Διάλεξε ένα από τα 2.\n");
			printf("\n");
			system("pause");
			system("cls");
			goto panic_room;
			break;
				
	}
		
		
		
	
	printf("Αφού σε βρήκαν οι φρουροί σε αιχμαλωτίζουν.\n");
	printf("\n");
	system("pause");
	system("cls");
	printf("Αποφάσισαν να σου δώσουν μια μόνο ευκαιρία.\n");
	printf("Αυτό που πρέπει να κάνεις είναι να λύσεις ένα γρίφο\n");
	printf("Αν τον λύσεις Θα σε αφήσουν να συνεχίσεις.\n");
fflush(stdin);		
fifth_move:		
	
	printf("Και σου λέει ο φρουρός:\n");
	printf("\n");
	printf("Πόσοι μήνες του χρόνου έχουν 28 μέρες;\n");
	printf("1)Μαϊος\n");
	printf("2)Οκτώβρης\n");
	printf("3)Όλοι\n");
	printf("\n");
	scanf("%i",&move);
		switch(move){
		case 1:
			printf("Λάθος...\n");
			printf("Σε αιχμαλώτησαν ξανά.\n");
			printf("Δοκίμασε πάλι.\n");
			printf("\n");
			system("pause");
			system("cls");
			goto fifth_move;
			break;
		case 2:
			printf("Λάθος...\n");
			printf("Σε αιχμαλώτησαν ξανά.\n");
			printf("Δοκίμασε πάλι.\n");
			printf("\n");
			system("pause");
			system("cls");
			goto fifth_move;
			break;
		case 3: 
			system("cls");
			printf("Κατάφερες και έλυσες τον γρίφο. Μπορείς να συνεχίσεις.\n");
			printf("\n");
			system("pause");
			system("cls");
			break;	
		default:
			printf("Διάλεξε μία από τις 3 απαντήσεις.\n");
				printf("\n");
				system("pause");
				system("cls");
				goto fifth_move;
				break;
				
	}
sixth_move:		
	printf("Ανοίγεις την μοναδική πόρτα του δωματίου.\n");
	printf("Είναι σκοτεινά και ο φακός σου μόλις έσβησε.\n");
	printf("Τι θα κάνεις τώρα;\n");
	printf("\n");
	printf("1)Συνέχιζεις στα σκοτάδια.\n");
	printf("2)Βγάζεις το καντίλι και το ανάβεις με τα σπίρτα.\n");
	printf("3)Χτυπάς τον φακό μήπως και δουλέψει.\n");
	printf("\n");
	scanf("%i",&move);
	switch(move){
		case 1:
			system("cls");
			printf("Επιλέγεις να κινηθείς στα σκοτάδια.\n");
			printf("Σκόνταψες σε κάτι και έκανες φασαρία.\n");
			printf("Σε άκουσαν οι φρουροί και σε αιχμαλώτησαν ξάνα\n");
			printf("Δοκίμασε πάλι.\n");
			printf("\n");
			system("pause");
			system("cls");
			goto sixth_move;
			break;
		case 2:
			system("cls");
			printf("Πολύ καλή σκέψη.\n");
			printf("Τώρα που μπορείς να δεις διασχίζεις προσεκτικά το δωμάτιο ώστε να μην σε ακούσει κανείς.\n");
			break;
		case 3: 
			system("cls");
			printf("Στην προσπάθεια σου να δουλέψει ο φακός σε άκουσαν οι φρουροί.\n");
			printf("Σε αιχμαλώτησαν πάλι.\n");
			printf("Δοκίμασε πάλι\n");
			printf("\n");
			system("pause");
			system("cls");
			goto sixth_move;
			break;	
		default:
			printf("Διάλεξε μία από τις 3 απαντήσεις.\n");
				printf("\n");
				system("pause");
				system("cls");
				goto sixth_move;
				break;
				
	}
	printf("\n");
	printf("Επιτέλους βλέπεις την εξώπορτα του σπιτιού.\n");
	printf("Με πολύ αργά βήματα πηγαίνεις προς τα εκεί.\n");
	printf("\n");
	system("pause");
	system("cls");
	printf("Η πόρτα είναι κλειδωμένη και για να ανοίξει πρέπει να λύσεις έναν τελευταίο γρίφο.\n");
	system("pause");
	system("cls");
seventh_move:	
	printf("Τρέχεις σε έναν αγώνα δρόμου και λίγο πριν το τέλος, περνάς τον δεύτερο και τερματίζεις.\nΣε τι θέση τερμάτισες;\n");
	printf("\n");
	printf("1)Πρώτη θέση.\n");
	printf("2)Τρίτη θέση.\n");
	printf("3)Δεύτερη θέση.\n");
	printf("\n");
	scanf("%i",&move);
	switch(move){
		case 1:
			system("cls");
			printf("Λάθος...Σκέψου πιο πολύ.");
			printf("Δοκίμασε πάλι.\n");
			printf("\n");
			system("pause");
			system("cls");
			goto seventh_move;
			break;
		case 2:
			system("cls");
			printf("Λάθος...Σκέψου πιο πολύ.");
			printf("Δοκίμασε πάλι.\n");
			printf("\n");
			system("pause");
			system("cls");
			goto seventh_move;
			break;
		case 3: 
			system("cls");
			printf("Μπράβο σου κατάφερες και έλυσες τον γρίφο !!!\n");
			system("pause");
			system("cls");
			break;	
		default:
			printf("Διάλεξε μία από τις 3 απαντήσεις.\n");
				printf("\n");
				system("pause");
				system("cls");
				goto seventh_move;
				break;
			}
telos:
	
	Sleep(300);
	printf("       ******************************************************\n");
	Sleep(300);
	printf("       *                                                    *\n");
	Sleep(300);
	printf("       *                                                    *\n");
	Sleep(300);
	printf("       *  Συγχαρητήρια!! Έφτασες στο τέλος του παιχνιδιού.  *\n");
	Sleep(300);
	printf("       *  Αν θες να ξεκινήσεις απο την αρχή πάτα 'ν' στο    *\n");
	Sleep(300);
	printf("       *  πληκτρολογιο και μετά 'ENTER'.Αλλιώς πάτα ο' και  *\n");
	Sleep(300);
	printf("       *  μετά 'ENTER' για να κλείσεις το παιχνίδι.         *\n");
	Sleep(300);
	printf("       *                                                    *\n");
	Sleep(300);
	printf("       *                                                    *\n");
	Sleep(300);
	printf("       ******************************************************\n");
	Sleep(300);
	printf("\n");
	printf("\n");
	printf("Θες να ξαναπαίξεις; ");
	scanf(" %c",&ch);
	if (ch == 'ν' || ch == 'n'){
		goto begin;
	}
	else {
	printf("Το παιχνίδι θα κλείσει....Πατήστε το 'ENTER' !!!\n");
}
	return(0);	
}
