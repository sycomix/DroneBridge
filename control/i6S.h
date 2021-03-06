/*
 *   This file is part of DroneBridge: https://github.com/seeul8er/DroneBridge
 *
 *   Copyright 2017 Wolfgang Christl
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 */
#ifndef CONTROL_I6S_H
#define CONTROL_I6S_H

#define DEFAULT_i6S_CALIBRATION     "jscal -u 6,0,1,2,3,4,5,16,288,289,290,291,292,293,294,295,296,297,298,299,300,301,302,303 /dev/input/js0"
#define i6S_descriptor              "Flysky FS-i6S emulator"

int i6S(int Joy_IF, char calibrate_comm[]);

#endif //CONTROL_I6S_H