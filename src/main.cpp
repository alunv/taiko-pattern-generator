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
#include <iostream>
#include <fstream>
#include <string>
#include "Hitsound.h"
#include "Hitobject.h"
#include "Timeline.h"

using namespace std;

static void show_usage(string name) {
    cerr << "Usage: " << name[0]
        << " <output_file> <bpm> <offset> <option> <option_argument>\n"
        << "Arguments:\n"
        << "\toutput_file\tFile where objects are generated to\n"
        << "\t\tbpm\tSong's tempo in BPM (beats per minute)\n"
        << "\t\toffset\tMap's offset\n"
        << "Options:\n"
        << "\t-r LENGTH\tGenerates a random stream of the given LENGTH\n"
        << endl;
}

int main(int args, char** argv) {
    if(args != 6) {
        show_usage(argv[0]);
        exit(1);
    }

    fstream f(argv[1], ios::out);
    if(!f.good())
        exit(1);

    float bpm = atof(argv[2]);
    int offset = atoi(argv[3]);
    string option(argv[4]);
    string option_arg(argv[5]);
    Timeline t(bpm, offset);
    t.generate_random(atoi(option_arg.c_str()));
    t.output_all(f);
    f.close();
    return 0;
}
