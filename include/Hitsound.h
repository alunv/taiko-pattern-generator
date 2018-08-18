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
#ifndef HITSOUND_HPP_INCLUDED
#define HITSOUND_HPP_INCLUDED

/**
    Binary representations of hitsounds.
*/
enum Hitsound {
    H_NONE = 0b0000,
    H_WHISTLE = 0b0010,
    H_FINISH = 0b0100,
    H_CLAP = 0b1000
};

#endif // HITSOUND_HPP_INCLUDED
