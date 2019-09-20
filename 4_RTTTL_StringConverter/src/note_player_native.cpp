#include "note_player_native.hpp"

void note_player_native::play( const note & n ){
	file
		<< "\t\tp.play(note{"
		<< n.frequency << "," << n.duration
		<< "});\n"
	;
}