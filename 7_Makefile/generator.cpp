#include "note_player_native.hpp"
#include "rtttl_player.hpp"
#include <fstream>
#include <iostream>
#include <string>

void export_song_to_file(note_player &p, const char *song, std::ofstream &file){
	file.open("song.hpp");
	file
		<< "#ifndef SONG_HPP\n"
		<< "#define SONG_HPP\n\n"
		<< "#include \"melody.hpp\"\n\n"
		<< "class song : public melody{\n"
		<< "public:\n"
		<< "\tvoid play(note_player &p){\n";

	rtttl_play(p, song);
	
	file
		<< "\t}\n"
		<< "};\n\n"
		<< "#endif // SONG_HPP"
		;
	file.close();
}


int main(int argc, char **argv){
	std::ofstream file;
	auto p = note_player_native(file);
	export_song_to_file(p, argv[1], file);
}
