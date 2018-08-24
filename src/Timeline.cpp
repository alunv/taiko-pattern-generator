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
#include <fstream>
#include "Timeline.h"

Timeline::Timeline(float bpm, int _offset) {
    tempo = bpm;
    offset = _offset;
}

void Timeline::add_object(Hitobject object) {
    objs.push_back(object);
}

Hitobject Timeline::object_at(size_t index) {
    return objs.at(index);
}

void Timeline::output_all(std::basic_ostream<char>& stream) {
    for(auto i : objs)
        stream << i.str() << std::endl;
}

float Timeline::interval() {
    return 60000.0/tempo;
}

Timeline::~Timeline() {
    objs.erase(objs.begin(),objs.end());
}
