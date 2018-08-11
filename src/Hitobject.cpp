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
#include "Hitobject.h"
#include "Hitsound.h"

Hitobject::Hitobject(int position, int hitsound, int _x, int _y) {
    pos = position;
    hsound = hitsound;
    x = _x;
    y = _y;
}

int Hitobject::get_hitsound_number() {
    return hsound;
}

void Hitobject::set_hitsound(int hitsound) {
    hsound = hitsound;
}

std::string Hitobject::str() {
    std::stringstream ss;
    ss << x << "," << y << ","
        << pos << ",1," << hsound << ",0:0:0:0:";
    return ss.str();
}
