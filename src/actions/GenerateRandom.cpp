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
#include "Timeline.h"

void Timeline::generate_random(size_t amount) {
    srand(time(NULL));
    if(!objs.empty())
        objs.erase(objs.begin(),objs.end());

    for(unsigned i=0;i<amount;++i) {
        if(rand()%2 == 0)
            objs.push_back(Hitobject(timing.offset+i*interval()));
        else
            objs.push_back(Hitobject(timing.offset+i*interval(), H_CLAP));
    }
}

namespace action {
void random(size_t length) {
    Timeline t();
}
}
