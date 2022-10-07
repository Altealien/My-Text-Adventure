#include <iostream>
#include <stdlib.h>

int main() {
	int choice{};
	int tries{};
	char choice1,choice2,choice3,choice4,choice5;
	std::cout << "Welcome to Harry's World! Select from the options below\n";
	std::cout << "1. Begin Harry's Adventure.\n";
	std::cout << "2. Exit Harry's Adventure.\n";
	do {
		std::cout << "> ";
		std::cin >> choice;
		tries++;
	} while ((choice != 1 && choice != 2) && tries<3);
	
	system("CLS");


		// Beginning of Adventure
	if (choice == 1) {
		std::cout << "                ********************************\n";
		std::cout << "                       WELCOME TO HOGWARTS!    \n";
		std::cout << "                ********************************\n";

		std::cout << "It's the year 2001 and you've just received your Hogwarts letter in the mail.Your family's so proud of you\n";
		std::cout << "and you were so excited to start at your new school. You did your school supply shopping at Diagon alley in London.\n";
		std::cout << "It was time to go to Hogwarts. After a tearful goodbye from your parents at Platform 9 and 3/4,\n";
		std::cout << "you made your way onto the train and so the journey began.\n\n";
		std::cout << "Soon after arriving, you are guided to the main hall for the sorting hat ceremony.\n";
		std::cout << "You sit under the Sorting Hat,and it evaluates your core personality traits.\nWhat house do you belong in?\n\n";

		// First branch point which requires a choice
		std::cout << "a) GRYFFINDOR! [Strength, Brave, Courage, Resourceful, Arrogance, Will, Chivalry]" << std::endl;
		std::cout << "b) RAVENCLAW! [Wit, Curiosity, Creativity, Clever, Detail-Oriented, Calm, Snob]" << std::endl;
		std::cout << "c) HUFFLEPUFF! [Loyal, Patience, Warmth, Honest, Enthusiast, Lazy, Stubborn]" << std::endl;
		std::cout << "d) SLYTHERIN! [Ambition, Power, Quality, Manipulation, Cunning, Talent, Determination]" << std::endl;
		std::cout << "> ";
		std::cin >> choice1;
		std::system("CLS");

		if (choice1 == 'A' || choice1 == 'a') {
			std::cout << "WELCOME TO GRYFFINDOR!\n";
			std::cout << "Later that week...\nYou bolt around a corner, following the heels of two-red headed Weasely twins.\n";
			std::cout << "They had convinced you to help them steal ingredients for their Skiving Snackboxes from Professor Snape's Office.\n";
			std::cout << "Fred shoves you inside the office while George keeps watch from outside. You see some ordinary quality ingredients\n";
			std::cout << "that can easily be picked. However, you see a vial with a shiny golden liquid on the top shelf.\n";
			std::cout << "You have a feeling that the vial with golden liquid would be better to get but it's too risky.\n";
			std::cout << "What do you do?\n\na) Grab the easy to reach ingredients.\nb) Take the risk and go for the golden vial.\n";
			std::cout << "> ";
			std::cin >> choice2;
			system("CLS");

			if (choice2 == 'A' || choice2 == 'a') {
				std::cout << "You easily pick up three vials and you head back to the common room with Fred and George.\n";
				std::cout << "When you arrive at the common room, you're greeted by others and to celeberate Fred and George whip up some snacboxes for everyone.\n\n";
				std::cout << "GOOD ENDING\n";
			}

			else if (choice2 == 'B' || choice2 == 'b') {
				std::cout << "You take the risk and go for the golden vial. You grab a stool, get on it and steady yourself,your hand touches the vial ";
				std::cout << "but you're startled by George who rushes in to tell you that Professor Snape was on his way.\n";
				std::cout << "In your attempt to get down and quickly leave the office, you fall off the stool, break multiple potions and Professor Snape walks in.\n";
				std::cout << "You, Fred and George are given detention and 100 points are removed from Gryffindor.\n\n";
				std::cout << "BAD ENDING\n";
			}

			else {
				std::cout << "Invalid Input";
			}
		}

		else if (choice1 == 'B' || choice1 == 'b') {
			std::cout << "WELCOME TO RAVENCLAW!\n";
			std::cout << "Later that week...\nYou yawn after checking the time.It's 1AM. Like a good student,\n";
			std::cout << "you had stayed up to study for a major Potions test the next morning.After doing the math,\n";
			std::cout << "you realised you would only get 5 hours of sleep if you went to bed in an hour, you begin packing up books to return them to their rightful positions.\n";
			std::cout << "However, there are quite a lot of books. You are at a crossroads and have two choices.\n\n";
			std::cout << "a) Grab a few at a time which would take a while.\nb) Grab a lot and spend less time.\n";
			std::cout << "> ";
			std::cin >> choice3;
			system("CLS");

			if (choice3 == 'A' || choice3 == 'a') {
				std::cout << "You begin by taking 2-3 books back at a time(to be meticulous), but that's really slow and you end spending so much time.\n";
				std::cout << "You barely get any sleep before you have to be up. It's time for the test and you're having a really hard time trying to stay awake and think at the same time.\n";
				std::cout << "You end up not completing the test because you spent most of the time trying to keep yourself awake, thus letting you get a C.\n\n";
				std::cout << "BAD ENDING\n";
			}

			else if (choice3 == 'B' || choice3 == 'b') {
				std::cout << "You begin by taking 4-5 books back at a time(they're kinda heavy), but that's the price to pay so you can avoid spending so much time.\n";
				std::cout << "You get back to your dorm and you are able to rest up. It's time for the test and you feel alive, you look through the questions and see a lot of the things you read.\n";
				std::cout << "You finish the test. The results are in and you get an A+!\n\n";
				std::cout << "GOOD ENDING\n";
			}

			else {
				std::cout << "Invalid Input";
			}
		}

		else if (choice1 == 'C' || choice1 == 'c') {
			std::cout << "WELCOME TO HUFFLEPUFF!\n";
			std::cout << "Later that week...\nYou walk to Transfiguration class while chatting with new friends. They ask you to come with them on a Hogsmeade field trip,\n";
			std::cout << "but you already promised a girl you barely knew you'd stay behind and tutor her for an important test coming up.\n";
			std::cout << "What do you do?\na) Go to Hogsmeade with your friends.\nb) Stay behind to help tutor the girl.\n";
			std::cout << "> ";
			std::cin >> choice4;
			system("CLS");


			if (choice4 == 'A' || choice4 == 'a') {
				std::cout << "You decide to go on the field trip with your friends and you guys had the most amazing time.\n";
				std::cout << "You went to Honeydukes,Gladrags Wizardwear and got yourselves new clothes.\n";
				std::cout <<"The trip ended with you and your friends at The Three Broomsticks enjoying butterbeers.\n\n";
				std::cout << "GOOD ENDING\n";
			}

			else if (choice4 == 'B' || choice4 == 'b') {
				std::cout << "Even after your friend's pleas you decide to stay back...It was time for the field trip and you had just said goodbye to your friends.\n";
				std::cout << "You headed to library and began the tutorial session. It proved difficult and you had your doubts. You said to yourself 'I probably should've gone for the field trip.'\n";
				std::cout << "In the end, the tutorial session turned out good and when the test results came out you both passed.\n+1 New friend\n\n";
				std::cout << "GOOD ENDING\n";
			}

			else {
				std::cout << "Invalid Input";
			}
		}

		else if (choice1 == 'D' || choice1 == 'd') {
			std::cout << "WELCOME TO SLYTHERIN!\n";
			std::cout << "Later that week...\nYou were running late for class, as you hurried through the corridor you saw some of your friends surrounding a Gryffindor first year.\n";
			std::cout << "As you got closer, you saw they were using 'wingardium leviosa' to keep his books out of reach. Something about this scene bothers you.\n";
			std::cout << "What do you do?\na) Keep walking.\nb) Join your friends and tease the boy even more.\n";
			std::cout << "> ";
			std::cin >> choice5;
			system("CLS");


			if (choice5 == 'A' || choice5 == 'a') {
				std::cout <<"You decide to keep walking since you were already late for class, even though you wanted to join your friends.\n";
				std::cout << "You get to class just in time and asked the Professor a few questions you had written down and he's impressed. \n";
				std::cout << "100 points to Slytherine.\n\n";
				std::cout << "GOOD ENDING\n";
				
			}

			else if (choice5 == 'B' || choice5 == 'b') {
				std::cout << "You join in to have fun with your friends, but you're caught by the headmaster Albus Dumbledore.\n";
				std::cout << "You and your friends are given detention and 150 points deducted from Slytherin.\n\n";
				std::cout << "BAD ENDING\n";
				
			}

			else {
				std::cout << "Invalid Input";
			}
		}

		else {
			std::cout << "\nInvalid Input\n";
			std::system("CLS");
		}
	}
	else {
		std::cout << "Goodbye :-)";
	}
}


