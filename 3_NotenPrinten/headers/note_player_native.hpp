#ifndef _NOTE_PLAYER_NATIVE_HPP
#define _NOTE_PLAYER_NATIVE_HPP

#include "note_player.hpp"
#include <iostream>

// ===========================================================================
//
// simple note player for cmd
//
// ===========================================================================

class note_player_native : public note_player {
public:
	note_player_native(){};
   
	void play( const note & n ) override;
};

#endif // _NOTE_PLAYER_NATIVE_HPP
