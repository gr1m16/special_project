#include <iostream>
#include <string>
#include "fighter.h" 
using namespace std; 


func main_menu() {
	print user's 'options (create character...)

	ask for user input

	switch 
		options
		exit
}

func create_char_menu() {
	print user's options (warrior, monk..)
		
	ask for user input

	switch
		option
		case 1:
			print "You chose warrior"
			Warrior new_warrior = Warrior()
			new_warrior.show_stats()
			edit_menu()
}
