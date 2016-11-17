..  Copyright 2014-present PlatformIO <contact@platformio.org>
    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at
       http://www.apache.org/licenses/LICENSE-2.0
    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.

About
=====

This repository is a homage to the wonderfull super learning kit from keyestudio. I bought this kit and got a little frustrated from Copying and Pasting source code from the PDF, spending most time removing errors and reformating code. This repository is for everybody that would like to use this kit to full potential. All the examples from keyestudio are here plus some extra examples ported from various sources.


How to build PlatformIO based project
=====================================

1. `Install PlatformIO <http://docs.platformio.org/en/stable/installation.html>`_
2. Clone this git repository 

```
git clone https://github.com/milovanderlinden/keyestudio_SLK_KS0079.git
cd keyestudio_SLK_KS0079.git
```

3. Run these commands:

    # Change directory to example
    > 01_hello_world

    # Build project
    > platformio run

    # Upload firmware
    > platformio run --target upload

    # Build specific environment
    > platformio run -e megaatmega2560

    # Upload firmware for the specific environment
    > platformio run -e megaatmega2560 --target upload

    # Clean build files
    > platformio run --target clean
