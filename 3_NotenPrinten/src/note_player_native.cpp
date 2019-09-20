#include "note_player_native.hpp"

void note_player_native::play( const note & n ){
	std::cout
		<< "p.play(note{"
		<< n.frequency << "," << n.duration
		<< "});"
		<<
	std::endl;
}
