#ifndef _NOTE_PLAYER_NATIVE_HPP
#define _NOTE_PLAYER_NATIVE_HPP

#include "note_player.hpp"
#include <fstream>
#include <iostream>

// ===========================================================================
//
// simple note player for cmd
//
// ===========================================================================

class note_player_native : public note_player {
private:
	std::ofstream &file;
public:
	note_player_native(std::ofstream &file):
		file(file)
	{};
   
	void play( const note & n ) override;
};

#endif // _NOTE_PLAYER_NATIVE_HPP
