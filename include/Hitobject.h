/*
     Copyright 2018 Bartosz Gleń

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/
#ifndef HITOBJECT_H
#define HITOBJECT_H

#include <string>
#include <sstream>
#include "Hitsound.h"

class Hitobject {
 private:
    int x, y, pos, hsound;
 public:
    Hitobject(int, int=H_NONE, int=256, int=192);

    /**
        Returns this hitobject's hitsound as an int.
    */
    int get_hitsound_number();

    /**
        Sets hitsound of this hitobject.
        As an argument, I suggest passing a value from
        the Hitsound enum.
        Use bitwise OR to apply multiple hitsounds
        (e.g. H_CLAP | H_FINISH).
    */
    void set_hitsound(int);

    /**
        Converts hitobject to a string representation,
        which is ready to be used by osu.
    */
    std::string str();
};

#endif // HITOBJECT_H
