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
#ifndef TIMELINE_H
#define TIMELINE_H

#include <cstdlib>
#include <ctime>
#include <vector>
#include "Hitobject.h"

class Timeline {
 public:
    Timeline(float, int=0);
    ~Timeline();

    /**
        Returns the hitobject at given index.
    */
    Hitobject object_at(size_t);

    /**
        Fills the timeline with randomly generated hitobjects.
    */
    void generate_random(unsigned);

    /**
        Adds a hitobject to the timeline's end.
    */
    void add_object(Hitobject);

    /**
        Outputs all hitobjects' string representations
        to the given output stream.
    */
    void output_all(std::basic_ostream<char>& stream);
 private:
    std::vector<Hitobject> objs;
    float tempo;
    int offset;
    float interval();
};
#endif // TIMELINE_H
