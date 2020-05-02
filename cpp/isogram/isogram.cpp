#include "isogram.h"

namespace isogram {

	bool is_isogram(std::string word){
		int len = sizeof(word);

		if(word == "") return true;

		for(int i=0; i< len; i++){
			// Get the Current Character
			char character = word[i];

			// Check if current character exists in the word.
			for(int j = 0; j < len; j++){
				if(word[j] == character) return false;
			}
		}

		return true;
	}


}  // namespace isogram
